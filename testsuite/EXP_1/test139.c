#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -1;
int32_t t0 = 266323952;
uint8_t x5 = UINT8_MAX;
volatile uint16_t x11 = 23U;
static int8_t x17 = INT8_MIN;
uint64_t x19 = 24476257LLU;
uint16_t x27 = UINT16_MAX;
uint32_t x28 = 461788929U;
static uint32_t x30 = UINT32_MAX;
int64_t x31 = INT64_MIN;
int32_t x46 = -344108519;
volatile int8_t x55 = -1;
volatile int8_t x59 = INT8_MIN;
static volatile int32_t t12 = 3377;
int16_t x61 = INT16_MIN;
static int8_t x64 = INT8_MIN;
volatile int32_t t13 = -27;
int64_t x67 = -1LL;
volatile int32_t x75 = INT32_MIN;
int8_t x80 = -1;
uint64_t x86 = 16362499LLU;
uint32_t x87 = UINT32_MAX;
uint16_t x88 = 279U;
volatile int32_t t18 = 20;
int64_t x94 = 49368453131LL;
volatile int64_t x96 = 1456911598412LL;
volatile int32_t x100 = INT32_MIN;
static int16_t x107 = INT16_MIN;
volatile int32_t t21 = 314;
static volatile int32_t x109 = -139132;
int8_t x113 = -1;
volatile int32_t x134 = -48;
uint16_t x137 = 1255U;
int32_t t27 = 22195915;
int8_t x147 = INT8_MIN;
int8_t x148 = INT8_MIN;
volatile int8_t x152 = 20;
int64_t x154 = INT64_MIN;
volatile int16_t x162 = 44;
static int64_t x169 = INT64_MAX;
static int32_t x171 = -203920359;
int8_t x172 = -1;
int32_t t33 = -116860809;
uint64_t x175 = 617138598441143769LLU;
static int64_t x177 = -2LL;
volatile uint64_t x179 = 46LLU;
volatile int32_t t35 = 8571;
int64_t x181 = 653240143360LL;
volatile int64_t x184 = -1LL;
int8_t x186 = INT8_MIN;
int32_t x193 = -1;
volatile int64_t x195 = INT64_MAX;
static int32_t t42 = -119384109;
static volatile int32_t t43 = 10201;
int16_t x219 = 0;
static uint8_t x225 = UINT8_MAX;
volatile int16_t x231 = 0;
int16_t x237 = INT16_MAX;
static uint32_t x238 = 59154960U;
uint8_t x239 = UINT8_MAX;
int8_t x247 = 0;
volatile int16_t x248 = INT16_MIN;
volatile int32_t t51 = -28359;
uint16_t x249 = 13U;
int16_t x250 = -3;
int16_t x259 = -1;
int32_t x266 = -1;
static int32_t x272 = -7;
volatile int32_t x273 = 232;
int8_t x275 = INT8_MAX;
volatile int64_t x282 = INT64_MIN;
uint16_t x283 = 10101U;
static int16_t x284 = 1940;
int64_t x288 = INT64_MIN;
int32_t t61 = 237139;
volatile int8_t x289 = 1;
static uint64_t x290 = UINT64_MAX;
uint32_t x292 = 2813917U;
uint64_t x296 = UINT64_MAX;
uint32_t x297 = 96919706U;
volatile int32_t t64 = 272120876;
int32_t t66 = -4952140;
int64_t x309 = 1988LL;
int64_t x311 = INT64_MAX;
uint64_t x316 = UINT64_MAX;
volatile int16_t x320 = INT16_MIN;
static int64_t x321 = INT64_MIN;
static volatile int16_t x338 = INT16_MAX;
uint32_t x340 = 879U;
static int64_t x350 = INT64_MAX;
int16_t x352 = -1;
uint64_t x356 = UINT64_MAX;
volatile int32_t t74 = -278156;
int32_t x357 = INT32_MIN;
int32_t x359 = INT32_MIN;
int32_t x367 = INT32_MAX;
uint32_t x369 = UINT32_MAX;
volatile int16_t x373 = INT16_MIN;
int16_t x377 = -82;
int16_t x384 = INT16_MIN;
volatile int8_t x389 = INT8_MIN;
volatile int32_t t83 = 922388;
static int16_t x396 = INT16_MIN;
int32_t t84 = 33;
int64_t x398 = INT64_MIN;
int32_t x400 = INT32_MIN;
int32_t x403 = 0;
int8_t x408 = INT8_MIN;
static volatile int32_t t87 = -10;
static int32_t x412 = INT32_MAX;
int32_t t88 = 48175;
volatile uint32_t x418 = 511366099U;
int32_t t90 = 656;
uint16_t x421 = 104U;
uint32_t x424 = 0U;
static int16_t x429 = 316;
uint32_t x431 = UINT32_MAX;
uint32_t x436 = UINT32_MAX;
volatile uint8_t x440 = 5U;
int16_t x454 = INT16_MIN;
volatile int32_t t98 = 113705625;


