#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x1 = INT64_MIN;
int16_t x10 = 5741;
static int32_t x17 = 1;
int16_t x24 = -1;
int64_t x27 = INT64_MAX;
int64_t x31 = INT64_MIN;
volatile int32_t t9 = 0;
static uint64_t x42 = 42280888973022LLU;
static int32_t x43 = 27;
uint32_t x49 = UINT32_MAX;
static int32_t x61 = INT32_MIN;
static int64_t x66 = INT64_MIN;
int16_t x70 = INT16_MAX;
uint16_t x72 = UINT16_MAX;
static int32_t t17 = 85599157;
int64_t x78 = 815397290LL;
int64_t x79 = INT64_MAX;
int64_t x80 = -3487038188LL;
static int64_t t19 = -6742965041434708LL;
uint64_t x84 = 134844195655177LLU;
uint64_t t20 = 47206LLU;
int16_t x86 = INT16_MIN;
volatile int32_t x97 = -384851368;
volatile uint16_t x100 = UINT16_MAX;
int64_t x110 = -1LL;
int64_t x112 = INT64_MIN;
uint16_t x116 = UINT16_MAX;
int32_t t28 = 3;
int16_t x123 = INT16_MIN;
static int16_t x126 = INT16_MAX;
int16_t x130 = INT16_MIN;
uint64_t x131 = 1471686711314817907LLU;
uint64_t t32 = 98LLU;
static int32_t x135 = -1;
volatile uint32_t x147 = 193U;
volatile int32_t t37 = -786614;
int16_t x155 = -1;
int32_t x156 = INT32_MIN;
uint16_t x167 = 28U;
uint64_t t45 = 500736824033784832LLU;
uint64_t x185 = 58538605042430629LLU;
int16_t x186 = 2;
volatile int32_t x187 = INT32_MAX;
static uint16_t x190 = UINT16_MAX;
uint16_t x194 = 56U;
volatile int32_t t48 = 62;
int32_t t50 = -342;
static uint32_t x212 = UINT32_MAX;
int8_t x214 = INT8_MAX;
int32_t t54 = 30473;
static uint32_t x221 = 41U;
volatile uint32_t x223 = UINT32_MAX;
uint32_t t55 = 1U;
int32_t x228 = INT32_MIN;
static int64_t x234 = INT64_MIN;
int64_t x235 = -276081336373252413LL;
volatile int64_t t58 = -3528097041434LL;
static uint8_t x237 = UINT8_MAX;
uint32_t x240 = 0U;
static int64_t x249 = INT64_MIN;
volatile int32_t x253 = 13786783;
volatile int32_t x254 = -9167047;
uint64_t x256 = 484LLU;
int16_t x258 = INT16_MIN;
int32_t x278 = -669;
static volatile int16_t x285 = INT16_MAX;
volatile int16_t x288 = INT16_MAX;
volatile int32_t t71 = 3;
int8_t x289 = 1;
static uint32_t x293 = 1568152U;
uint8_t x296 = 3U;
int16_t x300 = INT16_MIN;
static volatile int16_t x304 = 1;
static int16_t x312 = INT16_MIN;
volatile int32_t t77 = -265;
static uint64_t t79 = 806814094727068752LLU;
uint16_t x324 = 998U;
uint8_t x326 = UINT8_MAX;
static int16_t x327 = INT16_MIN;
int8_t x332 = INT8_MIN;
uint16_t x333 = UINT16_MAX;
uint8_t x335 = UINT8_MAX;
int16_t x338 = -3856;
int8_t x341 = -5;
uint64_t x345 = 30165333820387LLU;
int8_t x347 = -1;
uint32_t x356 = 1990U;
uint32_t t88 = 22U;
volatile int8_t x357 = -35;
int64_t x365 = INT64_MAX;
volatile int64_t x376 = 9171224735666975LL;
int64_t x379 = INT64_MIN;
volatile int32_t x381 = -1;
static uint64_t x384 = 67034493LLU;
uint16_t x387 = 24444U;
int64_t x391 = -1LL;
int8_t x392 = INT8_MAX;
static int8_t x395 = 1;
int16_t x399 = 1;


