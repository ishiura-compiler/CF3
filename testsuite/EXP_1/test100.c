#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = 230LL;
int16_t x10 = INT16_MAX;
uint8_t x23 = 2U;
static volatile uint16_t x46 = UINT16_MAX;
int16_t x50 = -29;
int64_t x51 = INT64_MIN;
int32_t t10 = 2745949;
uint8_t x57 = 4U;
uint32_t x58 = 6U;
int8_t x67 = INT8_MAX;
volatile int32_t t14 = 0;
int16_t x69 = 1;
int64_t x80 = -20471LL;
int32_t t17 = -1876;
static int64_t x84 = -1LL;
static int64_t x85 = -1LL;
volatile int16_t x89 = INT16_MAX;
static int64_t x91 = INT64_MIN;
static volatile int32_t t20 = -1575;
uint64_t x97 = 225LLU;
int8_t x100 = INT8_MAX;
uint32_t x104 = 7583U;
static uint64_t x109 = 33623454392961LLU;
int32_t t26 = 26171188;
volatile int32_t x121 = INT32_MIN;
volatile int32_t t27 = -7;
uint64_t x125 = UINT64_MAX;
uint64_t x129 = 9182475348812LLU;
static int32_t x132 = INT32_MAX;
volatile int32_t t29 = 3404378;
int16_t x134 = INT16_MAX;
static int64_t x139 = INT64_MIN;
int16_t x141 = -11;
int32_t t34 = -16525;
uint8_t x158 = UINT8_MAX;
int16_t x164 = -31;
volatile int32_t t36 = -104;
uint32_t x174 = UINT32_MAX;
int32_t x176 = 185158;
int32_t t39 = 1631451;
volatile int32_t t40 = 1347370;
int16_t x183 = INT16_MIN;
int32_t t41 = 36402703;
uint32_t x190 = 4U;
volatile int32_t t46 = -6;
int16_t x210 = INT16_MIN;
int64_t x212 = INT64_MIN;
int8_t x217 = INT8_MIN;
volatile uint16_t x228 = UINT16_MAX;
uint32_t x234 = 2174557U;
static int8_t x235 = 5;
int32_t t51 = 1515;
static int64_t x239 = INT64_MIN;
volatile int32_t t52 = 984;
uint32_t x261 = UINT32_MAX;
volatile int32_t x264 = -84249;
static int32_t x267 = INT32_MAX;
int32_t x268 = INT32_MAX;
int64_t x276 = INT64_MIN;
static int16_t x293 = 2346;
int16_t x295 = INT16_MIN;
int8_t x296 = INT8_MIN;
uint8_t x299 = 3U;
int16_t x304 = INT16_MAX;
volatile int16_t x305 = -1546;
int32_t t69 = -5;
static int16_t x316 = -1;
int32_t x323 = 1385;
static int64_t x330 = -4576689LL;
static int32_t t73 = -27251;
static volatile int32_t x334 = INT32_MIN;
volatile int32_t t74 = 7;
uint32_t x340 = 4334800U;
uint8_t x341 = 8U;
uint64_t x344 = 8497LLU;
int32_t x346 = INT32_MAX;
int32_t x357 = -1;
int32_t t80 = -825008;
uint16_t x372 = 10367U;
int32_t t82 = -5;
int64_t x376 = INT64_MIN;
volatile int32_t t83 = -183571618;
int16_t x378 = INT16_MIN;
int32_t t84 = -10488;
int8_t x381 = -1;
volatile int64_t x383 = INT64_MAX;
int16_t x411 = INT16_MIN;
uint8_t x414 = UINT8_MAX;
int32_t x416 = INT32_MIN;
int16_t x424 = INT16_MIN;
static uint16_t x430 = 17800U;
int16_t x441 = 8320;
int16_t x444 = -1;
uint64_t x450 = 936809558058908059LLU;