void f0(void) {
	int64_t x2 = INT64_MAX;
	int16_t x3 = INT16_MIN;
	int8_t x4 = 50;

	t0 = (((x1+x2)&x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = INT8_MAX;
	volatile uint64_t x7 = UINT64_MAX;
	int8_t x8 = 6;
	int32_t t1 = 4;

	t1 = (((x5+x6)&x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	uint32_t x10 = 67983977U;
	static int64_t x12 = -1LL;
	volatile int32_t t2 = 27911;

	t2 = (((x9+x10)&x11)<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x18 = INT16_MIN;
	static int16_t x20 = INT16_MIN;
	int32_t t3 = 5921;

	t3 = (((x17+x18)&x19)<x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x21 = -407253691;
	int8_t x22 = -2;
	static volatile uint16_t x23 = 1U;
	volatile int8_t x24 = INT8_MIN;
	int32_t t4 = 3;

	t4 = (((x21+x22)&x23)<x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = -43;
	static uint8_t x26 = UINT8_MAX;
	volatile int32_t t5 = 134249810;

	t5 = (((x25+x26)&x27)<x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x29 = INT8_MIN;
	uint32_t x32 = UINT32_MAX;
	int32_t t6 = 4542;

	t6 = (((x29+x30)&x31)<x32);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MIN;
	uint8_t x34 = UINT8_MAX;
	int16_t x35 = INT16_MAX;
	int32_t x36 = INT32_MIN;
	volatile int32_t t7 = 177300659;

	t7 = (((x33+x34)&x35)<x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x37 = -1LL;
	int64_t x38 = 913LL;
	volatile int16_t x39 = -1;
	uint32_t x40 = 50U;
	volatile int32_t t8 = -358598;

	t8 = (((x37+x38)&x39)<x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x45 = UINT32_MAX;
	volatile uint8_t x47 = UINT8_MAX;
	int64_t x48 = 1585LL;
	volatile int32_t t9 = -953809830;

	t9 = (((x45+x46)&x47)<x48);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = INT16_MIN;
	static uint16_t x50 = 2220U;
	int16_t x51 = INT16_MIN;
	int16_t x52 = -1;
	int32_t t10 = -26275;

	t10 = (((x49+x50)&x51)<x52);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint8_t x53 = UINT8_MAX;
	int8_t x54 = 24;
	int32_t x56 = 30834;
	static int32_t t11 = -124;

	t11 = (((x53+x54)&x55)<x56);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint64_t x57 = 59562497509741134LLU;
	uint16_t x58 = 1U;
	static int64_t x60 = INT64_MAX;

	t12 = (((x57+x58)&x59)<x60);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x62 = 7306985672120048LLU;
	uint8_t x63 = UINT8_MAX;

	t13 = (((x61+x62)&x63)<x64);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x65 = INT16_MIN;
	volatile uint16_t x66 = 1404U;
	uint8_t x68 = 39U;
	int32_t t14 = 1319084;

	t14 = (((x65+x66)&x67)<x68);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x73 = INT8_MIN;
	int64_t x74 = INT64_MAX;
	int16_t x76 = -11;
	volatile int32_t t15 = 36;

	t15 = (((x73+x74)&x75)<x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = -1;
	static uint8_t x78 = UINT8_MAX;
	uint8_t x79 = 0U;
	int32_t t16 = -1725554;

	t16 = (((x77+x78)&x79)<x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = INT16_MIN;
	static volatile uint32_t x82 = 793U;
	volatile uint8_t x83 = UINT8_MAX;
	int16_t x84 = INT16_MAX;
	static int32_t t17 = -1;

	t17 = (((x81+x82)&x83)<x84);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x85 = 1;

	t18 = (((x85+x86)&x87)<x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x93 = INT64_MIN;
	uint16_t x95 = UINT16_MAX;
	int32_t t19 = -738153;

	t19 = (((x93+x94)&x95)<x96);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x97 = 6046;
	int8_t x98 = -1;
	static volatile uint64_t x99 = UINT64_MAX;
	volatile int32_t t20 = -1818;

	t20 = (((x97+x98)&x99)<x100);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x105 = -117205496;
	volatile int8_t x106 = -13;
	uint32_t x108 = UINT32_MAX;

	t21 = (((x105+x106)&x107)<x108);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x110 = 188LL;
	int16_t x111 = INT16_MIN;
	int8_t x112 = INT8_MIN;
	int32_t t22 = -89;

	t22 = (((x109+x110)&x111)<x112);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x114 = 8316U;
	static int16_t x115 = INT16_MIN;
	static int8_t x116 = INT8_MAX;
	int32_t t23 = -7;

	t23 = (((x113+x114)&x115)<x116);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x125 = -58;
	static int16_t x126 = -902;
	int8_t x127 = 0;
	int8_t x128 = -5;
	static volatile int32_t t24 = -129286545;

	t24 = (((x125+x126)&x127)<x128);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x129 = INT8_MIN;
	uint8_t x130 = 6U;
	int32_t x131 = INT32_MIN;
	int16_t x132 = -104;
	int32_t t25 = 352407691;

	t25 = (((x129+x130)&x131)<x132);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x133 = INT16_MAX;
	static uint8_t x135 = UINT8_MAX;
	static int64_t x136 = INT64_MAX;
	volatile int32_t t26 = -4375;

	t26 = (((x133+x134)&x135)<x136);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x138 = -1LL;
	int16_t x139 = INT16_MIN;
	uint16_t x140 = UINT16_MAX;

	t27 = (((x137+x138)&x139)<x140);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x145 = -28504946102117747LL;
	static volatile int8_t x146 = INT8_MIN;
	volatile int32_t t28 = 3810116;

	t28 = (((x145+x146)&x147)<x148);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x149 = 125U;
	int8_t x150 = INT8_MAX;
	int16_t x151 = INT16_MIN;
	int32_t t29 = -204948007;

	t29 = (((x149+x150)&x151)<x152);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x153 = 148435755LL;
	int8_t x155 = INT8_MIN;
	static uint64_t x156 = 49945521457242LLU;
	int32_t t30 = -116;

	t30 = (((x153+x154)&x155)<x156);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x157 = 32;
	int16_t x158 = INT16_MIN;
	int64_t x159 = INT64_MIN;
	int64_t x160 = INT64_MIN;
	static int32_t t31 = 10717;

	t31 = (((x157+x158)&x159)<x160);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x161 = -1;
	static uint16_t x163 = 3745U;
	static uint32_t x164 = 39676573U;
	volatile int32_t t32 = 432011;

	t32 = (((x161+x162)&x163)<x164);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x170 = INT8_MIN;

	t33 = (((x169+x170)&x171)<x172);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x173 = -41;
	uint64_t x174 = 76773LLU;
	int16_t x176 = INT16_MIN;
	static int32_t t34 = 1;

	t34 = (((x173+x174)&x175)<x176);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x178 = 4446345U;
	int64_t x180 = INT64_MAX;

	t35 = (((x177+x178)&x179)<x180);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x182 = UINT16_MAX;
	volatile int32_t x183 = 1135500;
	int32_t t36 = 57435;

	t36 = (((x181+x182)&x183)<x184);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x185 = UINT32_MAX;
	volatile uint64_t x187 = 326633737913912LLU;
	int16_t x188 = -12;
	int32_t t37 = 512228;

	t37 = (((x185+x186)&x187)<x188);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x189 = 0LL;
	int8_t x190 = INT8_MAX;
	uint8_t x191 = 54U;
	static uint64_t x192 = 55680370LLU;
	volatile int32_t t38 = -63618;

	t38 = (((x189+x190)&x191)<x192);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x194 = -1;
	int8_t x196 = -10;
	static volatile int32_t t39 = -32122;

	t39 = (((x193+x194)&x195)<x196);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x201 = 2803U;
	int32_t x202 = 30674642;
	uint16_t x203 = 18729U;
	int16_t x204 = -1243;
	volatile int32_t t40 = -338050832;

	t40 = (((x201+x202)&x203)<x204);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x205 = INT16_MIN;
	int16_t x206 = 48;
	int16_t x207 = INT16_MIN;
	uint16_t x208 = UINT16_MAX;
	volatile int32_t t41 = 28;

	t41 = (((x205+x206)&x207)<x208);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x209 = INT32_MIN;
	static volatile uint32_t x210 = 119U;
	uint8_t x211 = 23U;
	uint8_t x212 = 0U;

	t42 = (((x209+x210)&x211)<x212);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x213 = INT16_MIN;
	volatile int16_t x214 = INT16_MAX;
	int16_t x215 = INT16_MAX;
	int64_t x216 = -293965407614LL;

	t43 = (((x213+x214)&x215)<x216);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x217 = UINT16_MAX;
	static int32_t x218 = 0;
	int16_t x220 = 137;
	volatile int32_t t44 = -82;

	t44 = (((x217+x218)&x219)<x220);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x221 = -32;
	int8_t x222 = INT8_MAX;
	volatile uint8_t x223 = 60U;
	static int64_t x224 = INT64_MIN;
	volatile int32_t t45 = 405106;

	t45 = (((x221+x222)&x223)<x224);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x226 = 16U;
	volatile uint64_t x227 = 219370761LLU;
	int32_t x228 = -58;
	volatile int32_t t46 = -1;

	t46 = (((x225+x226)&x227)<x228);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x229 = 186;
	static uint8_t x230 = 0U;
	volatile uint16_t x232 = 323U;
	int32_t t47 = 1116;

	t47 = (((x229+x230)&x231)<x232);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x233 = -1;
	volatile uint64_t x234 = 1902798677LLU;
	int32_t x235 = -1;
	uint64_t x236 = UINT64_MAX;
	int32_t t48 = -7;

	t48 = (((x233+x234)&x235)<x236);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x240 = INT64_MIN;
	volatile int32_t t49 = -20573104;

	t49 = (((x237+x238)&x239)<x240);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x241 = INT32_MAX;
	int16_t x242 = -1;
	volatile uint8_t x243 = 0U;
	volatile int32_t x244 = -261028147;
	int32_t t50 = -12340337;

	t50 = (((x241+x242)&x243)<x244);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x245 = UINT64_MAX;
	int32_t x246 = INT32_MIN;

	t51 = (((x245+x246)&x247)<x248);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x251 = 402020386955579LLU;
	uint8_t x252 = UINT8_MAX;
	int32_t t52 = 25926031;

	t52 = (((x249+x250)&x251)<x252);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x253 = INT8_MIN;
	int8_t x254 = INT8_MIN;
	static int32_t x255 = INT32_MIN;
	int32_t x256 = -28;
	volatile int32_t t53 = 23193263;

	t53 = (((x253+x254)&x255)<x256);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x257 = INT32_MAX;
	int8_t x258 = INT8_MIN;
	int64_t x260 = INT64_MIN;
	volatile int32_t t54 = -1007;

	t54 = (((x257+x258)&x259)<x260);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x261 = INT8_MAX;
	volatile uint16_t x262 = 1764U;
	int8_t x263 = -1;
	int16_t x264 = INT16_MAX;
	static volatile int32_t t55 = 11;

	t55 = (((x261+x262)&x263)<x264);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x265 = 3LL;
	static volatile int64_t x267 = -1LL;
	static uint64_t x268 = 13LLU;
	static int32_t t56 = 197;

	t56 = (((x265+x266)&x267)<x268);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x269 = INT8_MAX;
	int64_t x270 = INT64_MIN;
	int8_t x271 = INT8_MIN;
	volatile int32_t t57 = -1996304;

	t57 = (((x269+x270)&x271)<x272);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x274 = INT8_MIN;
	int16_t x276 = 90;
	volatile int32_t t58 = 298;

	t58 = (((x273+x274)&x275)<x276);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x277 = 102U;
	uint16_t x278 = UINT16_MAX;
	int64_t x279 = INT64_MIN;
	int64_t x280 = INT64_MIN;
	int32_t t59 = 2040;

	t59 = (((x277+x278)&x279)<x280);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x281 = INT8_MAX;
	volatile int32_t t60 = -2;

	t60 = (((x281+x282)&x283)<x284);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x285 = INT32_MAX;
	int16_t x286 = -1;
	uint16_t x287 = 56U;

	t61 = (((x285+x286)&x287)<x288);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x291 = 7172U;
	volatile int32_t t62 = -75;

	t62 = (((x289+x290)&x291)<x292);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x293 = 126U;
	uint64_t x294 = 3LLU;
	int32_t x295 = INT32_MIN;
	volatile int32_t t63 = 183060;

	t63 = (((x293+x294)&x295)<x296);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x298 = 0;
	uint64_t x299 = UINT64_MAX;
	static int16_t x300 = -17;

	t64 = (((x297+x298)&x299)<x300);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x301 = -3233074LL;
	int16_t x302 = INT16_MAX;
	volatile uint8_t x303 = 78U;
	static int64_t x304 = INT64_MIN;
	volatile int32_t t65 = -59289423;

	t65 = (((x301+x302)&x303)<x304);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x305 = UINT16_MAX;
	static volatile uint8_t x306 = 14U;
	int64_t x307 = INT64_MAX;
	uint16_t x308 = 3U;

	t66 = (((x305+x306)&x307)<x308);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x310 = -1;
	int16_t x312 = 0;
	static volatile int32_t t67 = 11776;

	t67 = (((x309+x310)&x311)<x312);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x313 = INT64_MIN;
	uint32_t x314 = 670U;
	volatile int16_t x315 = -3;
	static int32_t t68 = -2;

	t68 = (((x313+x314)&x315)<x316);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x317 = 2165636686833245091LL;
	static volatile int16_t x318 = -1;
	int64_t x319 = INT64_MIN;
	volatile int32_t t69 = 219259;

	t69 = (((x317+x318)&x319)<x320);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x322 = 0;
	static int8_t x323 = -1;
	int16_t x324 = INT16_MAX;
	static int32_t t70 = 0;

	t70 = (((x321+x322)&x323)<x324);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint32_t x329 = 974680588U;
	volatile uint16_t x330 = 20U;
	uint8_t x331 = 0U;
	static uint32_t x332 = 2894896U;
	volatile int32_t t71 = 4;

	t71 = (((x329+x330)&x331)<x332);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x337 = 106U;
	int32_t x339 = INT32_MIN;
	int32_t t72 = 461326466;

	t72 = (((x337+x338)&x339)<x340);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x349 = INT16_MIN;
	int32_t x351 = INT32_MAX;
	int32_t t73 = -922;

	t73 = (((x349+x350)&x351)<x352);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x353 = -1;
	uint32_t x354 = 80402U;
	static int8_t x355 = INT8_MAX;

	t74 = (((x353+x354)&x355)<x356);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x358 = 0U;
	volatile uint64_t x360 = UINT64_MAX;
	volatile int32_t t75 = -503179;

	t75 = (((x357+x358)&x359)<x360);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x361 = 50567212U;
	volatile uint32_t x362 = 1229436U;
	int64_t x363 = -1LL;
	static int8_t x364 = -1;
	static volatile int32_t t76 = -1067649726;

	t76 = (((x361+x362)&x363)<x364);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x365 = 491U;
	int8_t x366 = INT8_MIN;
	int32_t x368 = INT32_MAX;
	static volatile int32_t t77 = -203306232;

	t77 = (((x365+x366)&x367)<x368);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint64_t x370 = 4348991780706160593LLU;
	uint64_t x371 = UINT64_MAX;
	volatile int16_t x372 = -1366;
	volatile int32_t t78 = -1359579;

	t78 = (((x369+x370)&x371)<x372);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x374 = -1LL;
	volatile uint64_t x375 = 2237418944051855LLU;
	static uint16_t x376 = UINT16_MAX;
	volatile int32_t t79 = 510853367;

	t79 = (((x373+x374)&x375)<x376);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x378 = -1;
	volatile uint32_t x379 = 1922131U;
	int32_t x380 = INT32_MIN;
	static volatile int32_t t80 = -4403;

	t80 = (((x377+x378)&x379)<x380);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x381 = INT16_MAX;
	volatile int16_t x382 = INT16_MIN;
	int16_t x383 = INT16_MAX;
	volatile int32_t t81 = -91;

	t81 = (((x381+x382)&x383)<x384);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x385 = 17LLU;
	static int16_t x386 = -1;
	uint32_t x387 = 56610U;
	volatile int64_t x388 = INT64_MIN;
	volatile int32_t t82 = -642;

	t82 = (((x385+x386)&x387)<x388);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x390 = INT16_MIN;
	uint8_t x391 = 89U;
	int8_t x392 = 1;

	t83 = (((x389+x390)&x391)<x392);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x393 = 101U;
	static uint64_t x394 = UINT64_MAX;
	uint32_t x395 = UINT32_MAX;

	t84 = (((x393+x394)&x395)<x396);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x397 = 3U;
	int64_t x399 = 817LL;
	volatile int32_t t85 = -131776;

	t85 = (((x397+x398)&x399)<x400);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x401 = -1;
	volatile uint8_t x402 = UINT8_MAX;
	uint16_t x404 = 3191U;
	volatile int32_t t86 = -9043;

	t86 = (((x401+x402)&x403)<x404);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x405 = 1635270656426817040LLU;
	volatile int64_t x406 = 12746486963LL;
	uint64_t x407 = 5825218809394557404LLU;

	t87 = (((x405+x406)&x407)<x408);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x409 = INT8_MAX;
	static int32_t x410 = -1;
	uint32_t x411 = UINT32_MAX;

	t88 = (((x409+x410)&x411)<x412);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x413 = INT32_MAX;
	volatile int32_t x414 = -1;
	volatile int64_t x415 = -1894915638918LL;
	int8_t x416 = -1;
	volatile int32_t t89 = 1;

	t89 = (((x413+x414)&x415)<x416);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x417 = 4238471LLU;
	int16_t x419 = 18;
	int64_t x420 = 261461731085118102LL;

	t90 = (((x417+x418)&x419)<x420);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x422 = 496667LL;
	int64_t x423 = 11422755LL;
	static int32_t t91 = 103781850;

	t91 = (((x421+x422)&x423)<x424);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x425 = 0U;
	volatile uint8_t x426 = UINT8_MAX;
	uint32_t x427 = 247162876U;
	static int32_t x428 = INT32_MIN;
	volatile int32_t t92 = 484987880;

	t92 = (((x425+x426)&x427)<x428);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x430 = 55349999878554LLU;
	int64_t x432 = INT64_MIN;
	static volatile int32_t t93 = 4044026;

	t93 = (((x429+x430)&x431)<x432);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x433 = -1;
	int16_t x434 = INT16_MIN;
	int64_t x435 = INT64_MAX;
	static volatile int32_t t94 = -25015;

	t94 = (((x433+x434)&x435)<x436);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x437 = -1;
	static int64_t x438 = -1LL;
	int32_t x439 = -1;
	volatile int32_t t95 = 124511643;

	t95 = (((x437+x438)&x439)<x440);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x441 = -7083;
	uint64_t x442 = 204020679LLU;
	uint64_t x443 = 823157248LLU;
	int16_t x444 = INT16_MIN;
	static volatile int32_t t96 = -105;

	t96 = (((x441+x442)&x443)<x444);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x445 = INT64_MAX;
	static int16_t x446 = INT16_MIN;
	static int16_t x447 = 4;
	uint16_t x448 = 7459U;
	int32_t t97 = 1454;

	t97 = (((x445+x446)&x447)<x448);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x453 = -24153380;
	static uint16_t x455 = UINT16_MAX;
	volatile int32_t x456 = 59319040;

	t98 = (((x453+x454)&x455)<x456);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x457 = -1LL;
	static int16_t x458 = -1;
	static int32_t x459 = 235297;
	static uint16_t x460 = 452U;
	int32_t t99 = 810;

	t99 = (((x457+x458)&x459)<x460);

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

