#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x12 = -1LL;
uint16_t x14 = 2U;
uint64_t x15 = 12640018LLU;
volatile int32_t t6 = 3487685;
int8_t x34 = INT8_MIN;
static int32_t x38 = -10;
int64_t x41 = INT64_MAX;
int32_t x45 = -1;
int8_t x48 = INT8_MIN;
int64_t x49 = -1LL;
int32_t x53 = -1;
static volatile int32_t x57 = -450389711;
volatile uint64_t x66 = UINT64_MAX;
uint32_t x76 = 4U;
int8_t x87 = INT8_MIN;
int64_t x88 = -25507827924LL;
int64_t x90 = -1LL;
int64_t x97 = INT64_MIN;
int16_t x98 = INT16_MAX;
static volatile uint64_t x100 = UINT64_MAX;
volatile int32_t x102 = 54816706;
static volatile uint16_t x107 = UINT16_MAX;
int16_t x109 = INT16_MIN;
int32_t t27 = 1165413;
int32_t x123 = -1;
static int32_t x127 = INT32_MIN;
int32_t t31 = -703450122;
int16_t x130 = INT16_MIN;
volatile uint32_t x132 = 441461U;
int64_t x134 = INT64_MIN;
int32_t t33 = -347;
uint64_t x139 = 13LLU;
uint8_t x142 = 0U;
int32_t t36 = 11213;
int8_t x150 = INT8_MAX;
volatile int32_t x151 = -1;
int8_t x154 = INT8_MIN;
volatile int32_t t38 = 160;
int8_t x158 = 15;
uint32_t x159 = 75U;
volatile int32_t t39 = -5199501;
static int32_t t40 = 25;
uint8_t x170 = 0U;
uint64_t x176 = UINT64_MAX;
uint8_t x179 = 8U;
volatile int32_t t44 = -5;
static int64_t x183 = INT64_MIN;
volatile int8_t x191 = INT8_MIN;
uint64_t x192 = UINT64_MAX;
int16_t x193 = -1;
volatile int32_t t48 = 5507;
volatile uint32_t x197 = 52321766U;
int8_t x200 = -6;
int32_t t49 = 2;
int64_t x201 = 1085780376292646LL;
volatile int32_t t51 = -33;
int16_t x210 = INT16_MIN;
volatile int32_t x219 = INT32_MIN;
static uint64_t x222 = 85225964512LLU;
int16_t x227 = INT16_MAX;
static int32_t x230 = INT32_MAX;
int32_t t57 = 6;
int16_t x237 = INT16_MIN;
int32_t x238 = -1;
uint32_t x243 = 966583U;
int64_t x254 = -3LL;
int32_t x255 = INT32_MIN;
int32_t x263 = -1;
int32_t t65 = -3539;
int8_t x267 = INT8_MIN;
int64_t x269 = INT64_MAX;
int32_t x270 = INT32_MAX;
static int16_t x275 = INT16_MIN;
int16_t x285 = INT16_MIN;
static int64_t x286 = -12514LL;
int16_t x289 = 17;
int8_t x297 = INT8_MAX;
int32_t t75 = -812;
static int16_t x308 = -23;
int16_t x311 = INT16_MIN;
int32_t x318 = INT32_MIN;
volatile int32_t t80 = 197536109;
int8_t x329 = 4;
int32_t x336 = INT32_MIN;
int32_t t83 = -698;
volatile int8_t x342 = INT8_MIN;
volatile int32_t t85 = 228859;
static int64_t x349 = 7849LL;
int16_t x352 = INT16_MIN;
uint16_t x356 = UINT16_MAX;
volatile uint32_t x361 = 73696U;
volatile uint64_t x364 = UINT64_MAX;
int16_t x365 = 20;
volatile int64_t x369 = -1LL;
int8_t x373 = INT8_MIN;
static volatile int64_t x378 = INT64_MIN;
uint8_t x384 = 18U;
int16_t x386 = INT16_MAX;
int32_t t97 = 103865;
int32_t x393 = -23465;
uint8_t x395 = 0U;
int8_t x398 = -5;