void f0(void) {
	int8_t x2 = 1;
	int64_t x3 = -5191773807600LL;
	uint8_t x4 = 6U;
	static int32_t t0 = -185346490;

	t0 = ((x1<(x2==x3))&x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	uint32_t x6 = 94U;
	static volatile int16_t x7 = -794;
	uint16_t x8 = 1050U;
	volatile int32_t t1 = 20;

	t1 = ((x5<(x6==x7))&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = INT64_MAX;
	uint8_t x11 = UINT8_MAX;
	uint64_t x12 = 891787527271797371LLU;
	uint64_t t2 = 5889LLU;

	t2 = ((x9<(x10==x11))&x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	volatile int16_t x14 = -1;
	int16_t x15 = -1;
	static int32_t x16 = INT32_MAX;
	static int32_t t3 = 25411;

	t3 = ((x13<(x14==x15))&x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x18 = 3;
	int8_t x19 = -1;
	static int8_t x20 = -1;
	volatile int32_t t4 = 165;

	t4 = ((x17<(x18==x19))&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	int64_t x22 = -1LL;
	int64_t x23 = INT64_MIN;
	static int32_t t5 = 25;

	t5 = ((x21<(x22==x23))&x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = UINT8_MAX;
	int32_t x26 = INT32_MIN;
	int16_t x28 = -1;
	volatile int32_t t6 = 67;

	t6 = ((x25<(x26==x27))&x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	int64_t x30 = INT64_MAX;
	int64_t x32 = INT64_MIN;
	volatile int64_t t7 = 197026LL;

	t7 = ((x29<(x30==x31))&x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x33 = 27U;
	uint32_t x34 = 14722200U;
	volatile int16_t x35 = INT16_MIN;
	uint16_t x36 = 6832U;
	int32_t t8 = -31285097;

	t8 = ((x33<(x34==x35))&x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	uint32_t x38 = 9221U;
	static int16_t x39 = INT16_MAX;
	static int32_t x40 = -3;

	t9 = ((x37<(x38==x39))&x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -1501LL;
	static int32_t x44 = 39;
	volatile int32_t t10 = -1;

	t10 = ((x41<(x42==x43))&x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = -1;
	volatile uint32_t x46 = UINT32_MAX;
	int64_t x47 = 3852401298238005LL;
	uint32_t x48 = UINT32_MAX;
	volatile uint32_t t11 = 494102792U;

	t11 = ((x45<(x46==x47))&x48);

	if (t11 != 1U) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x50 = 325031U;
	uint16_t x51 = 313U;
	static int16_t x52 = INT16_MAX;
	int32_t t12 = 152;

	t12 = ((x49<(x50==x51))&x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = INT8_MAX;
	volatile int16_t x54 = INT16_MIN;
	int64_t x55 = INT64_MIN;
	int32_t x56 = 332555;
	int32_t t13 = -1;

	t13 = ((x53<(x54==x55))&x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x57 = 1;
	int32_t x58 = -927734;
	volatile uint32_t x59 = 57719402U;
	uint32_t x60 = 58907828U;
	uint32_t t14 = 85001253U;

	t14 = ((x57<(x58==x59))&x60);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x62 = INT64_MAX;
	uint64_t x63 = UINT64_MAX;
	int32_t x64 = INT32_MIN;
	int32_t t15 = 324141812;

	t15 = ((x61<(x62==x63))&x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x65 = 2U;
	int64_t x67 = INT64_MAX;
	int32_t x68 = -1;
	volatile int32_t t16 = 1545;

	t16 = ((x65<(x66==x67))&x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -55;
	volatile int64_t x71 = -1LL;

	t17 = ((x69<(x70==x71))&x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 95U;
	static volatile int8_t x74 = INT8_MIN;
	uint64_t x75 = 26388395193LLU;
	volatile int32_t x76 = INT32_MAX;
	volatile int32_t t18 = 2696;

	t18 = ((x73<(x74==x75))&x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MAX;

	t19 = ((x77<(x78==x79))&x80);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 1U;
	int64_t x82 = INT64_MIN;
	uint16_t x83 = UINT16_MAX;

	t20 = ((x81<(x82==x83))&x84);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = 8618613005858LL;
	uint32_t x87 = UINT32_MAX;
	uint64_t x88 = UINT64_MAX;
	volatile uint64_t t21 = 133LLU;

	t21 = ((x85<(x86==x87))&x88);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x89 = -33;
	static uint32_t x90 = 1012302U;
	int8_t x91 = INT8_MIN;
	static uint16_t x92 = UINT16_MAX;
	int32_t t22 = 26533004;

	t22 = ((x89<(x90==x91))&x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x93 = 30U;
	static int16_t x94 = INT16_MAX;
	int16_t x95 = -535;
	static uint8_t x96 = 2U;
	volatile int32_t t23 = -3;

	t23 = ((x93<(x94==x95))&x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x98 = -1;
	int64_t x99 = INT64_MIN;
	volatile int32_t t24 = -918;

	t24 = ((x97<(x98==x99))&x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	uint64_t x102 = 50069LLU;
	static int32_t x103 = INT32_MIN;
	int8_t x104 = INT8_MAX;
	volatile int32_t t25 = 3;

	t25 = ((x101<(x102==x103))&x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = 7137LL;
	static int16_t x106 = INT16_MIN;
	volatile int16_t x107 = 13;
	int64_t x108 = -1832942841796843814LL;
	volatile int64_t t26 = 1718291LL;

	t26 = ((x105<(x106==x107))&x108);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MAX;
	volatile uint32_t x111 = 7986053U;
	static int64_t t27 = -4273352169516523922LL;

	t27 = ((x109<(x110==x111))&x112);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x113 = 127U;
	int8_t x114 = INT8_MAX;
	static int16_t x115 = -1;

	t28 = ((x113<(x114==x115))&x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -1;
	uint64_t x118 = 3554LLU;
	volatile int32_t x119 = 330648;
	uint32_t x120 = UINT32_MAX;
	uint32_t t29 = 1U;

	t29 = ((x117<(x118==x119))&x120);

	if (t29 != 1U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x121 = INT32_MIN;
	volatile uint16_t x122 = UINT16_MAX;
	uint32_t x124 = 4214100U;
	static uint32_t t30 = 942U;

	t30 = ((x121<(x122==x123))&x124);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x125 = 21500U;
	static int32_t x127 = -350;
	uint32_t x128 = 347621194U;
	uint32_t t31 = 781955129U;

	t31 = ((x125<(x126==x127))&x128);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	uint64_t x132 = 2261926582154957552LLU;

	t32 = ((x129<(x130==x131))&x132);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 554967971LLU;
	int8_t x134 = 0;
	int8_t x136 = -1;
	static int32_t t33 = -1;

	t33 = ((x133<(x134==x135))&x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 6U;
	int8_t x138 = INT8_MIN;
	int64_t x139 = -143167655718399176LL;
	int16_t x140 = INT16_MIN;
	int32_t t34 = 436;

	t34 = ((x137<(x138==x139))&x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = 98;
	static int32_t x142 = -1;
	uint16_t x143 = UINT16_MAX;
	int8_t x144 = INT8_MIN;
	volatile int32_t t35 = 274295335;

	t35 = ((x141<(x142==x143))&x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MAX;
	int32_t x146 = -271576546;
	static int8_t x148 = -1;
	int32_t t36 = -584574;

	t36 = ((x145<(x146==x147))&x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x149 = 1;
	static volatile int16_t x150 = -13;
	int64_t x151 = INT64_MAX;
	int8_t x152 = INT8_MIN;

	t37 = ((x149<(x150==x151))&x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 57U;
	volatile int64_t x154 = INT64_MIN;
	static volatile int32_t t38 = -1986261;

	t38 = ((x153<(x154==x155))&x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = UINT8_MAX;
	int32_t x158 = -1;
	int64_t x159 = INT64_MIN;
	int64_t x160 = INT64_MAX;
	volatile int64_t t39 = -1595420198709283722LL;

	t39 = ((x157<(x158==x159))&x160);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	int32_t x162 = INT32_MAX;
	int32_t x163 = INT32_MAX;
	int32_t x164 = INT32_MIN;
	int32_t t40 = 629945354;

	t40 = ((x161<(x162==x163))&x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x165 = 13LL;
	uint64_t x166 = UINT64_MAX;
	static uint16_t x168 = 16U;
	volatile int32_t t41 = -39406548;

	t41 = ((x165<(x166==x167))&x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = UINT32_MAX;
	int64_t x170 = INT64_MAX;
	uint64_t x171 = 3169149807151LLU;
	uint8_t x172 = 21U;
	int32_t t42 = 27;

	t42 = ((x169<(x170==x171))&x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = 12;
	static int32_t x174 = INT32_MIN;
	volatile int8_t x175 = 17;
	int8_t x176 = INT8_MAX;
	volatile int32_t t43 = 246465164;

	t43 = ((x173<(x174==x175))&x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x177 = 125U;
	int8_t x178 = INT8_MAX;
	static volatile int64_t x179 = -1LL;
	static int16_t x180 = 1;
	volatile int32_t t44 = 8403529;

	t44 = ((x177<(x178==x179))&x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = UINT16_MAX;
	uint64_t x182 = UINT64_MAX;
	int64_t x183 = INT64_MIN;
	uint64_t x184 = UINT64_MAX;

	t45 = ((x181<(x182==x183))&x184);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x188 = UINT16_MAX;
	int32_t t46 = -2705;

	t46 = ((x185<(x186==x187))&x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MAX;
	uint64_t x191 = 94507018314713LLU;
	static volatile uint16_t x192 = 14178U;
	static int32_t t47 = 150;

	t47 = ((x189<(x190==x191))&x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x193 = INT8_MIN;
	static volatile uint16_t x195 = 495U;
	int32_t x196 = -50079352;

	t48 = ((x193<(x194==x195))&x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x197 = INT64_MAX;
	int64_t x198 = INT64_MIN;
	volatile int16_t x199 = -1;
	int16_t x200 = INT16_MIN;
	int32_t t49 = -582728465;

	t49 = ((x197<(x198==x199))&x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MAX;
	static int32_t x202 = INT32_MIN;
	int16_t x203 = 2643;
	int32_t x204 = INT32_MIN;

	t50 = ((x201<(x202==x203))&x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x205 = -21;
	int32_t x206 = 838;
	uint32_t x207 = UINT32_MAX;
	int64_t x208 = -8206113LL;
	int64_t t51 = -924948422984LL;

	t51 = ((x205<(x206==x207))&x208);

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 15U;
	uint8_t x210 = 7U;
	uint8_t x211 = 53U;
	uint32_t t52 = 2866174U;

	t52 = ((x209<(x210==x211))&x212);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = UINT32_MAX;
	volatile int16_t x215 = INT16_MIN;
	int8_t x216 = -28;
	int32_t t53 = -87439183;

	t53 = ((x213<(x214==x215))&x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MAX;
	uint8_t x218 = UINT8_MAX;
	uint64_t x219 = UINT64_MAX;
	int32_t x220 = INT32_MIN;

	t54 = ((x217<(x218==x219))&x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x222 = -1;
	static volatile uint32_t x224 = 2240453U;

	t55 = ((x221<(x222==x223))&x224);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -1LL;
	static int32_t x226 = INT32_MIN;
	uint16_t x227 = UINT16_MAX;
	int32_t t56 = 0;

	t56 = ((x225<(x226==x227))&x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = INT8_MIN;
	int8_t x230 = INT8_MIN;
	int16_t x231 = INT16_MAX;
	int32_t x232 = 416401;
	static volatile int32_t t57 = -126;

	t57 = ((x229<(x230==x231))&x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -1LL;
	static volatile int64_t x236 = INT64_MIN;

	t58 = ((x233<(x234==x235))&x236);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x238 = -1;
	volatile int16_t x239 = INT16_MAX;
	volatile uint32_t t59 = 4U;

	t59 = ((x237<(x238==x239))&x240);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = 1;
	static volatile int64_t x242 = -1LL;
	static int16_t x243 = -20;
	uint32_t x244 = 281U;
	volatile uint32_t t60 = 46U;

	t60 = ((x241<(x242==x243))&x244);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = -1;
	int32_t x246 = -832;
	uint64_t x247 = 14320920LLU;
	int16_t x248 = -1;
	int32_t t61 = 3214002;

	t61 = ((x245<(x246==x247))&x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x250 = 1LL;
	int8_t x251 = -1;
	uint64_t x252 = 4084356791624196LLU;
	uint64_t t62 = 6LLU;

	t62 = ((x249<(x250==x251))&x252);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x255 = INT8_MIN;
	static volatile uint64_t t63 = 974106426250742LLU;

	t63 = ((x253<(x254==x255))&x256);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = 3;
	int64_t x259 = INT64_MAX;
	static int64_t x260 = -1LL;
	volatile int64_t t64 = -122587741617104LL;

	t64 = ((x257<(x258==x259))&x260);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x261 = 179LLU;
	int32_t x262 = INT32_MIN;
	int64_t x263 = -107614107450LL;
	static int16_t x264 = INT16_MIN;
	volatile int32_t t65 = 28936;

	t65 = ((x261<(x262==x263))&x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = 635U;
	int8_t x266 = -23;
	int16_t x267 = -2769;
	int16_t x268 = INT16_MIN;
	volatile int32_t t66 = 1;

	t66 = ((x265<(x266==x267))&x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = 1U;
	static int8_t x270 = -1;
	static int8_t x271 = INT8_MIN;
	volatile uint64_t x272 = 18059530LLU;
	uint64_t t67 = 47759LLU;

	t67 = ((x269<(x270==x271))&x272);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MIN;
	int32_t x274 = -1;
	static uint32_t x275 = 182093U;
	volatile uint32_t x276 = 1U;
	uint32_t t68 = 1U;

	t68 = ((x273<(x274==x275))&x276);

	if (t68 != 1U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x277 = 20767U;
	volatile uint16_t x279 = 6158U;
	uint64_t x280 = 9421969LLU;
	volatile uint64_t t69 = 256569984972LLU;

	t69 = ((x277<(x278==x279))&x280);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x281 = 3U;
	uint32_t x282 = 7U;
	int32_t x283 = -1;
	uint64_t x284 = 7328326340020LLU;
	uint64_t t70 = 12LLU;

	t70 = ((x281<(x282==x283))&x284);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x286 = 24U;
	uint16_t x287 = 898U;

	t71 = ((x285<(x286==x287))&x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x290 = 4;
	uint8_t x291 = 28U;
	int64_t x292 = 235721620LL;
	volatile int64_t t72 = -1237150881932LL;

	t72 = ((x289<(x290==x291))&x292);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x294 = INT32_MAX;
	static int64_t x295 = -10358695250767668LL;
	volatile int32_t t73 = -1;

	t73 = ((x293<(x294==x295))&x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = -356858;
	int8_t x298 = 1;
	uint16_t x299 = 22U;
	volatile int32_t t74 = -2503;

	t74 = ((x297<(x298==x299))&x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MAX;
	volatile int64_t x302 = -1LL;
	uint64_t x303 = 7873123LLU;
	static int32_t t75 = 195767;

	t75 = ((x301<(x302==x303))&x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = 869U;
	static uint32_t x306 = 12216U;
	int64_t x307 = -1LL;
	int32_t x308 = INT32_MIN;
	static volatile int32_t t76 = 209767;

	t76 = ((x305<(x306==x307))&x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = 147;
	int64_t x310 = 814755127LL;
	uint16_t x311 = 22487U;

	t77 = ((x309<(x310==x311))&x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = UINT32_MAX;
	volatile int16_t x314 = -1;
	int32_t x315 = 14;
	static uint64_t x316 = 475613469964622LLU;
	uint64_t t78 = 1663216651LLU;

	t78 = ((x313<(x314==x315))&x316);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = 0;
	volatile uint8_t x318 = 3U;
	int8_t x319 = INT8_MIN;
	volatile uint64_t x320 = 7062621LLU;

	t79 = ((x317<(x318==x319))&x320);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	int16_t x322 = -14;
	volatile uint64_t x323 = UINT64_MAX;
	static int32_t t80 = -10684600;

	t80 = ((x321<(x322==x323))&x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MAX;
	int64_t x328 = INT64_MIN;
	volatile int64_t t81 = 1794939032057648LL;

	t81 = ((x325<(x326==x327))&x328);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MAX;
	int64_t x330 = -16LL;
	int32_t x331 = 170;
	volatile int32_t t82 = -155959;

	t82 = ((x329<(x330==x331))&x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x334 = -25;
	int8_t x336 = 7;
	volatile int32_t t83 = 1;

	t83 = ((x333<(x334==x335))&x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x337 = 1564;
	static uint16_t x339 = UINT16_MAX;
	int64_t x340 = -1LL;
	volatile int64_t t84 = -7267391413067415LL;

	t84 = ((x337<(x338==x339))&x340);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x342 = INT64_MIN;
	uint64_t x343 = 424868670779262LLU;
	static int8_t x344 = INT8_MAX;
	volatile int32_t t85 = 139820701;

	t85 = ((x341<(x342==x343))&x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x346 = 2U;
	int8_t x348 = INT8_MIN;
	volatile int32_t t86 = 117392370;

	t86 = ((x345<(x346==x347))&x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = -1LL;
	int64_t x350 = INT64_MIN;
	int8_t x351 = INT8_MIN;
	volatile uint8_t x352 = 3U;
	static int32_t t87 = -46601886;

	t87 = ((x349<(x350==x351))&x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x353 = -1;
	static int16_t x354 = INT16_MIN;
	int16_t x355 = 7;

	t88 = ((x353<(x354==x355))&x356);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x358 = 0;
	volatile int64_t x359 = 645489347366155LL;
	int64_t x360 = INT64_MAX;
	static int64_t t89 = -5834994301527LL;

	t89 = ((x357<(x358==x359))&x360);

	if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MAX;
	int16_t x362 = INT16_MAX;
	int8_t x363 = INT8_MAX;
	static int8_t x364 = -1;
	int32_t t90 = -349910;

	t90 = ((x361<(x362==x363))&x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x366 = 1004015U;
	int64_t x367 = -40135865048087LL;
	uint16_t x368 = 12574U;
	int32_t t91 = 20;

	t91 = ((x365<(x366==x367))&x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x369 = INT16_MIN;
	int8_t x370 = -1;
	static volatile int32_t x371 = INT32_MIN;
	static uint16_t x372 = 80U;
	volatile int32_t t92 = 1;

	t92 = ((x369<(x370==x371))&x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -1;
	static int32_t x374 = -20310503;
	static volatile int32_t x375 = -230888;
	int64_t t93 = -32863479642LL;

	t93 = ((x373<(x374==x375))&x376);

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x377 = INT64_MAX;
	int64_t x378 = INT64_MIN;
	uint64_t x380 = 188211212LLU;
	uint64_t t94 = 1536752755642227LLU;

	t94 = ((x377<(x378==x379))&x380);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x382 = INT32_MIN;
	volatile int32_t x383 = INT32_MIN;
	volatile uint64_t t95 = 454LLU;

	t95 = ((x381<(x382==x383))&x384);

	if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = 77;
	volatile int16_t x386 = 3340;
	int64_t x388 = -2LL;
	int64_t t96 = 110LL;

	t96 = ((x385<(x386==x387))&x388);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MIN;
	uint32_t x390 = UINT32_MAX;
	int32_t t97 = -968699;

	t97 = ((x389<(x390==x391))&x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = -1;
	uint64_t x394 = UINT64_MAX;
	uint8_t x396 = UINT8_MAX;
	volatile int32_t t98 = 101;

	t98 = ((x393<(x394==x395))&x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = UINT8_MAX;
	volatile int16_t x398 = INT16_MIN;
	uint8_t x400 = 5U;
	volatile int32_t t99 = -1;

	t99 = ((x397<(x398==x399))&x400);

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
