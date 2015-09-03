#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MAX;
int64_t x12 = 3724933416LL;
int64_t x13 = 0LL;
volatile int32_t t3 = 2533;
int32_t x18 = -491;
int64_t x24 = -1LL;
int32_t t5 = -5139;
uint64_t x30 = 44527641620187756LLU;
uint64_t x34 = 2168499053LLU;
uint64_t x41 = 110661646919527163LLU;
static int16_t x45 = -125;
int64_t x51 = INT64_MIN;
int32_t x52 = INT32_MIN;
int8_t x53 = 19;
int16_t x59 = -1;
uint32_t x63 = UINT32_MAX;
uint32_t x65 = 8U;
uint32_t x70 = UINT32_MAX;
static uint64_t x72 = 6978353757389329LLU;
static int32_t t17 = 3441;
int16_t x75 = -1;
volatile int8_t x78 = INT8_MIN;
volatile int16_t x86 = INT16_MIN;
int8_t x87 = INT8_MIN;
volatile uint32_t x94 = 4718372U;
uint16_t x95 = 3395U;
int32_t t24 = -7;
volatile uint32_t x102 = 3590242U;
uint64_t x105 = 192104774LLU;
volatile int32_t t26 = -2386981;
int32_t x113 = -174175957;
uint64_t x123 = UINT64_MAX;
int32_t x130 = INT32_MAX;
int16_t x138 = INT16_MIN;
static int32_t x140 = INT32_MIN;
int32_t t34 = 0;
int64_t x146 = -1LL;
int32_t t38 = -126;
static volatile int32_t t39 = -2;
int64_t x161 = -1LL;
int8_t x164 = INT8_MAX;
volatile int32_t t40 = -4;
volatile int64_t x170 = -1LL;
volatile uint16_t x176 = UINT16_MAX;
volatile int32_t t43 = -364013;
int64_t x184 = INT64_MIN;
uint8_t x188 = 15U;
volatile int32_t t46 = 9073872;
static int64_t x192 = INT64_MIN;
int8_t x209 = -3;
volatile int32_t t51 = 253495;
int64_t x217 = -36428791678635LL;
uint16_t x218 = UINT16_MAX;
int8_t x220 = 0;
int64_t x233 = INT64_MIN;
uint64_t x234 = UINT64_MAX;
volatile int32_t t57 = 40181;
int32_t x239 = -1;
uint64_t x242 = 4594298605955933162LLU;
int16_t x247 = -1;
volatile int32_t t60 = 27158;
int64_t x255 = INT64_MIN;
static uint8_t x276 = 2U;
static int8_t x279 = INT8_MIN;
volatile int32_t x280 = -1;
int64_t x281 = -1LL;
int32_t t70 = -9827940;
int8_t x291 = 1;
int32_t t72 = 1;
int16_t x297 = -1;
volatile int32_t t73 = 0;
static uint16_t x302 = 6U;
int64_t x306 = INT64_MIN;
static volatile int8_t x311 = -14;
volatile uint64_t x312 = 549397020846437768LLU;
int64_t x321 = INT64_MAX;
int64_t x322 = 322LL;
volatile uint8_t x329 = 21U;
static volatile int32_t t83 = -29622;
int16_t x342 = INT16_MIN;
int8_t x349 = INT8_MIN;
int32_t x353 = INT32_MIN;
static volatile uint16_t x354 = 412U;
int32_t t87 = -25513226;
static volatile int32_t t89 = 90059;
int64_t x380 = 1476226321289668LL;
volatile int32_t t91 = 32;
uint32_t x383 = 55671524U;
int64_t x386 = INT64_MIN;
int64_t x387 = INT64_MAX;
volatile int16_t x388 = 1098;
static int32_t x399 = 300;
int32_t t97 = -752;
int8_t x409 = INT8_MAX;


