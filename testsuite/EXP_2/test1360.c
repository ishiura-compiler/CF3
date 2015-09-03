#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MIN;
volatile uint32_t x3 = 120499U;
int8_t x9 = -3;
uint16_t x11 = 1244U;
uint16_t x13 = UINT16_MAX;
static int64_t x20 = INT64_MAX;
int32_t t6 = -7;
volatile int32_t t7 = 8;
volatile int16_t x38 = INT16_MAX;
int32_t x42 = INT32_MAX;
static int16_t x44 = INT16_MIN;
volatile int32_t t9 = -219411;
volatile int32_t t11 = 7713419;
int16_t x55 = INT16_MIN;
uint64_t x65 = UINT64_MAX;
int32_t x69 = -9;
int16_t x72 = INT16_MIN;
int32_t t16 = 938027021;
volatile uint64_t x75 = 49949920LLU;
volatile int32_t t17 = -220;
static uint32_t x80 = UINT32_MAX;
static uint64_t x82 = 238776298230907LLU;
static int32_t x84 = INT32_MIN;
int16_t x113 = 12;
uint32_t x114 = 175U;
volatile int16_t x120 = INT16_MAX;
volatile int32_t t27 = 1;
volatile uint64_t x139 = 667785942LLU;
volatile uint16_t x151 = UINT16_MAX;
volatile int32_t x165 = 136834;
int32_t t37 = -5360;
volatile uint8_t x170 = 3U;
static int32_t x173 = INT32_MIN;
static int32_t x180 = 1783;
volatile int32_t t40 = 10;
static int8_t x189 = -11;
uint32_t x198 = 790647U;
int32_t x199 = -1;
int64_t x204 = INT64_MIN;
uint64_t x205 = 13420872LLU;
uint32_t x207 = 2U;
int64_t x215 = INT64_MIN;
static volatile int8_t x216 = -1;
int64_t x220 = INT64_MIN;
volatile int32_t t50 = -8;
int32_t t51 = 42334741;
int16_t x229 = 3;
volatile int32_t t54 = 3761;
int8_t x238 = -33;
int16_t x241 = INT16_MIN;
volatile int64_t x248 = 490897728LL;
uint8_t x252 = 13U;
int32_t t58 = 2652805;
static int32_t t59 = 1;
volatile int16_t x257 = 28;
int16_t x263 = -1;
volatile int32_t t61 = -56917;
int64_t x269 = -830250609335877080LL;
static int16_t x270 = INT16_MIN;
int32_t t63 = -15215;
volatile int32_t t65 = -4;
uint64_t x290 = 56785180913LLU;
int32_t t68 = 150585897;
static uint8_t x297 = 11U;
int16_t x300 = -8611;
int8_t x314 = -1;
uint64_t x317 = 764884576399584LLU;
static int8_t x320 = -1;
int16_t x321 = INT16_MIN;
int8_t x325 = -2;
volatile int32_t t78 = -120;
int8_t x340 = -17;
int8_t x341 = INT8_MIN;
static int8_t x342 = INT8_MIN;
volatile uint32_t x344 = UINT32_MAX;
static volatile int64_t x352 = INT64_MAX;
volatile int32_t t82 = -332590587;
int16_t x368 = -1;
int8_t x370 = -5;
static volatile int32_t x371 = INT32_MIN;
int8_t x386 = -1;
uint64_t x387 = UINT64_MAX;
int16_t x388 = INT16_MAX;
int32_t x392 = 313083;
int64_t x394 = -1LL;
int64_t x399 = INT64_MAX;
uint16_t x404 = 21602U;
int32_t t94 = 498221;
int32_t x405 = -15;
int32_t x413 = INT32_MAX;
int64_t x418 = -1LL;
int64_t x421 = 1930790935749710LL;