void f0(void) {
	volatile int64_t x1 = -1LL;
	uint8_t x2 = 0U;
	int32_t x3 = INT32_MAX;
	volatile int64_t x4 = 27230266LL;
	volatile int32_t t0 = -9;

	t0 = (x1<=(x2-(x3==x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = 7465U;
	int16_t x6 = -59;
	volatile uint8_t x7 = 16U;
	volatile int64_t x8 = INT64_MAX;
	int32_t t1 = -1037906;

	t1 = (x5<=(x6-(x7==x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	int16_t x10 = -1;
	int8_t x11 = -1;
	int32_t t2 = 812167;

	t2 = (x9<=(x10-(x11==x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = -256702081751LL;
	volatile uint16_t x16 = 38U;
	int32_t t3 = -46;

	t3 = (x13<=(x14-(x15==x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	int16_t x18 = -88;
	static uint8_t x19 = 112U;
	int8_t x20 = INT8_MAX;
	static int32_t t4 = -3575761;

	t4 = (x17<=(x18-(x19==x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x21 = UINT8_MAX;
	volatile int16_t x22 = 1;
	int64_t x23 = INT64_MAX;
	int64_t x24 = -1LL;
	int32_t t5 = -120878873;

	t5 = (x21<=(x22-(x23==x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x25 = 2U;
	volatile int32_t x26 = INT32_MIN;
	static uint8_t x27 = 3U;
	static uint32_t x28 = 293491341U;

	t6 = (x25<=(x26-(x27==x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 5U;
	int8_t x30 = INT8_MAX;
	static int64_t x31 = INT64_MIN;
	uint8_t x32 = UINT8_MAX;
	int32_t t7 = 38;

	t7 = (x29<=(x30-(x31==x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = -1;
	uint32_t x35 = UINT32_MAX;
	volatile int32_t x36 = -23;
	int32_t t8 = -8394;

	t8 = (x33<=(x34-(x35==x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint32_t x37 = 1U;
	volatile int16_t x39 = -3030;
	static int8_t x40 = -12;
	static volatile int32_t t9 = 58500;

	t9 = (x37<=(x38-(x39==x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x42 = 420U;
	int64_t x43 = -1LL;
	static uint32_t x44 = UINT32_MAX;
	volatile int32_t t10 = -1;

	t10 = (x41<=(x42-(x43==x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x46 = -35;
	volatile int8_t x47 = INT8_MIN;
	volatile int32_t t11 = -3398335;

	t11 = (x45<=(x46-(x47==x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = -1;
	int16_t x51 = INT16_MAX;
	volatile int64_t x52 = INT64_MIN;
	volatile int32_t t12 = 419;

	t12 = (x49<=(x50-(x51==x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = 766012;
	int64_t x55 = -217LL;
	volatile uint64_t x56 = 15LLU;
	int32_t t13 = -1;

	t13 = (x53<=(x54-(x55==x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x58 = 28376U;
	static int8_t x59 = INT8_MIN;
	uint8_t x60 = UINT8_MAX;
	volatile int32_t t14 = -796;

	t14 = (x57<=(x58-(x59==x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -41LL;
	static volatile int16_t x62 = INT16_MIN;
	int64_t x63 = INT64_MIN;
	static volatile int8_t x64 = 0;
	static int32_t t15 = 4558;

	t15 = (x61<=(x62-(x63==x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = 6;
	int8_t x67 = 40;
	int64_t x68 = INT64_MIN;
	volatile int32_t t16 = 1194467;

	t16 = (x65<=(x66-(x67==x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = INT64_MIN;
	volatile int16_t x70 = INT16_MIN;
	uint16_t x71 = 4155U;
	int8_t x72 = 1;
	static volatile int32_t t17 = 1;

	t17 = (x69<=(x70-(x71==x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = INT16_MIN;
	int16_t x74 = INT16_MIN;
	volatile int16_t x75 = INT16_MAX;
	volatile int32_t t18 = 251354;

	t18 = (x73<=(x74-(x75==x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 3151935U;
	int64_t x78 = INT64_MAX;
	volatile int32_t x79 = INT32_MAX;
	int8_t x80 = -1;
	int32_t t19 = -11737;

	t19 = (x77<=(x78-(x79==x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = 6146282;
	uint64_t x82 = 47090960LLU;
	int16_t x83 = -38;
	int64_t x84 = -89LL;
	int32_t t20 = 686026;

	t20 = (x81<=(x82-(x83==x84)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint8_t x85 = 33U;
	int32_t x86 = -1;
	static int32_t t21 = 2531062;

	t21 = (x85<=(x86-(x87==x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -88;
	int64_t x91 = INT64_MIN;
	static int8_t x92 = INT8_MIN;
	volatile int32_t t22 = -474;

	t22 = (x89<=(x90-(x91==x92)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = INT32_MAX;
	uint64_t x94 = 304LLU;
	uint8_t x95 = 30U;
	int32_t x96 = -371760469;
	volatile int32_t t23 = 1;

	t23 = (x93<=(x94-(x95==x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x99 = 731269605LLU;
	volatile int32_t t24 = 1108235;

	t24 = (x97<=(x98-(x99==x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x101 = INT8_MIN;
	int64_t x103 = 1LL;
	uint64_t x104 = 76468812104859LLU;
	int32_t t25 = 7403082;

	t25 = (x101<=(x102-(x103==x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	volatile int16_t x106 = -1;
	static int8_t x108 = INT8_MAX;
	static int32_t t26 = -249684;

	t26 = (x105<=(x106-(x107==x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x110 = 0;
	volatile uint16_t x111 = UINT16_MAX;
	int16_t x112 = -123;

	t27 = (x109<=(x110-(x111==x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x113 = 1020573029LLU;
	uint8_t x114 = 0U;
	volatile uint64_t x115 = 14LLU;
	volatile int8_t x116 = INT8_MIN;
	int32_t t28 = -2;

	t28 = (x113<=(x114-(x115==x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x117 = UINT64_MAX;
	int8_t x118 = -1;
	int32_t x119 = INT32_MIN;
	int16_t x120 = -304;
	static volatile int32_t t29 = -11857206;

	t29 = (x117<=(x118-(x119==x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x121 = 728452U;
	int8_t x122 = INT8_MIN;
	uint64_t x124 = 1065778238LLU;
	int32_t t30 = -2954;

	t30 = (x121<=(x122-(x123==x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -1;
	int16_t x126 = INT16_MIN;
	int8_t x128 = INT8_MAX;

	t31 = (x125<=(x126-(x127==x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = UINT8_MAX;
	static int8_t x131 = INT8_MIN;
	int32_t t32 = -8517436;

	t32 = (x129<=(x130-(x131==x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x133 = 174483969;
	static int32_t x135 = -417867188;
	int8_t x136 = -1;

	t33 = (x133<=(x134-(x135==x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = UINT32_MAX;
	int32_t x138 = -2415;
	int16_t x140 = INT16_MIN;
	int32_t t34 = 130896785;

	t34 = (x137<=(x138-(x139==x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -1;
	uint16_t x143 = 56U;
	int16_t x144 = 62;
	static volatile int32_t t35 = -348062259;

	t35 = (x141<=(x142-(x143==x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint32_t x145 = 7U;
	int64_t x146 = -1LL;
	static int16_t x147 = -1;
	static uint64_t x148 = 16115LLU;

	t36 = (x145<=(x146-(x147==x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 20124U;
	static uint64_t x152 = 59013912789LLU;
	volatile int32_t t37 = -5269981;

	t37 = (x149<=(x150-(x151==x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MIN;
	int8_t x155 = INT8_MIN;
	int16_t x156 = INT16_MAX;

	t38 = (x153<=(x154-(x155==x156)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -1;
	int16_t x160 = 5;

	t39 = (x157<=(x158-(x159==x160)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -1;
	static volatile uint8_t x162 = 15U;
	uint32_t x163 = 203640U;
	int32_t x164 = -1;

	t40 = (x161<=(x162-(x163==x164)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = -1;
	uint64_t x166 = 1121LLU;
	static uint16_t x167 = 471U;
	volatile int8_t x168 = 37;
	volatile int32_t t41 = -139658;

	t41 = (x165<=(x166-(x167==x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MAX;
	volatile uint32_t x171 = 109273U;
	int64_t x172 = 398LL;
	volatile int32_t t42 = -378;

	t42 = (x169<=(x170-(x171==x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	volatile int16_t x174 = INT16_MAX;
	uint32_t x175 = UINT32_MAX;
	int32_t t43 = 3803;

	t43 = (x173<=(x174-(x175==x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = 0;
	int8_t x178 = -6;
	volatile uint16_t x180 = 6702U;

	t44 = (x177<=(x178-(x179==x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x181 = INT32_MAX;
	volatile int8_t x182 = INT8_MIN;
	int16_t x184 = 52;
	volatile int32_t t45 = -267;

	t45 = (x181<=(x182-(x183==x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = 12343539406478071LL;
	int8_t x186 = -1;
	volatile uint64_t x187 = UINT64_MAX;
	int32_t x188 = -1;
	static int32_t t46 = -4421993;

	t46 = (x185<=(x186-(x187==x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int64_t x189 = INT64_MIN;
	uint16_t x190 = 15611U;
	volatile int32_t t47 = 0;

	t47 = (x189<=(x190-(x191==x192)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x194 = 224;
	static int64_t x195 = 85383LL;
	volatile int8_t x196 = INT8_MAX;

	t48 = (x193<=(x194-(x195==x196)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x198 = -191;
	int16_t x199 = INT16_MIN;

	t49 = (x197<=(x198-(x199==x200)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x202 = -3;
	static int32_t x203 = INT32_MIN;
	int32_t x204 = -1;
	volatile int32_t t50 = -26179;

	t50 = (x201<=(x202-(x203==x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint64_t x205 = 966678726270312LLU;
	volatile int16_t x206 = 7;
	volatile uint16_t x207 = UINT16_MAX;
	int64_t x208 = INT64_MIN;

	t51 = (x205<=(x206-(x207==x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -238894062;
	static int16_t x211 = -672;
	static int32_t x212 = INT32_MIN;
	int32_t t52 = 21866886;

	t52 = (x209<=(x210-(x211==x212)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -16;
	volatile uint8_t x214 = UINT8_MAX;
	volatile int32_t x215 = INT32_MIN;
	int8_t x216 = INT8_MIN;
	int32_t t53 = 82;

	t53 = (x213<=(x214-(x215==x216)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x217 = UINT64_MAX;
	int16_t x218 = INT16_MIN;
	static int64_t x220 = 66467430373672LL;
	int32_t t54 = 5;

	t54 = (x217<=(x218-(x219==x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = UINT64_MAX;
	volatile int64_t x223 = -10393LL;
	int32_t x224 = INT32_MAX;
	static volatile int32_t t55 = 492364;

	t55 = (x221<=(x222-(x223==x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MAX;
	int8_t x226 = INT8_MIN;
	int64_t x228 = INT64_MIN;
	int32_t t56 = -29;

	t56 = (x225<=(x226-(x227==x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = -4;
	volatile int32_t x231 = INT32_MIN;
	int16_t x232 = INT16_MIN;

	t57 = (x229<=(x230-(x231==x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -381199LL;
	volatile uint64_t x234 = 192203053472895791LLU;
	static int16_t x235 = 26;
	static uint8_t x236 = 2U;
	volatile int32_t t58 = -15027;

	t58 = (x233<=(x234-(x235==x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x239 = INT16_MIN;
	int8_t x240 = INT8_MIN;
	int32_t t59 = 122716;

	t59 = (x237<=(x238-(x239==x240)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x241 = UINT16_MAX;
	int8_t x242 = 17;
	int32_t x244 = INT32_MIN;
	static int32_t t60 = -1;

	t60 = (x241<=(x242-(x243==x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x245 = INT16_MAX;
	static int64_t x246 = INT64_MIN;
	volatile int8_t x247 = 12;
	int64_t x248 = 51235474171744981LL;
	volatile int32_t t61 = 0;

	t61 = (x245<=(x246-(x247==x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MAX;
	uint8_t x250 = 2U;
	int64_t x251 = INT64_MIN;
	int8_t x252 = 2;
	static int32_t t62 = 0;

	t62 = (x249<=(x250-(x251==x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MIN;
	int16_t x256 = -1;
	volatile int32_t t63 = 1;

	t63 = (x253<=(x254-(x255==x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	static int64_t x258 = INT64_MAX;
	volatile int16_t x259 = INT16_MIN;
	int8_t x260 = INT8_MAX;
	volatile int32_t t64 = -1509761;

	t64 = (x257<=(x258-(x259==x260)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 1U;
	uint64_t x262 = 4851480289LLU;
	uint64_t x264 = 143290891749542117LLU;

	t65 = (x261<=(x262-(x263==x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x265 = UINT16_MAX;
	int16_t x266 = INT16_MAX;
	uint64_t x268 = 855875LLU;
	volatile int32_t t66 = -247941293;

	t66 = (x265<=(x266-(x267==x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x271 = 2759366U;
	int32_t x272 = -41091412;
	int32_t t67 = -67595;

	t67 = (x269<=(x270-(x271==x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x273 = INT64_MIN;
	uint64_t x274 = 6155434348685977LLU;
	int8_t x276 = INT8_MIN;
	int32_t t68 = 220;

	t68 = (x273<=(x274-(x275==x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x277 = UINT64_MAX;
	int16_t x278 = INT16_MIN;
	uint8_t x279 = 1U;
	static uint64_t x280 = UINT64_MAX;
	volatile int32_t t69 = -737940;

	t69 = (x277<=(x278-(x279==x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x281 = 22506U;
	uint32_t x282 = 25U;
	volatile int32_t x283 = -1;
	volatile int32_t x284 = -1;
	int32_t t70 = 50;

	t70 = (x281<=(x282-(x283==x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x287 = 5U;
	int32_t x288 = -15215;
	static int32_t t71 = -223;

	t71 = (x285<=(x286-(x287==x288)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x290 = UINT8_MAX;
	uint16_t x291 = 191U;
	int64_t x292 = INT64_MAX;
	volatile int32_t t72 = -4;

	t72 = (x289<=(x290-(x291==x292)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x293 = INT8_MIN;
	uint8_t x294 = UINT8_MAX;
	int8_t x295 = -28;
	static int8_t x296 = -1;
	int32_t t73 = 340004;

	t73 = (x293<=(x294-(x295==x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x298 = INT32_MAX;
	volatile uint64_t x299 = 565848495459662446LLU;
	int16_t x300 = 3;
	int32_t t74 = 27784963;

	t74 = (x297<=(x298-(x299==x300)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x301 = UINT32_MAX;
	volatile uint32_t x302 = 140878U;
	int8_t x303 = 5;
	int32_t x304 = INT32_MAX;

	t75 = (x301<=(x302-(x303==x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	volatile int64_t x306 = 3846468079789710870LL;
	uint16_t x307 = 1578U;
	int32_t t76 = 0;

	t76 = (x305<=(x306-(x307==x308)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x309 = UINT64_MAX;
	uint16_t x310 = 106U;
	uint32_t x312 = 201662U;
	int32_t t77 = -253670776;

	t77 = (x309<=(x310-(x311==x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MIN;
	static uint64_t x314 = 0LLU;
	int16_t x315 = 8073;
	uint32_t x316 = UINT32_MAX;
	volatile int32_t t78 = 86855;

	t78 = (x313<=(x314-(x315==x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x317 = INT8_MIN;
	volatile int8_t x319 = INT8_MAX;
	int16_t x320 = 34;
	int32_t t79 = 5;

	t79 = (x317<=(x318-(x319==x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MAX;
	int64_t x322 = INT64_MAX;
	int16_t x323 = -103;
	volatile int16_t x324 = INT16_MIN;

	t80 = (x321<=(x322-(x323==x324)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MIN;
	uint8_t x326 = 33U;
	int16_t x327 = INT16_MIN;
	uint64_t x328 = UINT64_MAX;
	int32_t t81 = 2309;

	t81 = (x325<=(x326-(x327==x328)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x330 = INT64_MAX;
	uint32_t x331 = 30693241U;
	static volatile uint8_t x332 = 29U;
	int32_t t82 = 98837;

	t82 = (x329<=(x330-(x331==x332)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = 4;
	uint32_t x334 = 443772U;
	int16_t x335 = -1;

	t83 = (x333<=(x334-(x335==x336)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x337 = INT32_MAX;
	int64_t x338 = INT64_MAX;
	volatile int32_t x339 = INT32_MIN;
	volatile uint64_t x340 = 1440540LLU;
	static volatile int32_t t84 = -1;

	t84 = (x337<=(x338-(x339==x340)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MIN;
	volatile uint64_t x343 = UINT64_MAX;
	uint8_t x344 = 26U;

	t85 = (x341<=(x342-(x343==x344)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 8U;
	volatile int32_t x346 = 196287057;
	int8_t x347 = -51;
	uint32_t x348 = UINT32_MAX;
	volatile int32_t t86 = 613901;

	t86 = (x345<=(x346-(x347==x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x350 = INT64_MIN;
	volatile int8_t x351 = -1;
	int32_t t87 = 3871;

	t87 = (x349<=(x350-(x351==x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -126826835043805LL;
	uint32_t x354 = 6U;
	uint64_t x355 = 5190996776233281876LLU;
	volatile int32_t t88 = 107578;

	t88 = (x353<=(x354-(x355==x356)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x357 = -3967;
	uint64_t x358 = UINT64_MAX;
	int8_t x359 = -14;
	int8_t x360 = INT8_MIN;
	volatile int32_t t89 = 560774;

	t89 = (x357<=(x358-(x359==x360)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x362 = 2693U;
	int32_t x363 = 9;
	int32_t t90 = 339;

	t90 = (x361<=(x362-(x363==x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x366 = INT32_MIN;
	volatile uint8_t x367 = 1U;
	volatile int16_t x368 = 2187;
	volatile int32_t t91 = -106483010;

	t91 = (x365<=(x366-(x367==x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x370 = -14;
	volatile int64_t x371 = -325LL;
	static uint64_t x372 = 12198338LLU;
	static int32_t t92 = 7504;

	t92 = (x369<=(x370-(x371==x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x374 = 4;
	int16_t x375 = INT16_MIN;
	static int16_t x376 = INT16_MIN;
	static int32_t t93 = -3123;

	t93 = (x373<=(x374-(x375==x376)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = UINT8_MAX;
	volatile int64_t x379 = INT64_MIN;
	int16_t x380 = INT16_MAX;
	int32_t t94 = -45781346;

	t94 = (x377<=(x378-(x379==x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = UINT8_MAX;
	int32_t x382 = INT32_MAX;
	uint8_t x383 = 2U;
	volatile int32_t t95 = -7;

	t95 = (x381<=(x382-(x383==x384)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x385 = UINT16_MAX;
	volatile int32_t x387 = 1712;
	int64_t x388 = INT64_MAX;
	int32_t t96 = 23288;

	t96 = (x385<=(x386-(x387==x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -146;
	int8_t x390 = INT8_MAX;
	int16_t x391 = INT16_MIN;
	volatile int8_t x392 = -30;

	t97 = (x389<=(x390-(x391==x392)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x394 = 1;
	uint64_t x396 = 42625093280LLU;
	volatile int32_t t98 = -20119;

	t98 = (x393<=(x394-(x395==x396)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = 28;
	static int8_t x399 = -1;
	volatile int8_t x400 = -28;
	volatile int32_t t99 = -138866;

	t99 = (x397<=(x398-(x399==x400)));

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