void f0(void) {
	volatile uint32_t x2 = 296633U;
	volatile int16_t x3 = INT16_MIN;
	int16_t x4 = INT16_MIN;
	int32_t t0 = -3;

	t0 = (((x1<=x2)/x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = -1;
	volatile int64_t x6 = INT64_MIN;
	uint16_t x7 = UINT16_MAX;
	int8_t x8 = INT8_MIN;
	static volatile int32_t t1 = 197;

	t1 = (((x5<=x6)/x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 48U;
	int32_t x10 = -1;
	uint64_t x11 = 1889786860050212282LLU;
	volatile int32_t t2 = 73150;

	t2 = (((x9<=x10)/x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = 13;
	int64_t x15 = INT64_MAX;
	uint16_t x16 = 250U;

	t3 = (((x13<=x14)/x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 15033075LL;
	int32_t x19 = INT32_MAX;
	uint8_t x20 = 3U;
	volatile int32_t t4 = 1;

	t4 = (((x17<=x18)/x19)<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	uint16_t x22 = 2014U;
	int8_t x23 = INT8_MAX;

	t5 = (((x21<=x22)/x23)<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint16_t x25 = UINT16_MAX;
	int32_t x26 = INT32_MIN;
	static volatile int64_t x27 = -792LL;
	int32_t x28 = -71204;
	int32_t t6 = 51209863;

	t6 = (((x25<=x26)/x27)<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = INT8_MAX;
	int64_t x31 = 2025036297LL;
	int64_t x32 = -56875030214436453LL;
	int32_t t7 = 4;

	t7 = (((x29<=x30)/x31)<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = -1;
	volatile uint16_t x35 = UINT16_MAX;
	int64_t x36 = INT64_MAX;
	int32_t t8 = -3693207;

	t8 = (((x33<=x34)/x35)<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	static int8_t x38 = INT8_MAX;
	int16_t x39 = -396;
	int16_t x40 = -1;
	int32_t t9 = 37847727;

	t9 = (((x37<=x38)/x39)<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x42 = UINT32_MAX;
	uint16_t x43 = UINT16_MAX;
	int64_t x44 = INT64_MAX;
	volatile int32_t t10 = 761620;

	t10 = (((x41<=x42)/x43)<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = -1;
	int32_t x47 = INT32_MAX;
	volatile uint64_t x48 = 2407LLU;
	int32_t t11 = -191547;

	t11 = (((x45<=x46)/x47)<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 7U;
	uint16_t x50 = 0U;
	volatile int32_t t12 = -3428;

	t12 = (((x49<=x50)/x51)<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x54 = INT8_MAX;
	uint32_t x55 = UINT32_MAX;
	static int8_t x56 = 0;
	volatile int32_t t13 = -65489445;

	t13 = (((x53<=x54)/x55)<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 6609U;
	static int32_t x58 = INT32_MAX;
	uint8_t x60 = 71U;
	static int32_t t14 = 23513763;

	t14 = (((x57<=x58)/x59)<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = 12;
	uint32_t x62 = 61725U;
	int8_t x64 = INT8_MIN;
	int32_t t15 = -77285;

	t15 = (((x61<=x62)/x63)<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x66 = INT64_MIN;
	int64_t x67 = INT64_MAX;
	uint16_t x68 = UINT16_MAX;
	static volatile int32_t t16 = 212;

	t16 = (((x65<=x66)/x67)<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x69 = 93U;
	int8_t x71 = INT8_MIN;

	t17 = (((x69<=x70)/x71)<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = 16168LL;
	int64_t x74 = INT64_MIN;
	int16_t x76 = INT16_MAX;
	volatile int32_t t18 = 64521;

	t18 = (((x73<=x74)/x75)<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 29U;
	static int64_t x79 = INT64_MIN;
	static volatile int8_t x80 = 1;
	int32_t t19 = 24472;

	t19 = (((x77<=x78)/x79)<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = UINT8_MAX;
	int8_t x82 = INT8_MIN;
	volatile uint32_t x83 = UINT32_MAX;
	uint8_t x84 = 45U;
	int32_t t20 = 15008534;

	t20 = (((x81<=x82)/x83)<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 34157089826215517LLU;
	int8_t x88 = INT8_MIN;
	volatile int32_t t21 = 1148081;

	t21 = (((x85<=x86)/x87)<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x89 = UINT32_MAX;
	int64_t x90 = INT64_MIN;
	int8_t x91 = -1;
	int32_t x92 = 1095364;
	volatile int32_t t22 = 104668;

	t22 = (((x89<=x90)/x91)<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = 14;
	int16_t x96 = -1582;
	int32_t t23 = -1;

	t23 = (((x93<=x94)/x95)<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	int64_t x98 = -1010991652713979LL;
	int32_t x99 = -950122368;
	volatile int8_t x100 = 1;

	t24 = (((x97<=x98)/x99)<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -668;
	uint32_t x103 = 66734468U;
	static int8_t x104 = INT8_MIN;
	int32_t t25 = -806383;

	t25 = (((x101<=x102)/x103)<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x106 = 7794U;
	int32_t x107 = INT32_MIN;
	volatile int8_t x108 = -1;

	t26 = (((x105<=x106)/x107)<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = UINT16_MAX;
	int16_t x110 = 1428;
	int32_t x111 = INT32_MIN;
	static uint8_t x112 = UINT8_MAX;
	int32_t t27 = 260973970;

	t27 = (((x109<=x110)/x111)<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x114 = 330U;
	int32_t x115 = INT32_MIN;
	int16_t x116 = -1;
	static int32_t t28 = -3767338;

	t28 = (((x113<=x114)/x115)<=x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = UINT16_MAX;
	volatile int32_t x118 = -1;
	static volatile int16_t x119 = INT16_MAX;
	int32_t x120 = INT32_MIN;
	volatile int32_t t29 = -323414;

	t29 = (((x117<=x118)/x119)<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MIN;
	static int16_t x122 = -5;
	static volatile int8_t x124 = INT8_MAX;
	volatile int32_t t30 = 2;

	t30 = (((x121<=x122)/x123)<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	static int64_t x126 = -1LL;
	int16_t x127 = 1;
	uint8_t x128 = UINT8_MAX;
	int32_t t31 = 7;

	t31 = (((x125<=x126)/x127)<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MAX;
	uint32_t x131 = 221384607U;
	volatile int64_t x132 = -11LL;
	int32_t t32 = 2038;

	t32 = (((x129<=x130)/x131)<=x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -1;
	uint8_t x134 = UINT8_MAX;
	static volatile int16_t x135 = INT16_MAX;
	int8_t x136 = INT8_MAX;
	int32_t t33 = 1;

	t33 = (((x133<=x134)/x135)<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MIN;
	int16_t x139 = INT16_MIN;

	t34 = (((x137<=x138)/x139)<=x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x141 = UINT8_MAX;
	int32_t x142 = INT32_MAX;
	int8_t x143 = -25;
	int16_t x144 = -11;
	int32_t t35 = 182073;

	t35 = (((x141<=x142)/x143)<=x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x145 = -1;
	int64_t x147 = INT64_MIN;
	volatile int16_t x148 = INT16_MAX;
	int32_t t36 = -435;

	t36 = (((x145<=x146)/x147)<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 139914U;
	volatile int8_t x150 = INT8_MAX;
	static uint32_t x151 = 252635U;
	int64_t x152 = -1576LL;
	volatile int32_t t37 = 0;

	t37 = (((x149<=x150)/x151)<=x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MIN;
	int16_t x154 = -2637;
	static uint32_t x155 = 551U;
	int64_t x156 = INT64_MIN;

	t38 = (((x153<=x154)/x155)<=x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	int8_t x158 = -2;
	int16_t x159 = 2;
	int32_t x160 = -1;

	t39 = (((x157<=x158)/x159)<=x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x162 = -1127;
	static int64_t x163 = -106LL;

	t40 = (((x161<=x162)/x163)<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MIN;
	int8_t x166 = INT8_MIN;
	uint16_t x167 = 31U;
	uint16_t x168 = UINT16_MAX;
	static int32_t t41 = 7179;

	t41 = (((x165<=x166)/x167)<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = 9907;
	uint32_t x171 = 367951U;
	static int16_t x172 = INT16_MIN;
	volatile int32_t t42 = -120168;

	t42 = (((x169<=x170)/x171)<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MIN;
	volatile int16_t x174 = -1;
	int32_t x175 = INT32_MIN;

	t43 = (((x173<=x174)/x175)<=x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	int32_t x178 = INT32_MAX;
	static int8_t x179 = 1;
	volatile uint16_t x180 = 39U;
	int32_t t44 = -6567;

	t44 = (((x177<=x178)/x179)<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 11302276LLU;
	int64_t x182 = INT64_MAX;
	static uint16_t x183 = 10086U;
	int32_t t45 = 19017700;

	t45 = (((x181<=x182)/x183)<=x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = UINT8_MAX;
	static uint64_t x186 = 426273771LLU;
	uint64_t x187 = UINT64_MAX;

	t46 = (((x185<=x186)/x187)<=x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = 28U;
	volatile uint32_t x190 = 138383U;
	uint32_t x191 = 39503U;
	static volatile int32_t t47 = 656757;

	t47 = (((x189<=x190)/x191)<=x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x193 = 4U;
	uint32_t x194 = 14502U;
	int32_t x195 = INT32_MIN;
	int32_t x196 = INT32_MAX;
	int32_t t48 = -11976;

	t48 = (((x193<=x194)/x195)<=x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = -11;
	int64_t x198 = -236523298330LL;
	static int8_t x199 = -1;
	int8_t x200 = -1;
	int32_t t49 = 98984218;

	t49 = (((x197<=x198)/x199)<=x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x205 = INT64_MIN;
	int32_t x206 = -1;
	int64_t x207 = INT64_MIN;
	static volatile int8_t x208 = INT8_MAX;
	volatile int32_t t50 = 0;

	t50 = (((x205<=x206)/x207)<=x208);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x210 = 56321;
	int16_t x211 = INT16_MIN;
	volatile int32_t x212 = INT32_MIN;

	t51 = (((x209<=x210)/x211)<=x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x213 = -84980LL;
	int64_t x214 = INT64_MAX;
	volatile int64_t x215 = INT64_MIN;
	volatile uint16_t x216 = UINT16_MAX;
	volatile int32_t t52 = 765379922;

	t52 = (((x213<=x214)/x215)<=x216);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x219 = -1;
	static int32_t t53 = 10586;

	t53 = (((x217<=x218)/x219)<=x220);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x221 = 17;
	static uint8_t x222 = 8U;
	static uint16_t x223 = 101U;
	int32_t x224 = INT32_MIN;
	static volatile int32_t t54 = 16237564;

	t54 = (((x221<=x222)/x223)<=x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x225 = -1;
	int8_t x226 = -1;
	int32_t x227 = INT32_MAX;
	volatile int64_t x228 = -1LL;
	static volatile int32_t t55 = 2;

	t55 = (((x225<=x226)/x227)<=x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x229 = 5072LL;
	int32_t x230 = -1;
	volatile int64_t x231 = INT64_MAX;
	volatile int64_t x232 = -1LL;
	int32_t t56 = -529862;

	t56 = (((x229<=x230)/x231)<=x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x235 = -323LL;
	int32_t x236 = 3444443;

	t57 = (((x233<=x234)/x235)<=x236);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x237 = INT8_MIN;
	int8_t x238 = 32;
	static int32_t x240 = INT32_MIN;
	int32_t t58 = 60935;

	t58 = (((x237<=x238)/x239)<=x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x241 = 77650939U;
	static int8_t x243 = 1;
	volatile int64_t x244 = INT64_MIN;
	volatile int32_t t59 = -8762;

	t59 = (((x241<=x242)/x243)<=x244);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x245 = UINT8_MAX;
	uint8_t x246 = 3U;
	int8_t x248 = 24;

	t60 = (((x245<=x246)/x247)<=x248);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x249 = -1;
	uint8_t x250 = UINT8_MAX;
	static uint64_t x251 = 3302693736461074254LLU;
	static volatile uint16_t x252 = 405U;
	static volatile int32_t t61 = -277215637;

	t61 = (((x249<=x250)/x251)<=x252);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x253 = 819114055335814LL;
	int32_t x254 = INT32_MAX;
	uint32_t x256 = 2017860336U;
	volatile int32_t t62 = 29;

	t62 = (((x253<=x254)/x255)<=x256);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x257 = -1;
	int64_t x258 = INT64_MAX;
	int8_t x259 = INT8_MAX;
	int8_t x260 = 1;
	volatile int32_t t63 = -301883;

	t63 = (((x257<=x258)/x259)<=x260);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x261 = INT64_MAX;
	uint32_t x262 = UINT32_MAX;
	volatile int32_t x263 = -1;
	int8_t x264 = INT8_MAX;
	static volatile int32_t t64 = 55;

	t64 = (((x261<=x262)/x263)<=x264);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x265 = INT32_MIN;
	uint8_t x266 = UINT8_MAX;
	int64_t x267 = INT64_MIN;
	uint16_t x268 = 1132U;
	volatile int32_t t65 = 16834818;

	t65 = (((x265<=x266)/x267)<=x268);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x269 = 43U;
	int32_t x270 = INT32_MAX;
	volatile int16_t x271 = INT16_MAX;
	int16_t x272 = 189;
	static volatile int32_t t66 = -700107061;

	t66 = (((x269<=x270)/x271)<=x272);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x273 = INT32_MIN;
	int32_t x274 = -4;
	volatile int16_t x275 = 1;
	volatile int32_t t67 = 26666;

	t67 = (((x273<=x274)/x275)<=x276);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x277 = 29U;
	uint32_t x278 = UINT32_MAX;
	volatile int32_t t68 = 1071976643;

	t68 = (((x277<=x278)/x279)<=x280);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x282 = -1;
	static volatile int8_t x283 = INT8_MIN;
	volatile int8_t x284 = INT8_MAX;
	int32_t t69 = 228251;

	t69 = (((x281<=x282)/x283)<=x284);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x285 = UINT32_MAX;
	int8_t x286 = -30;
	int8_t x287 = INT8_MIN;
	int64_t x288 = INT64_MIN;

	t70 = (((x285<=x286)/x287)<=x288);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x289 = INT32_MIN;
	static int32_t x290 = 28860264;
	int32_t x292 = INT32_MAX;
	volatile int32_t t71 = 1825;

	t71 = (((x289<=x290)/x291)<=x292);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x293 = 76581497045719423LL;
	int8_t x294 = 16;
	uint16_t x295 = 3U;
	volatile int32_t x296 = INT32_MIN;

	t72 = (((x293<=x294)/x295)<=x296);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x298 = UINT16_MAX;
	int32_t x299 = INT32_MAX;
	int64_t x300 = 315000853864548LL;

	t73 = (((x297<=x298)/x299)<=x300);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x301 = INT8_MAX;
	int8_t x303 = -1;
	uint32_t x304 = UINT32_MAX;
	volatile int32_t t74 = 10101502;

	t74 = (((x301<=x302)/x303)<=x304);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x305 = INT32_MIN;
	uint8_t x307 = 98U;
	volatile uint32_t x308 = 4395U;
	static volatile int32_t t75 = -3;

	t75 = (((x305<=x306)/x307)<=x308);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x309 = INT32_MIN;
	uint32_t x310 = UINT32_MAX;
	int32_t t76 = -8;

	t76 = (((x309<=x310)/x311)<=x312);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x313 = UINT32_MAX;
	volatile int32_t x314 = INT32_MAX;
	volatile int64_t x315 = INT64_MIN;
	volatile int64_t x316 = INT64_MIN;
	static volatile int32_t t77 = -19;

	t77 = (((x313<=x314)/x315)<=x316);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x317 = 45U;
	int32_t x318 = 21088;
	int16_t x319 = -1;
	int32_t x320 = -132708241;
	static volatile int32_t t78 = -49932;

	t78 = (((x317<=x318)/x319)<=x320);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x323 = INT8_MIN;
	uint8_t x324 = 56U;
	int32_t t79 = 144544;

	t79 = (((x321<=x322)/x323)<=x324);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x325 = INT64_MIN;
	volatile uint32_t x326 = 2378732U;
	static uint32_t x327 = UINT32_MAX;
	int8_t x328 = INT8_MIN;
	int32_t t80 = -103112707;

	t80 = (((x325<=x326)/x327)<=x328);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x330 = 22498531499240LLU;
	static int32_t x331 = INT32_MAX;
	int16_t x332 = INT16_MIN;
	volatile int32_t t81 = -1339;

	t81 = (((x329<=x330)/x331)<=x332);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x333 = 18810052648514238LLU;
	uint64_t x334 = UINT64_MAX;
	uint8_t x335 = 1U;
	static volatile int16_t x336 = INT16_MIN;
	volatile int32_t t82 = -408500580;

	t82 = (((x333<=x334)/x335)<=x336);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x337 = -1;
	int8_t x338 = INT8_MIN;
	volatile int16_t x339 = INT16_MIN;
	uint16_t x340 = UINT16_MAX;

	t83 = (((x337<=x338)/x339)<=x340);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x341 = 30;
	static int8_t x343 = INT8_MIN;
	static volatile int16_t x344 = INT16_MIN;
	int32_t t84 = -13346339;

	t84 = (((x341<=x342)/x343)<=x344);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x350 = INT32_MIN;
	int64_t x351 = 1052578353970169265LL;
	volatile int64_t x352 = -128991147592LL;
	int32_t t85 = 409865511;

	t85 = (((x349<=x350)/x351)<=x352);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x355 = 13;
	int32_t x356 = -15152;
	int32_t t86 = 1;

	t86 = (((x353<=x354)/x355)<=x356);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x361 = 30689099505440LL;
	static uint32_t x362 = 166U;
	int32_t x363 = INT32_MAX;
	static int16_t x364 = INT16_MIN;

	t87 = (((x361<=x362)/x363)<=x364);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x365 = -480674655204LL;
	volatile int16_t x366 = INT16_MIN;
	int16_t x367 = -1;
	int16_t x368 = -1;
	volatile int32_t t88 = -388624;

	t88 = (((x365<=x366)/x367)<=x368);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x369 = -1LL;
	uint64_t x370 = UINT64_MAX;
	static int8_t x371 = -50;
	int8_t x372 = INT8_MIN;

	t89 = (((x369<=x370)/x371)<=x372);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x373 = UINT8_MAX;
	static int64_t x374 = 23799331LL;
	static int64_t x375 = -1LL;
	int32_t x376 = -3;
	static int32_t t90 = 3911;

	t90 = (((x373<=x374)/x375)<=x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x377 = 51U;
	uint32_t x378 = UINT32_MAX;
	int16_t x379 = INT16_MIN;

	t91 = (((x377<=x378)/x379)<=x380);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x381 = -26241511277691LL;
	volatile uint8_t x382 = UINT8_MAX;
	int8_t x384 = INT8_MAX;
	volatile int32_t t92 = -3927220;

	t92 = (((x381<=x382)/x383)<=x384);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x385 = 63;
	static int32_t t93 = 5;

	t93 = (((x385<=x386)/x387)<=x388);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x389 = 125;
	int16_t x390 = 3;
	static int64_t x391 = INT64_MAX;
	int32_t x392 = -1;
	int32_t t94 = 2450505;

	t94 = (((x389<=x390)/x391)<=x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x393 = 3896U;
	int64_t x394 = INT64_MIN;
	int16_t x395 = 12;
	uint8_t x396 = UINT8_MAX;
	int32_t t95 = 70479;

	t95 = (((x393<=x394)/x395)<=x396);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x397 = INT64_MIN;
	volatile int32_t x398 = INT32_MIN;
	uint8_t x400 = 5U;
	volatile int32_t t96 = 7545934;

	t96 = (((x397<=x398)/x399)<=x400);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x401 = -40LL;
	int16_t x402 = INT16_MIN;
	uint32_t x403 = 3023418U;
	static int32_t x404 = -1;

	t97 = (((x401<=x402)/x403)<=x404);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x405 = INT16_MIN;
	int16_t x406 = INT16_MAX;
	int16_t x407 = INT16_MIN;
	static volatile int32_t x408 = INT32_MAX;
	volatile int32_t t98 = -8947;

	t98 = (((x405<=x406)/x407)<=x408);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x410 = 6389203LLU;
	int64_t x411 = -1LL;
	int64_t x412 = INT64_MAX;
	volatile int32_t t99 = 70;

	t99 = (((x409<=x410)/x411)<=x412);

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