void f0(void) {
	int32_t x2 = INT32_MAX;
	uint8_t x4 = 49U;
	volatile int32_t t0 = 627036;

	t0 = ((x1+(x2<x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = -3;
	static uint64_t x6 = 6944523LLU;
	int8_t x7 = INT8_MIN;
	int64_t x8 = -1LL;
	int32_t t1 = -646282;

	t1 = ((x5+(x6<x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = -1;
	int32_t x12 = -11893;
	volatile int32_t t2 = -6;

	t2 = ((x9+(x10<x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = INT64_MIN;
	volatile int16_t x15 = INT16_MIN;
	volatile int64_t x16 = INT64_MAX;
	static int32_t t3 = 23911;

	t3 = ((x13+(x14<x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = -1LL;
	static int16_t x18 = INT16_MIN;
	volatile int32_t x19 = INT32_MAX;
	int32_t t4 = 6;

	t4 = ((x17+(x18<x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = 1945458493956LL;
	int32_t x26 = 22003;
	static int64_t x27 = INT64_MIN;
	volatile int64_t x28 = 2542LL;
	volatile int32_t t5 = -16130569;

	t5 = ((x25+(x26<x27))==x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -1;
	int32_t x30 = INT32_MIN;
	static int32_t x31 = 66679258;
	static int16_t x32 = 336;

	t6 = ((x29+(x30<x31))==x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x33 = 11426893225955LLU;
	volatile uint16_t x34 = 198U;
	int64_t x35 = 336857277LL;
	int8_t x36 = -1;

	t7 = ((x33+(x34<x35))==x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = UINT8_MAX;
	int16_t x39 = 11624;
	int64_t x40 = INT64_MAX;
	volatile int32_t t8 = 1402;

	t8 = ((x37+(x38<x39))==x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = 108038328482436326LLU;
	int8_t x43 = -2;

	t9 = ((x41+(x42<x43))==x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x45 = UINT32_MAX;
	int8_t x46 = 46;
	volatile int32_t x47 = -1;
	uint32_t x48 = 1966124U;
	int32_t t10 = 122093496;

	t10 = ((x45+(x46<x47))==x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x49 = INT16_MAX;
	int64_t x50 = INT64_MIN;
	int16_t x51 = 14175;
	uint16_t x52 = 165U;

	t11 = ((x49+(x50<x51))==x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = 17366326929121LLU;
	int16_t x54 = -13357;
	uint8_t x56 = 23U;
	int32_t t12 = -13457595;

	t12 = ((x53+(x54<x55))==x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x57 = 139003532U;
	static uint16_t x58 = 310U;
	int32_t x59 = -175824246;
	static int8_t x60 = -1;
	volatile int32_t t13 = -116;

	t13 = ((x57+(x58<x59))==x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x61 = 6138449U;
	uint16_t x62 = 957U;
	volatile int8_t x63 = INT8_MAX;
	uint8_t x64 = 6U;
	static int32_t t14 = 97306054;

	t14 = ((x61+(x62<x63))==x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x66 = 45742U;
	static volatile int8_t x67 = -1;
	int64_t x68 = 2698868207407LL;
	static volatile int32_t t15 = -241832729;

	t15 = ((x65+(x66<x67))==x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x70 = -1;
	uint64_t x71 = UINT64_MAX;

	t16 = ((x69+(x70<x71))==x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint64_t x73 = UINT64_MAX;
	int16_t x74 = INT16_MIN;
	volatile int16_t x76 = 2;

	t17 = ((x73+(x74<x75))==x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = INT32_MIN;
	int32_t x78 = INT32_MIN;
	volatile int8_t x79 = -1;
	int32_t t18 = 566759194;

	t18 = ((x77+(x78<x79))==x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = INT64_MIN;
	int16_t x83 = INT16_MIN;
	volatile int32_t t19 = -988050;

	t19 = ((x81+(x82<x83))==x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x89 = 239534U;
	int64_t x90 = INT64_MAX;
	int16_t x91 = -1;
	int64_t x92 = INT64_MIN;
	volatile int32_t t20 = 837780;

	t20 = ((x89+(x90<x91))==x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x93 = INT64_MAX;
	int64_t x94 = 201460751402239LL;
	int8_t x95 = 0;
	int32_t x96 = -3446965;
	int32_t t21 = 27611;

	t21 = ((x93+(x94<x95))==x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = -2;
	static int32_t x98 = 66394056;
	int16_t x99 = 121;
	int16_t x100 = INT16_MIN;
	volatile int32_t t22 = -1;

	t22 = ((x97+(x98<x99))==x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x101 = 107710;
	int64_t x102 = INT64_MIN;
	int64_t x103 = INT64_MIN;
	int16_t x104 = INT16_MAX;
	int32_t t23 = 969032;

	t23 = ((x101+(x102<x103))==x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x109 = INT32_MIN;
	int32_t x110 = INT32_MIN;
	int64_t x111 = INT64_MIN;
	int32_t x112 = -1;
	volatile int32_t t24 = 629;

	t24 = ((x109+(x110<x111))==x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x115 = 198314LLU;
	int64_t x116 = 31332661LL;
	int32_t t25 = 4024803;

	t25 = ((x113+(x114<x115))==x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x117 = 878;
	volatile uint8_t x118 = UINT8_MAX;
	volatile uint16_t x119 = UINT16_MAX;
	static int32_t t26 = 119548214;

	t26 = ((x117+(x118<x119))==x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x121 = UINT32_MAX;
	int8_t x122 = INT8_MIN;
	uint16_t x123 = 9U;
	int64_t x124 = 59LL;

	t27 = ((x121+(x122<x123))==x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x129 = UINT16_MAX;
	volatile uint8_t x130 = 3U;
	volatile uint16_t x131 = 6968U;
	static volatile uint8_t x132 = 3U;
	int32_t t28 = -32307704;

	t28 = ((x129+(x130<x131))==x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x133 = 0;
	int8_t x134 = INT8_MIN;
	int8_t x135 = INT8_MIN;
	static int16_t x136 = INT16_MIN;
	volatile int32_t t29 = 1975397;

	t29 = ((x133+(x134<x135))==x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x137 = 0;
	static int8_t x138 = 5;
	int16_t x140 = -108;
	int32_t t30 = -9;

	t30 = ((x137+(x138<x139))==x140);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x141 = INT32_MIN;
	int64_t x142 = -416LL;
	uint16_t x143 = 1U;
	uint64_t x144 = UINT64_MAX;
	static volatile int32_t t31 = -11589058;

	t31 = ((x141+(x142<x143))==x144);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x145 = -1;
	int16_t x146 = 0;
	volatile int16_t x147 = INT16_MIN;
	int8_t x148 = -1;
	int32_t t32 = -1;

	t32 = ((x145+(x146<x147))==x148);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x149 = 24U;
	static int16_t x150 = INT16_MIN;
	static int64_t x152 = 920554364LL;
	volatile int32_t t33 = 10569857;

	t33 = ((x149+(x150<x151))==x152);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x153 = 7122304U;
	int8_t x154 = 1;
	uint8_t x155 = 98U;
	uint64_t x156 = UINT64_MAX;
	volatile int32_t t34 = 278;

	t34 = ((x153+(x154<x155))==x156);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x157 = 4;
	static uint16_t x158 = 396U;
	volatile int8_t x159 = INT8_MIN;
	static uint8_t x160 = UINT8_MAX;
	volatile int32_t t35 = -2;

	t35 = ((x157+(x158<x159))==x160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x161 = 80287LL;
	volatile int32_t x162 = INT32_MIN;
	int8_t x163 = INT8_MIN;
	uint32_t x164 = 709U;
	volatile int32_t t36 = 165201;

	t36 = ((x161+(x162<x163))==x164);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x166 = 273962455984LLU;
	uint64_t x167 = 124467139737710619LLU;
	int8_t x168 = -56;

	t37 = ((x165+(x166<x167))==x168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x169 = INT8_MIN;
	int64_t x171 = -1LL;
	volatile int32_t x172 = -74;
	int32_t t38 = -857360;

	t38 = ((x169+(x170<x171))==x172);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x174 = 1U;
	static uint16_t x175 = 0U;
	int32_t x176 = 1;
	volatile int32_t t39 = 5;

	t39 = ((x173+(x174<x175))==x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x177 = INT16_MIN;
	volatile int32_t x178 = -1;
	volatile int8_t x179 = INT8_MIN;

	t40 = ((x177+(x178<x179))==x180);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x181 = 6U;
	int16_t x182 = INT16_MIN;
	static int8_t x183 = INT8_MIN;
	uint32_t x184 = UINT32_MAX;
	volatile int32_t t41 = 21259;

	t41 = ((x181+(x182<x183))==x184);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x185 = -1;
	int64_t x186 = -1LL;
	int64_t x187 = 209849975LL;
	uint8_t x188 = UINT8_MAX;
	volatile int32_t t42 = 11147292;

	t42 = ((x185+(x186<x187))==x188);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x190 = -14;
	uint8_t x191 = 0U;
	int32_t x192 = -1;
	volatile int32_t t43 = -14952;

	t43 = ((x189+(x190<x191))==x192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x193 = 58837U;
	volatile uint8_t x194 = 54U;
	int32_t x195 = INT32_MIN;
	uint8_t x196 = 3U;
	int32_t t44 = 7737590;

	t44 = ((x193+(x194<x195))==x196);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x197 = INT16_MIN;
	volatile uint64_t x200 = 60503421133541149LLU;
	int32_t t45 = -4;

	t45 = ((x197+(x198<x199))==x200);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x201 = UINT16_MAX;
	int32_t x202 = -1;
	static int16_t x203 = INT16_MIN;
	int32_t t46 = -546734416;

	t46 = ((x201+(x202<x203))==x204);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x206 = -1;
	uint16_t x208 = 0U;
	static int32_t t47 = 21526;

	t47 = ((x205+(x206<x207))==x208);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x209 = -53852554502LL;
	static int16_t x210 = -2;
	int16_t x211 = -1298;
	uint64_t x212 = 1965170LLU;
	int32_t t48 = -114127;

	t48 = ((x209+(x210<x211))==x212);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x213 = -1;
	uint32_t x214 = 102817037U;
	volatile int32_t t49 = -660129127;

	t49 = ((x213+(x214<x215))==x216);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x217 = INT16_MAX;
	int64_t x218 = -1LL;
	int32_t x219 = 33;

	t50 = ((x217+(x218<x219))==x220);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x221 = INT32_MAX;
	uint64_t x222 = UINT64_MAX;
	static int16_t x223 = INT16_MAX;
	static int16_t x224 = 19;

	t51 = ((x221+(x222<x223))==x224);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x225 = UINT16_MAX;
	int16_t x226 = INT16_MIN;
	int16_t x227 = -1993;
	volatile int32_t x228 = -2;
	volatile int32_t t52 = 120869675;

	t52 = ((x225+(x226<x227))==x228);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x230 = 217;
	int8_t x231 = -1;
	uint64_t x232 = UINT64_MAX;
	int32_t t53 = -403;

	t53 = ((x229+(x230<x231))==x232);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x233 = INT16_MIN;
	volatile uint32_t x234 = UINT32_MAX;
	static int16_t x235 = 1781;
	uint64_t x236 = UINT64_MAX;

	t54 = ((x233+(x234<x235))==x236);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x237 = 21U;
	int16_t x239 = INT16_MIN;
	volatile int8_t x240 = INT8_MAX;
	int32_t t55 = 30366776;

	t55 = ((x237+(x238<x239))==x240);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x242 = 0;
	volatile int8_t x243 = -1;
	int32_t x244 = -1;
	int32_t t56 = -1;

	t56 = ((x241+(x242<x243))==x244);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x245 = 6;
	volatile int32_t x246 = 26345473;
	int64_t x247 = -1LL;
	volatile int32_t t57 = -5;

	t57 = ((x245+(x246<x247))==x248);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x249 = 125U;
	uint8_t x250 = UINT8_MAX;
	uint64_t x251 = UINT64_MAX;

	t58 = ((x249+(x250<x251))==x252);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x253 = UINT64_MAX;
	int32_t x254 = -182;
	int8_t x255 = INT8_MIN;
	static int16_t x256 = -1957;

	t59 = ((x253+(x254<x255))==x256);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x258 = INT64_MIN;
	uint32_t x259 = UINT32_MAX;
	volatile int16_t x260 = -1;
	int32_t t60 = -2614;

	t60 = ((x257+(x258<x259))==x260);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x261 = 94LLU;
	static uint16_t x262 = 1U;
	int16_t x264 = INT16_MAX;

	t61 = ((x261+(x262<x263))==x264);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x265 = 36U;
	volatile int8_t x266 = INT8_MIN;
	volatile int16_t x267 = -1;
	uint64_t x268 = 218LLU;
	volatile int32_t t62 = 416906259;

	t62 = ((x265+(x266<x267))==x268);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x271 = 57;
	volatile int16_t x272 = 3;

	t63 = ((x269+(x270<x271))==x272);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x273 = INT8_MAX;
	volatile int64_t x274 = -10140215475913450LL;
	uint64_t x275 = 591615LLU;
	int8_t x276 = INT8_MAX;
	volatile int32_t t64 = -41;

	t64 = ((x273+(x274<x275))==x276);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x277 = 127728179LLU;
	int8_t x278 = INT8_MIN;
	uint32_t x279 = 5924U;
	int32_t x280 = INT32_MIN;

	t65 = ((x277+(x278<x279))==x280);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x281 = -27550543;
	int16_t x282 = INT16_MAX;
	uint64_t x283 = 188694574LLU;
	volatile int32_t x284 = INT32_MIN;
	volatile int32_t t66 = 97914;

	t66 = ((x281+(x282<x283))==x284);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x285 = INT64_MAX;
	int32_t x286 = -1;
	volatile int64_t x287 = -83514270505413721LL;
	volatile uint16_t x288 = 17U;
	static int32_t t67 = 168827;

	t67 = ((x285+(x286<x287))==x288);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x289 = -1;
	uint64_t x291 = UINT64_MAX;
	static int32_t x292 = INT32_MAX;

	t68 = ((x289+(x290<x291))==x292);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x293 = -1;
	volatile int32_t x294 = -1;
	uint64_t x295 = 3684LLU;
	static uint16_t x296 = 6U;
	int32_t t69 = -136002144;

	t69 = ((x293+(x294<x295))==x296);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint64_t x298 = 794436LLU;
	int64_t x299 = INT64_MIN;
	static int32_t t70 = -24766777;

	t70 = ((x297+(x298<x299))==x300);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x301 = INT16_MAX;
	int32_t x302 = INT32_MAX;
	int32_t x303 = INT32_MIN;
	static int16_t x304 = INT16_MIN;
	int32_t t71 = 502608705;

	t71 = ((x301+(x302<x303))==x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x305 = INT32_MAX;
	int16_t x306 = 0;
	static volatile int32_t x307 = -217;
	uint16_t x308 = UINT16_MAX;
	volatile int32_t t72 = -81;

	t72 = ((x305+(x306<x307))==x308);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x309 = UINT16_MAX;
	int32_t x310 = INT32_MIN;
	static int8_t x311 = 1;
	int8_t x312 = -1;
	volatile int32_t t73 = 354270;

	t73 = ((x309+(x310<x311))==x312);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x313 = 696280048;
	volatile int64_t x315 = 1434531995343763LL;
	uint16_t x316 = 25U;
	volatile int32_t t74 = 124;

	t74 = ((x313+(x314<x315))==x316);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x318 = INT16_MIN;
	static volatile int16_t x319 = INT16_MAX;
	static int32_t t75 = -507756;

	t75 = ((x317+(x318<x319))==x320);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x322 = 806;
	int32_t x323 = -1;
	static volatile int16_t x324 = -1;
	int32_t t76 = -245710652;

	t76 = ((x321+(x322<x323))==x324);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x326 = -4064;
	int32_t x327 = 25611599;
	int32_t x328 = -1;
	int32_t t77 = 15077;

	t77 = ((x325+(x326<x327))==x328);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x329 = INT16_MIN;
	volatile int64_t x330 = -734126302403951LL;
	int16_t x331 = -1;
	int32_t x332 = INT32_MAX;

	t78 = ((x329+(x330<x331))==x332);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x333 = UINT64_MAX;
	static int8_t x334 = -1;
	int64_t x335 = INT64_MIN;
	volatile uint8_t x336 = UINT8_MAX;
	volatile int32_t t79 = -37042;

	t79 = ((x333+(x334<x335))==x336);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x337 = 34777672751629190LLU;
	static int8_t x338 = -1;
	int16_t x339 = INT16_MAX;
	static int32_t t80 = -105963120;

	t80 = ((x337+(x338<x339))==x340);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x343 = 11;
	int32_t t81 = 843663498;

	t81 = ((x341+(x342<x343))==x344);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x349 = 14LL;
	uint64_t x350 = 215208400348932976LLU;
	int8_t x351 = INT8_MIN;

	t82 = ((x349+(x350<x351))==x352);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x353 = INT16_MIN;
	uint16_t x354 = 103U;
	uint8_t x355 = 39U;
	static volatile int32_t x356 = INT32_MAX;
	volatile int32_t t83 = -30;

	t83 = ((x353+(x354<x355))==x356);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t x357 = 0;
	int8_t x358 = INT8_MAX;
	int32_t x359 = -24932;
	int8_t x360 = -1;
	int32_t t84 = -42;

	t84 = ((x357+(x358<x359))==x360);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x361 = 57743857057LL;
	volatile int8_t x362 = INT8_MIN;
	int16_t x363 = -479;
	int16_t x364 = -1;
	static volatile int32_t t85 = -6;

	t85 = ((x361+(x362<x363))==x364);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x365 = 9LLU;
	uint8_t x366 = 2U;
	static int32_t x367 = INT32_MAX;
	volatile int32_t t86 = -209747;

	t86 = ((x365+(x366<x367))==x368);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x369 = 3212246U;
	uint16_t x372 = 6U;
	static volatile int32_t t87 = 0;

	t87 = ((x369+(x370<x371))==x372);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x377 = INT64_MIN;
	int8_t x378 = -1;
	static volatile uint32_t x379 = 3U;
	int32_t x380 = -1;
	volatile int32_t t88 = -1194;

	t88 = ((x377+(x378<x379))==x380);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x381 = 81U;
	volatile int64_t x382 = 3LL;
	int32_t x383 = 5;
	static int8_t x384 = -1;
	static int32_t t89 = 182;

	t89 = ((x381+(x382<x383))==x384);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x385 = INT16_MIN;
	static volatile int32_t t90 = -221996438;

	t90 = ((x385+(x386<x387))==x388);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x389 = -1LL;
	int8_t x390 = 47;
	uint32_t x391 = UINT32_MAX;
	int32_t t91 = -874105972;

	t91 = ((x389+(x390<x391))==x392);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x393 = 3397U;
	static uint16_t x395 = UINT16_MAX;
	uint32_t x396 = 244713U;
	volatile int32_t t92 = 8031236;

	t92 = ((x393+(x394<x395))==x396);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x397 = 96U;
	static int8_t x398 = INT8_MAX;
	int64_t x400 = 17733090746391071LL;
	int32_t t93 = 11970;

	t93 = ((x397+(x398<x399))==x400);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x401 = -14;
	int64_t x402 = INT64_MIN;
	int8_t x403 = -1;

	t94 = ((x401+(x402<x403))==x404);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x406 = 6U;
	uint64_t x407 = UINT64_MAX;
	volatile int32_t x408 = -1;
	volatile int32_t t95 = 105;

	t95 = ((x405+(x406<x407))==x408);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x409 = 46U;
	static uint16_t x410 = 3252U;
	int64_t x411 = INT64_MIN;
	static int16_t x412 = INT16_MIN;
	static int32_t t96 = -1;

	t96 = ((x409+(x410<x411))==x412);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x414 = 4534255950057LLU;
	uint8_t x415 = 32U;
	int16_t x416 = INT16_MIN;
	static int32_t t97 = 388;

	t97 = ((x413+(x414<x415))==x416);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x417 = 26U;
	uint32_t x419 = UINT32_MAX;
	volatile uint32_t x420 = 1012U;
	volatile int32_t t98 = 35335;

	t98 = ((x417+(x418<x419))==x420);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x422 = -1;
	static volatile int32_t x423 = -218929;
	int32_t x424 = 19;
	int32_t t99 = -110733281;

	t99 = ((x421+(x422<x423))==x424);

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