void f0(void) {
	uint64_t x2 = 14595LLU;
	int8_t x3 = INT8_MAX;
	int64_t x4 = 421967843718LL;
	int32_t t0 = -27051;

	t0 = (((x1+x2)==x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	int64_t x6 = -86LL;
	int64_t x7 = INT64_MAX;
	uint8_t x8 = 127U;
	volatile int32_t t1 = -1060724604;

	t1 = (((x5+x6)==x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	int16_t x11 = 23;
	int16_t x12 = INT16_MAX;
	int32_t t2 = -1;

	t2 = (((x9+x10)==x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint32_t x13 = 0U;
	uint32_t x14 = UINT32_MAX;
	int8_t x15 = 2;
	uint8_t x16 = UINT8_MAX;
	static int32_t t3 = -366;

	t3 = (((x13+x14)==x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	int32_t x18 = INT32_MIN;
	static uint16_t x19 = 1701U;
	int16_t x20 = INT16_MIN;
	static int32_t t4 = 24;

	t4 = (((x17+x18)==x19)<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 3U;
	volatile int32_t x22 = INT32_MIN;
	int16_t x24 = INT16_MAX;
	int32_t t5 = 31;

	t5 = (((x21+x22)==x23)<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	int16_t x26 = INT16_MAX;
	static int64_t x27 = INT64_MIN;
	int8_t x28 = 6;
	int32_t t6 = 165633;

	t6 = (((x25+x26)==x27)<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	uint16_t x30 = 7U;
	volatile int16_t x31 = -61;
	uint16_t x32 = UINT16_MAX;
	volatile int32_t t7 = 109291989;

	t7 = (((x29+x30)==x31)<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 14987;
	int32_t x34 = 374034;
	uint16_t x35 = UINT16_MAX;
	static uint16_t x36 = 123U;
	int32_t t8 = 31734;

	t8 = (((x33+x34)==x35)<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = -1;
	uint64_t x47 = 38905548845446044LLU;
	volatile int64_t x48 = -50LL;
	int32_t t9 = 332335;

	t9 = (((x45+x46)==x47)<x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = INT8_MAX;
	int16_t x52 = INT16_MIN;

	t10 = (((x49+x50)==x51)<x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x53 = UINT16_MAX;
	static uint64_t x54 = 1067692415092156LLU;
	int16_t x55 = INT16_MIN;
	int16_t x56 = -31;
	volatile int32_t t11 = 687;

	t11 = (((x53+x54)==x55)<x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x59 = 0U;
	volatile int64_t x60 = -500348LL;
	volatile int32_t t12 = -443463662;

	t12 = (((x57+x58)==x59)<x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x61 = 10271U;
	uint16_t x62 = 302U;
	volatile int16_t x63 = -116;
	volatile uint16_t x64 = UINT16_MAX;
	static int32_t t13 = 1;

	t13 = (((x61+x62)==x63)<x64);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = -1;
	volatile int16_t x66 = INT16_MAX;
	uint32_t x68 = 516378489U;

	t14 = (((x65+x66)==x67)<x68);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x70 = 12817593LL;
	static volatile int64_t x71 = -1LL;
	int16_t x72 = 114;
	volatile int32_t t15 = 6342947;

	t15 = (((x69+x70)==x71)<x72);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x73 = 19U;
	volatile uint32_t x74 = 51501063U;
	int16_t x75 = -1;
	int8_t x76 = INT8_MIN;
	int32_t t16 = -898238;

	t16 = (((x73+x74)==x75)<x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x77 = 3U;
	static volatile int64_t x78 = INT64_MIN;
	uint8_t x79 = UINT8_MAX;

	t17 = (((x77+x78)==x79)<x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x81 = 198650LLU;
	int16_t x82 = 109;
	uint64_t x83 = 22072LLU;
	volatile int32_t t18 = 110519;

	t18 = (((x81+x82)==x83)<x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x86 = -2;
	int8_t x87 = INT8_MIN;
	static volatile int32_t x88 = INT32_MIN;
	volatile int32_t t19 = -1768;

	t19 = (((x85+x86)==x87)<x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x90 = 1173;
	uint8_t x92 = UINT8_MAX;

	t20 = (((x89+x90)==x91)<x92);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = INT64_MAX;
	int16_t x94 = -1;
	int32_t x95 = INT32_MIN;
	volatile int16_t x96 = INT16_MIN;
	volatile int32_t t21 = 54201;

	t21 = (((x93+x94)==x95)<x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x98 = -1LL;
	uint32_t x99 = 14719456U;
	volatile int32_t t22 = -939725;

	t22 = (((x97+x98)==x99)<x100);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x101 = UINT16_MAX;
	uint8_t x102 = UINT8_MAX;
	int16_t x103 = INT16_MIN;
	volatile int32_t t23 = 250339111;

	t23 = (((x101+x102)==x103)<x104);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x105 = -1;
	int16_t x106 = -1;
	uint16_t x107 = 0U;
	int16_t x108 = INT16_MIN;
	int32_t t24 = -33182316;

	t24 = (((x105+x106)==x107)<x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x110 = 0;
	int32_t x111 = -1;
	int64_t x112 = INT64_MAX;
	int32_t t25 = 485608881;

	t25 = (((x109+x110)==x111)<x112);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x113 = -2;
	static uint64_t x114 = 809359665LLU;
	uint16_t x115 = 750U;
	volatile int32_t x116 = INT32_MIN;

	t26 = (((x113+x114)==x115)<x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x122 = 598826686U;
	static volatile int16_t x123 = 1507;
	static volatile int32_t x124 = INT32_MIN;

	t27 = (((x121+x122)==x123)<x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x126 = -1;
	static int16_t x127 = INT16_MIN;
	uint16_t x128 = 2818U;
	int32_t t28 = 554695857;

	t28 = (((x125+x126)==x127)<x128);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x130 = -1LL;
	static int16_t x131 = -1;

	t29 = (((x129+x130)==x131)<x132);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x133 = 1;
	int32_t x135 = INT32_MAX;
	static volatile int8_t x136 = 1;
	volatile int32_t t30 = -20844;

	t30 = (((x133+x134)==x135)<x136);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x137 = 66U;
	int16_t x138 = 0;
	uint64_t x140 = 130755678060LLU;
	volatile int32_t t31 = 15;

	t31 = (((x137+x138)==x139)<x140);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x142 = INT32_MAX;
	uint8_t x143 = 44U;
	uint8_t x144 = 2U;
	int32_t t32 = 29597918;

	t32 = (((x141+x142)==x143)<x144);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x149 = UINT64_MAX;
	uint64_t x150 = 49416339023543LLU;
	int16_t x151 = -1;
	static uint16_t x152 = 148U;
	int32_t t33 = -711679711;

	t33 = (((x149+x150)==x151)<x152);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x153 = INT8_MAX;
	static int16_t x154 = 954;
	int16_t x155 = 0;
	int32_t x156 = 0;

	t34 = (((x153+x154)==x155)<x156);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x157 = -1;
	volatile int16_t x159 = -1;
	int8_t x160 = INT8_MIN;
	static int32_t t35 = 7572;

	t35 = (((x157+x158)==x159)<x160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x161 = INT8_MAX;
	int8_t x162 = 8;
	int64_t x163 = INT64_MAX;

	t36 = (((x161+x162)==x163)<x164);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x165 = INT16_MIN;
	uint8_t x166 = UINT8_MAX;
	static volatile uint64_t x167 = UINT64_MAX;
	int32_t x168 = -649089;
	int32_t t37 = -31864319;

	t37 = (((x165+x166)==x167)<x168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = INT16_MIN;
	uint32_t x170 = 1888763U;
	int64_t x171 = INT64_MIN;
	int8_t x172 = -1;
	int32_t t38 = -143155;

	t38 = (((x169+x170)==x171)<x172);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x173 = 97700968707631756LLU;
	int16_t x175 = -1;

	t39 = (((x173+x174)==x175)<x176);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x177 = 15U;
	volatile int8_t x178 = -1;
	uint8_t x179 = 2U;
	int16_t x180 = 0;

	t40 = (((x177+x178)==x179)<x180);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x181 = 73U;
	int16_t x182 = INT16_MIN;
	static uint8_t x184 = 112U;

	t41 = (((x181+x182)==x183)<x184);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x185 = 38;
	static int8_t x186 = INT8_MIN;
	int64_t x187 = 0LL;
	uint32_t x188 = 537435U;
	volatile int32_t t42 = 0;

	t42 = (((x185+x186)==x187)<x188);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x189 = UINT8_MAX;
	int16_t x191 = INT16_MIN;
	int32_t x192 = -161667;
	int32_t t43 = -7854671;

	t43 = (((x189+x190)==x191)<x192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x193 = 2U;
	static int8_t x194 = INT8_MIN;
	int32_t x195 = -1;
	int8_t x196 = 2;
	int32_t t44 = -20;

	t44 = (((x193+x194)==x195)<x196);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x197 = INT64_MIN;
	static uint8_t x198 = 14U;
	int16_t x199 = INT16_MAX;
	int32_t x200 = 43;
	volatile int32_t t45 = -26992;

	t45 = (((x197+x198)==x199)<x200);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x201 = INT32_MIN;
	uint16_t x202 = 9U;
	volatile uint16_t x203 = 2787U;
	uint64_t x204 = 62187LLU;

	t46 = (((x201+x202)==x203)<x204);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x205 = UINT8_MAX;
	int64_t x206 = -3862963279879LL;
	uint64_t x207 = 15268532077590LLU;
	int64_t x208 = INT64_MAX;
	static int32_t t47 = -486830725;

	t47 = (((x205+x206)==x207)<x208);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x209 = -1;
	uint16_t x211 = UINT16_MAX;
	volatile int32_t t48 = 0;

	t48 = (((x209+x210)==x211)<x212);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x218 = 0;
	int16_t x219 = -1;
	int16_t x220 = INT16_MAX;
	int32_t t49 = -7328;

	t49 = (((x217+x218)==x219)<x220);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x225 = 0;
	int32_t x226 = INT32_MIN;
	int8_t x227 = INT8_MAX;
	volatile int32_t t50 = -892;

	t50 = (((x225+x226)==x227)<x228);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x233 = -371;
	int32_t x236 = INT32_MIN;

	t51 = (((x233+x234)==x235)<x236);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x237 = 12U;
	int16_t x238 = -1;
	int8_t x240 = -1;

	t52 = (((x237+x238)==x239)<x240);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x241 = 66446393950803683LLU;
	volatile uint16_t x242 = 23U;
	int8_t x243 = 0;
	int32_t x244 = -1;
	int32_t t53 = -509129;

	t53 = (((x241+x242)==x243)<x244);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x245 = UINT16_MAX;
	int64_t x246 = -1LL;
	uint16_t x247 = 125U;
	volatile int64_t x248 = INT64_MIN;
	volatile int32_t t54 = -1;

	t54 = (((x245+x246)==x247)<x248);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x253 = -278;
	uint32_t x254 = UINT32_MAX;
	int64_t x255 = -15965LL;
	static int16_t x256 = -1;
	int32_t t55 = 56591178;

	t55 = (((x253+x254)==x255)<x256);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x257 = 58U;
	int16_t x258 = INT16_MIN;
	uint32_t x259 = UINT32_MAX;
	int16_t x260 = -1;
	volatile int32_t t56 = 1395522;

	t56 = (((x257+x258)==x259)<x260);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x262 = INT16_MIN;
	static volatile int8_t x263 = INT8_MAX;
	static int32_t t57 = 357;

	t57 = (((x261+x262)==x263)<x264);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x265 = -1;
	volatile int8_t x266 = -1;
	volatile int32_t t58 = -2;

	t58 = (((x265+x266)==x267)<x268);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x269 = -1;
	volatile int32_t x270 = 100269973;
	int8_t x271 = -1;
	uint16_t x272 = 396U;
	volatile int32_t t59 = 7;

	t59 = (((x269+x270)==x271)<x272);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x273 = -1;
	int64_t x274 = -1LL;
	int8_t x275 = 1;
	volatile int32_t t60 = 0;

	t60 = (((x273+x274)==x275)<x276);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x277 = INT32_MAX;
	int32_t x278 = INT32_MIN;
	uint64_t x279 = UINT64_MAX;
	uint32_t x280 = UINT32_MAX;
	int32_t t61 = 344703739;

	t61 = (((x277+x278)==x279)<x280);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x281 = INT32_MIN;
	uint8_t x282 = 1U;
	int8_t x283 = -24;
	static uint8_t x284 = 0U;
	int32_t t62 = 7056;

	t62 = (((x281+x282)==x283)<x284);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x285 = -29378588589LL;
	int32_t x286 = INT32_MIN;
	uint8_t x287 = 0U;
	int32_t x288 = INT32_MAX;
	int32_t t63 = -7;

	t63 = (((x285+x286)==x287)<x288);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x289 = 0;
	static int16_t x290 = INT16_MIN;
	static volatile int32_t x291 = INT32_MIN;
	volatile int16_t x292 = INT16_MAX;
	static volatile int32_t t64 = 34966161;

	t64 = (((x289+x290)==x291)<x292);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x294 = 339U;
	static volatile int32_t t65 = 3722;

	t65 = (((x293+x294)==x295)<x296);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x297 = INT16_MAX;
	int64_t x298 = INT64_MIN;
	static int32_t x300 = INT32_MIN;
	static volatile int32_t t66 = 5481;

	t66 = (((x297+x298)==x299)<x300);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x301 = 1377;
	static int16_t x302 = 11;
	int32_t x303 = INT32_MIN;
	int32_t t67 = -2582;

	t67 = (((x301+x302)==x303)<x304);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x306 = -1LL;
	uint32_t x307 = UINT32_MAX;
	volatile int64_t x308 = 15265892LL;
	volatile int32_t t68 = 1;

	t68 = (((x305+x306)==x307)<x308);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x309 = INT16_MAX;
	static int32_t x310 = 37440;
	volatile int16_t x311 = INT16_MIN;
	uint32_t x312 = UINT32_MAX;

	t69 = (((x309+x310)==x311)<x312);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x313 = -38;
	volatile uint16_t x314 = 12U;
	int64_t x315 = INT64_MIN;
	volatile int32_t t70 = 74;

	t70 = (((x313+x314)==x315)<x316);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x317 = 6U;
	int8_t x318 = -2;
	int8_t x319 = INT8_MIN;
	volatile int32_t x320 = INT32_MIN;
	int32_t t71 = -32278749;

	t71 = (((x317+x318)==x319)<x320);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x321 = INT16_MIN;
	volatile int8_t x322 = INT8_MIN;
	static int8_t x324 = 45;
	int32_t t72 = -8154669;

	t72 = (((x321+x322)==x323)<x324);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x329 = -69672713371561LL;
	int16_t x331 = -1;
	volatile uint32_t x332 = 18U;

	t73 = (((x329+x330)==x331)<x332);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x333 = UINT8_MAX;
	static int64_t x335 = INT64_MAX;
	volatile uint64_t x336 = 8399358773660293661LLU;

	t74 = (((x333+x334)==x335)<x336);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x337 = INT16_MIN;
	int32_t x338 = INT32_MAX;
	uint32_t x339 = 466U;
	volatile int32_t t75 = -461992479;

	t75 = (((x337+x338)==x339)<x340);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x342 = 11U;
	int8_t x343 = -1;
	int32_t t76 = -8694397;

	t76 = (((x341+x342)==x343)<x344);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x345 = 2373657U;
	int64_t x347 = INT64_MIN;
	uint32_t x348 = 938289126U;
	volatile int32_t t77 = 98950459;

	t77 = (((x345+x346)==x347)<x348);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x353 = UINT64_MAX;
	static int8_t x354 = INT8_MIN;
	static int64_t x355 = INT64_MIN;
	int16_t x356 = -5;
	static int32_t t78 = -2;

	t78 = (((x353+x354)==x355)<x356);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x358 = 3175760223LL;
	int16_t x359 = INT16_MAX;
	static int16_t x360 = -626;
	int32_t t79 = -1;

	t79 = (((x357+x358)==x359)<x360);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x361 = -1LL;
	volatile uint64_t x362 = UINT64_MAX;
	int16_t x363 = INT16_MIN;
	static int8_t x364 = -1;

	t80 = (((x361+x362)==x363)<x364);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x365 = INT16_MIN;
	static int8_t x366 = -29;
	volatile uint16_t x367 = UINT16_MAX;
	volatile int32_t x368 = -1;
	volatile int32_t t81 = -1514723;

	t81 = (((x365+x366)==x367)<x368);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x369 = -2;
	int16_t x370 = 10799;
	volatile int32_t x371 = INT32_MIN;

	t82 = (((x369+x370)==x371)<x372);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x373 = -1;
	static int32_t x374 = -1;
	volatile uint64_t x375 = UINT64_MAX;

	t83 = (((x373+x374)==x375)<x376);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x377 = 103U;
	int8_t x379 = 1;
	volatile uint8_t x380 = 31U;

	t84 = (((x377+x378)==x379)<x380);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x382 = 1155882;
	static int16_t x384 = -1;
	volatile int32_t t85 = 5;

	t85 = (((x381+x382)==x383)<x384);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x385 = -1;
	int32_t x386 = -1;
	volatile int16_t x387 = INT16_MIN;
	static volatile uint32_t x388 = 0U;
	volatile int32_t t86 = -5971188;

	t86 = (((x385+x386)==x387)<x388);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x393 = -1;
	static int16_t x394 = -1;
	int32_t x395 = 14558;
	static uint64_t x396 = UINT64_MAX;
	volatile int32_t t87 = 504;

	t87 = (((x393+x394)==x395)<x396);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x401 = 612U;
	volatile uint8_t x402 = UINT8_MAX;
	volatile int32_t x403 = INT32_MAX;
	uint8_t x404 = UINT8_MAX;
	volatile int32_t t88 = 19846777;

	t88 = (((x401+x402)==x403)<x404);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x405 = 71336592LL;
	static uint16_t x406 = 0U;
	volatile int8_t x407 = INT8_MAX;
	int8_t x408 = 1;
	int32_t t89 = 98;

	t89 = (((x405+x406)==x407)<x408);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x409 = -1;
	static uint16_t x410 = 29U;
	volatile int8_t x412 = INT8_MIN;
	int32_t t90 = 86790;

	t90 = (((x409+x410)==x411)<x412);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x413 = 26105570452859LLU;
	uint32_t x415 = 94151U;
	volatile int32_t t91 = -3322;

	t91 = (((x413+x414)==x415)<x416);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x421 = UINT32_MAX;
	volatile int64_t x422 = INT64_MIN;
	uint32_t x423 = 900591952U;
	volatile int32_t t92 = 1894;

	t92 = (((x421+x422)==x423)<x424);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x425 = -1;
	int16_t x426 = INT16_MIN;
	volatile int32_t x427 = 5408307;
	volatile int32_t x428 = INT32_MIN;
	int32_t t93 = 7541098;

	t93 = (((x425+x426)==x427)<x428);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint32_t x429 = UINT32_MAX;
	int16_t x431 = -41;
	int64_t x432 = INT64_MAX;
	volatile int32_t t94 = -305944;

	t94 = (((x429+x430)==x431)<x432);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x437 = INT16_MIN;
	static int16_t x438 = INT16_MIN;
	static int16_t x439 = INT16_MAX;
	volatile uint32_t x440 = 5565459U;
	volatile int32_t t95 = -7;

	t95 = (((x437+x438)==x439)<x440);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x442 = INT32_MIN;
	static volatile int16_t x443 = INT16_MIN;
	volatile int32_t t96 = 2310085;

	t96 = (((x441+x442)==x443)<x444);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x445 = 3;
	static volatile int64_t x446 = -25773882LL;
	uint64_t x447 = 3882692LLU;
	uint32_t x448 = 829U;
	int32_t t97 = -474721851;

	t97 = (((x445+x446)==x447)<x448);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x449 = INT32_MAX;
	uint16_t x451 = 24198U;
	volatile uint8_t x452 = UINT8_MAX;
	volatile int32_t t98 = -342719;

	t98 = (((x449+x450)==x451)<x452);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x453 = INT16_MAX;
	static int16_t x454 = -1;
	volatile int64_t x455 = -462712087408LL;
	int64_t x456 = INT64_MIN;
	int32_t t99 = -1565;

	t99 = (((x453+x454)==x455)<x456);

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

