#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x3 = 2U;
int64_t x8 = 9386461LL;
int64_t t1 = -121813563585081LL;
int64_t x9 = -45849LL;
uint64_t x12 = 0LLU;
uint32_t x15 = UINT32_MAX;
uint64_t x18 = 48857439431765LLU;
int8_t x20 = -1;
uint8_t x23 = UINT8_MAX;
int32_t t6 = INT32_MIN;
int8_t x44 = 17;
volatile int32_t t10 = -9104;
volatile uint32_t x49 = 1518261U;
int64_t x76 = INT64_MAX;
int64_t x77 = -1LL;
static int64_t x78 = INT64_MIN;
static int64_t x80 = INT64_MAX;
int64_t t19 = INT64_MAX;
static int32_t x83 = INT32_MIN;
int32_t t21 = 699977;
int32_t t22 = 24966981;
volatile int32_t t23 = -7360611;
int16_t x100 = INT16_MIN;
int64_t x107 = INT64_MIN;
uint64_t x108 = 5LLU;
volatile uint64_t x114 = 1694470LLU;
int8_t x119 = INT8_MIN;
uint8_t x120 = 113U;
uint64_t x121 = UINT64_MAX;
volatile int64_t x122 = -10LL;
int8_t x124 = INT8_MIN;
int32_t x126 = INT32_MIN;
volatile int32_t t32 = -1304;
static int32_t x133 = 582;
uint8_t x140 = UINT8_MAX;
volatile int32_t t34 = -927311766;
int32_t x148 = -1;
int32_t x156 = INT32_MIN;
int64_t x157 = 100105623654LL;
static int64_t x159 = INT64_MIN;
static int64_t x168 = INT64_MIN;
int32_t t42 = 469918184;
uint16_t x176 = 19380U;
uint32_t x181 = UINT32_MAX;
int16_t x183 = INT16_MAX;
int64_t x190 = 1356684320798LL;
volatile int8_t x192 = -2;
int32_t t47 = 41011366;
volatile uint32_t x194 = UINT32_MAX;
int32_t x205 = -874440345;
int32_t x209 = -750833267;
volatile int32_t t52 = 1734896;
volatile uint16_t x213 = UINT16_MAX;
volatile int64_t x217 = -555LL;
int32_t x220 = INT32_MIN;
static int64_t t55 = 25513449LL;
int64_t x236 = INT64_MAX;
volatile uint64_t x246 = 12560LLU;
static volatile int64_t x253 = 609973086LL;
int32_t x257 = INT32_MIN;
uint16_t x258 = 6973U;
uint16_t x264 = 2U;
static volatile int32_t t66 = -251;
volatile uint8_t x269 = 0U;
static int16_t x271 = INT16_MIN;
int16_t x272 = INT16_MIN;
static int32_t t67 = -1993226;
int16_t x276 = INT16_MAX;
static uint32_t x277 = 2101136U;
uint32_t t69 = UINT32_MAX;
uint8_t x281 = 84U;
static int32_t t70 = -22426;
volatile int8_t x285 = INT8_MIN;
volatile uint64_t x295 = UINT64_MAX;
volatile int16_t x303 = 730;
static uint64_t t75 = 3021940079703177725LLU;
uint8_t x305 = 1U;
volatile int16_t x307 = INT16_MIN;
static volatile uint64_t x309 = 1659220LLU;
static int8_t x313 = INT8_MIN;
uint16_t x318 = 142U;
uint32_t x320 = 130848123U;
uint32_t x326 = UINT32_MAX;
uint64_t x328 = 32373993140521LLU;
uint64_t x329 = UINT64_MAX;
volatile int64_t x340 = 3261848320382232112LL;
static volatile uint8_t x346 = 24U;
static volatile int16_t x352 = 0;
static int16_t x354 = INT16_MAX;
static uint64_t t88 = UINT64_MAX;
volatile int8_t x359 = -6;
static int16_t x360 = INT16_MIN;
volatile int32_t t89 = 1;
static uint16_t x363 = 1811U;
int16_t x366 = INT16_MIN;
uint64_t x368 = 14869881LLU;
static uint16_t x370 = UINT16_MAX;
int32_t t92 = 1048370;
static int8_t x381 = -1;
static uint64_t x382 = UINT64_MAX;
static int64_t x383 = 70030922576517140LL;
uint32_t x384 = 228903439U;
int64_t x399 = -1357343077118LL;


void f0(void) {
	static int64_t x1 = INT64_MIN;
	static uint32_t x2 = 298U;
	int32_t x4 = INT32_MAX;
	int64_t t0 = 323LL;

	t0 = ((x1&(x2==x3))^x4);

	if (t0 != 2147483647LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 16544U;
	int32_t x6 = -1;
	uint64_t x7 = UINT64_MAX;

	t1 = ((x5&(x6==x7))^x8);

	if (t1 != 9386461LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x10 = 8887U;
	volatile int16_t x11 = INT16_MIN;
	uint64_t t2 = 3810384754LLU;

	t2 = ((x9&(x10==x11))^x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = INT32_MAX;
	volatile uint32_t x14 = 1034548585U;
	uint8_t x16 = 32U;
	volatile int32_t t3 = 16190;

	t3 = ((x13&(x14==x15))^x16);

	if (t3 != 32) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 2941121703047LLU;
	static uint64_t x19 = UINT64_MAX;
	uint64_t t4 = UINT64_MAX;

	t4 = ((x17&(x18==x19))^x20);

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = INT8_MIN;
	int32_t x22 = INT32_MAX;
	uint32_t x24 = 237362U;
	uint32_t t5 = 10U;

	t5 = ((x21&(x22==x23))^x24);

	if (t5 != 237362U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 41;
	int8_t x26 = INT8_MIN;
	static int16_t x27 = -1;
	static int32_t x28 = INT32_MIN;

	t6 = ((x25&(x26==x27))^x28);

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x29 = 95U;
	int32_t x30 = -38650467;
	int32_t x31 = 1140;
	static int32_t x32 = INT32_MAX;
	volatile int32_t t7 = INT32_MAX;

	t7 = ((x29&(x30==x31))^x32);

	if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = -2581571;
	static volatile uint8_t x34 = UINT8_MAX;
	int8_t x35 = -1;
	int32_t x36 = 457557;
	volatile int32_t t8 = -11866;

	t8 = ((x33&(x34==x35))^x36);

	if (t8 != 457557) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 1;
	uint64_t x38 = UINT64_MAX;
	static int32_t x39 = INT32_MIN;
	int32_t x40 = INT32_MIN;
	static int32_t t9 = INT32_MIN;

	t9 = ((x37&(x38==x39))^x40);

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x41 = UINT16_MAX;
	volatile uint32_t x42 = 114574U;
	int64_t x43 = -6955521030032160LL;

	t10 = ((x41&(x42==x43))^x44);

	if (t10 != 17) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x45 = UINT16_MAX;
	volatile uint32_t x46 = 181200U;
	int32_t x47 = INT32_MIN;
	static int64_t x48 = -1LL;
	volatile int64_t t11 = 4LL;

	t11 = ((x45&(x46==x47))^x48);

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = -272679LL;
	int16_t x51 = -1007;
	static volatile int32_t x52 = INT32_MIN;
	uint32_t t12 = 27U;

	t12 = ((x49&(x50==x51))^x52);

	if (t12 != 2147483648U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x53 = 21U;
	int32_t x54 = 2594;
	int32_t x55 = INT32_MIN;
	static int16_t x56 = INT16_MAX;
	volatile int32_t t13 = 2;

	t13 = ((x53&(x54==x55))^x56);

	if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	uint16_t x58 = 1367U;
	uint16_t x59 = 22059U;
	uint64_t x60 = 13LLU;
	uint64_t t14 = 18430765LLU;

	t14 = ((x57&(x58==x59))^x60);

	if (t14 != 13LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint32_t x61 = UINT32_MAX;
	int16_t x62 = INT16_MAX;
	static int16_t x63 = 3;
	static int16_t x64 = INT16_MIN;
	uint32_t t15 = 23541258U;

	t15 = ((x61&(x62==x63))^x64);

	if (t15 != 4294934528U) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = -8;
	int32_t x66 = INT32_MIN;
	int32_t x67 = INT32_MIN;
	int64_t x68 = INT64_MIN;
	volatile int64_t t16 = INT64_MIN;

	t16 = ((x65&(x66==x67))^x68);

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x69 = 35U;
	uint16_t x70 = 18U;
	volatile int16_t x71 = 13;
	int16_t x72 = INT16_MIN;
	volatile int32_t t17 = 107;

	t17 = ((x69&(x70==x71))^x72);

	if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	uint32_t x74 = 1U;
	int8_t x75 = -1;
	int64_t t18 = INT64_MAX;

	t18 = ((x73&(x74==x75))^x76);

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x79 = 0U;

	t19 = ((x77&(x78==x79))^x80);

	if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MAX;
	uint32_t x82 = 48726270U;
	int32_t x84 = -191;
	int64_t t20 = 1459994637LL;

	t20 = ((x81&(x82==x83))^x84);

	if (t20 != -191LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = 3404;
	int16_t x86 = 789;
	int16_t x87 = 0;
	static uint8_t x88 = UINT8_MAX;

	t21 = ((x85&(x86==x87))^x88);

	if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x89 = -1;
	int64_t x90 = -1LL;
	int16_t x91 = INT16_MIN;
	uint16_t x92 = UINT16_MAX;

	t22 = ((x89&(x90==x91))^x92);

	if (t22 != 65535) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 37U;
	uint16_t x94 = 5086U;
	uint32_t x95 = 220011U;
	int16_t x96 = INT16_MAX;

	t23 = ((x93&(x94==x95))^x96);

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -16773012216LL;
	static volatile int16_t x98 = INT16_MIN;
	volatile int64_t x99 = -1947LL;
	static int64_t t24 = -25771795LL;

	t24 = ((x97&(x98==x99))^x100);

	if (t24 != -32768LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -1LL;
	int64_t x102 = 4480671905496676LL;
	static volatile int8_t x103 = INT8_MIN;
	volatile int8_t x104 = 0;
	volatile int64_t t25 = -213936194531596308LL;

	t25 = ((x101&(x102==x103))^x104);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -1LL;
	int32_t x106 = -1;
	volatile uint64_t t26 = 3967279744268104LLU;

	t26 = ((x105&(x106==x107))^x108);

	if (t26 != 5LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	static int64_t x110 = INT64_MIN;
	uint64_t x111 = 12789859LLU;
	int64_t x112 = INT64_MAX;
	volatile int64_t t27 = INT64_MAX;

	t27 = ((x109&(x110==x111))^x112);

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	int16_t x115 = INT16_MIN;
	static uint64_t x116 = 69343LLU;
	uint64_t t28 = 7621636946LLU;

	t28 = ((x113&(x114==x115))^x116);

	if (t28 != 69343LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MAX;
	int16_t x118 = -1;
	int64_t t29 = 1024867LL;

	t29 = ((x117&(x118==x119))^x120);

	if (t29 != 113LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x123 = 253185U;
	volatile uint64_t t30 = 474473411039932LLU;

	t30 = ((x121&(x122==x123))^x124);

	if (t30 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -1;
	uint8_t x127 = 16U;
	static int64_t x128 = -1LL;
	static int64_t t31 = 101454022294LL;

	t31 = ((x125&(x126==x127))^x128);

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = 3U;
	uint64_t x130 = 4151636685484LLU;
	static uint8_t x131 = 121U;
	uint16_t x132 = UINT16_MAX;

	t32 = ((x129&(x130==x131))^x132);

	if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x134 = 52LLU;
	uint64_t x135 = UINT64_MAX;
	volatile int64_t x136 = -1LL;
	volatile int64_t t33 = -101334LL;

	t33 = ((x133&(x134==x135))^x136);

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MIN;
	int8_t x138 = INT8_MIN;
	int32_t x139 = INT32_MAX;

	t34 = ((x137&(x138==x139))^x140);

	if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = -1LL;
	static int16_t x142 = INT16_MIN;
	uint16_t x143 = UINT16_MAX;
	int64_t x144 = -1LL;
	volatile int64_t t35 = 1547611065037752669LL;

	t35 = ((x141&(x142==x143))^x144);

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	int32_t x146 = 1;
	int32_t x147 = INT32_MIN;
	volatile int32_t t36 = -16690;

	t36 = ((x145&(x146==x147))^x148);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = UINT32_MAX;
	int64_t x150 = INT64_MIN;
	static int32_t x151 = INT32_MIN;
	static int32_t x152 = -1;
	static volatile uint32_t t37 = UINT32_MAX;

	t37 = ((x149&(x150==x151))^x152);

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	int32_t x154 = -1;
	volatile int64_t x155 = -707921781LL;
	int32_t t38 = INT32_MIN;

	t38 = ((x153&(x154==x155))^x156);

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x158 = UINT32_MAX;
	int64_t x160 = -7923218362LL;
	volatile int64_t t39 = -57417577728LL;

	t39 = ((x157&(x158==x159))^x160);

	if (t39 != -7923218362LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x161 = INT16_MIN;
	uint8_t x162 = UINT8_MAX;
	uint16_t x163 = 1U;
	volatile int8_t x164 = INT8_MIN;
	volatile int32_t t40 = 178;

	t40 = ((x161&(x162==x163))^x164);

	if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	static int8_t x166 = INT8_MAX;
	static int64_t x167 = INT64_MIN;
	volatile int64_t t41 = INT64_MIN;

	t41 = ((x165&(x166==x167))^x168);

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x169 = 83U;
	int8_t x170 = 0;
	static int16_t x171 = -1;
	int8_t x172 = 12;

	t42 = ((x169&(x170==x171))^x172);

	if (t42 != 12) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x173 = UINT64_MAX;
	int16_t x174 = -1;
	uint64_t x175 = 2557182905LLU;
	volatile uint64_t t43 = 275377662015255475LLU;

	t43 = ((x173&(x174==x175))^x176);

	if (t43 != 19380LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = UINT8_MAX;
	int64_t x178 = -1LL;
	int32_t x179 = 14;
	static int32_t x180 = INT32_MAX;
	int32_t t44 = INT32_MAX;

	t44 = ((x177&(x178==x179))^x180);

	if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x182 = 65U;
	int16_t x184 = INT16_MAX;
	static uint32_t t45 = 161982U;

	t45 = ((x181&(x182==x183))^x184);

	if (t45 != 32767U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	static int64_t x186 = INT64_MIN;
	int8_t x187 = -1;
	volatile uint32_t x188 = 456U;
	uint32_t t46 = 82U;

	t46 = ((x185&(x186==x187))^x188);

	if (t46 != 456U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MAX;
	uint8_t x191 = 4U;

	t47 = ((x189&(x190==x191))^x192);

	if (t47 != -2) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MIN;
	uint64_t x195 = 120602863417998LLU;
	uint16_t x196 = 2U;
	volatile int32_t t48 = 193;

	t48 = ((x193&(x194==x195))^x196);

	if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x197 = -1;
	int8_t x198 = 0;
	int16_t x199 = -3909;
	int8_t x200 = -4;
	int32_t t49 = 1;

	t49 = ((x197&(x198==x199))^x200);

	if (t49 != -4) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x201 = 1832U;
	static int8_t x202 = 10;
	volatile int8_t x203 = 4;
	uint8_t x204 = UINT8_MAX;
	volatile int32_t t50 = -114235;

	t50 = ((x201&(x202==x203))^x204);

	if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x206 = INT16_MIN;
	int8_t x207 = INT8_MIN;
	int8_t x208 = -1;
	volatile int32_t t51 = -13548768;

	t51 = ((x205&(x206==x207))^x208);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x210 = 28904U;
	int32_t x211 = 627905191;
	uint16_t x212 = 78U;

	t52 = ((x209&(x210==x211))^x212);

	if (t52 != 78) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x214 = -1;
	uint16_t x215 = UINT16_MAX;
	volatile int64_t x216 = -1LL;
	static volatile int64_t t53 = -6LL;

	t53 = ((x213&(x214==x215))^x216);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x218 = 10743508U;
	int8_t x219 = 1;
	volatile int64_t t54 = 14334639978729909LL;

	t54 = ((x217&(x218==x219))^x220);

	if (t54 != -2147483648LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = UINT32_MAX;
	volatile int32_t x222 = INT32_MIN;
	static uint32_t x223 = 6086U;
	static int64_t x224 = -1LL;

	t55 = ((x221&(x222==x223))^x224);

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x225 = -1;
	int8_t x226 = INT8_MIN;
	int8_t x227 = -1;
	int32_t x228 = -1017872705;
	volatile int32_t t56 = -560;

	t56 = ((x225&(x226==x227))^x228);

	if (t56 != -1017872705) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 40U;
	uint32_t x230 = UINT32_MAX;
	int32_t x231 = 1;
	int32_t x232 = INT32_MAX;
	static int32_t t57 = INT32_MAX;

	t57 = ((x229&(x230==x231))^x232);

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x233 = INT32_MIN;
	int16_t x234 = INT16_MAX;
	int32_t x235 = -1;
	static volatile int64_t t58 = INT64_MAX;

	t58 = ((x233&(x234==x235))^x236);

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x237 = INT64_MAX;
	volatile int64_t x238 = INT64_MIN;
	static int16_t x239 = -943;
	int32_t x240 = -1;
	volatile int64_t t59 = -146779256563LL;

	t59 = ((x237&(x238==x239))^x240);

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x241 = INT64_MIN;
	static int16_t x242 = -11;
	int32_t x243 = INT32_MAX;
	int32_t x244 = INT32_MAX;
	int64_t t60 = 757456LL;

	t60 = ((x241&(x242==x243))^x244);

	if (t60 != 2147483647LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x245 = 10U;
	uint32_t x247 = UINT32_MAX;
	volatile uint32_t x248 = 38U;
	uint32_t t61 = 24892683U;

	t61 = ((x245&(x246==x247))^x248);

	if (t61 != 38U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MIN;
	int64_t x250 = -4951078966134LL;
	int64_t x251 = 2LL;
	static int8_t x252 = INT8_MIN;
	volatile int32_t t62 = -437956781;

	t62 = ((x249&(x250==x251))^x252);

	if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint8_t x254 = 73U;
	uint64_t x255 = UINT64_MAX;
	uint8_t x256 = UINT8_MAX;
	volatile int64_t t63 = 335563787646144LL;

	t63 = ((x253&(x254==x255))^x256);

	if (t63 != 255LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x259 = 35;
	static uint32_t x260 = UINT32_MAX;
	uint32_t t64 = UINT32_MAX;

	t64 = ((x257&(x258==x259))^x260);

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = INT64_MIN;
	int32_t x262 = INT32_MIN;
	int16_t x263 = -1;
	volatile int64_t t65 = 638033LL;

	t65 = ((x261&(x262==x263))^x264);

	if (t65 != 2LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x265 = INT16_MIN;
	volatile int64_t x266 = -1LL;
	int8_t x267 = INT8_MIN;
	volatile int8_t x268 = INT8_MAX;

	t66 = ((x265&(x266==x267))^x268);

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x270 = -179;

	t67 = ((x269&(x270==x271))^x272);

	if (t67 != -32768) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x273 = 0U;
	static int16_t x274 = INT16_MIN;
	int16_t x275 = -1;
	volatile uint32_t t68 = 137056973U;

	t68 = ((x273&(x274==x275))^x276);

	if (t68 != 32767U) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x278 = -1;
	static int8_t x279 = -1;
	int16_t x280 = -1;

	t69 = ((x277&(x278==x279))^x280);

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x282 = -57;
	uint32_t x283 = 5146573U;
	int32_t x284 = -16996;

	t70 = ((x281&(x282==x283))^x284);

	if (t70 != -16996) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x286 = -1;
	volatile uint32_t x287 = 372U;
	int64_t x288 = -51831768LL;
	static int64_t t71 = 576732890LL;

	t71 = ((x285&(x286==x287))^x288);

	if (t71 != -51831768LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x289 = INT32_MIN;
	static uint16_t x290 = UINT16_MAX;
	int64_t x291 = -1LL;
	int16_t x292 = 2;
	int32_t t72 = -4042416;

	t72 = ((x289&(x290==x291))^x292);

	if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = UINT8_MAX;
	volatile int64_t x294 = -67877837078090LL;
	int8_t x296 = -5;
	int32_t t73 = -641406398;

	t73 = ((x293&(x294==x295))^x296);

	if (t73 != -5) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = 0;
	int16_t x298 = -13176;
	int16_t x299 = -1;
	uint16_t x300 = UINT16_MAX;
	int32_t t74 = 14;

	t74 = ((x297&(x298==x299))^x300);

	if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = UINT64_MAX;
	uint32_t x302 = 178668697U;
	int8_t x304 = INT8_MIN;

	t75 = ((x301&(x302==x303))^x304);

	if (t75 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x306 = INT8_MIN;
	static int16_t x308 = -10;
	static int32_t t76 = -37;

	t76 = ((x305&(x306==x307))^x308);

	if (t76 != -10) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x310 = -428;
	uint32_t x311 = 74150892U;
	uint16_t x312 = 13U;
	uint64_t t77 = 1733344131719LLU;

	t77 = ((x309&(x310==x311))^x312);

	if (t77 != 13LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x314 = 14446549953LLU;
	int8_t x315 = INT8_MIN;
	int32_t x316 = -547279729;
	static volatile int32_t t78 = 38832;

	t78 = ((x313&(x314==x315))^x316);

	if (t78 != -547279729) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x317 = UINT64_MAX;
	uint64_t x319 = 2783786LLU;
	volatile uint64_t t79 = 372931804032868679LLU;

	t79 = ((x317&(x318==x319))^x320);

	if (t79 != 130848123LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MAX;
	static uint32_t x322 = 298918U;
	static uint8_t x323 = UINT8_MAX;
	int8_t x324 = 1;
	int32_t t80 = 463309083;

	t80 = ((x321&(x322==x323))^x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x325 = UINT64_MAX;
	uint32_t x327 = 1667002U;
	uint64_t t81 = 4717497133522565493LLU;

	t81 = ((x325&(x326==x327))^x328);

	if (t81 != 32373993140521LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x330 = UINT8_MAX;
	uint8_t x331 = 20U;
	int16_t x332 = -7;
	uint64_t t82 = 294781055096LLU;

	t82 = ((x329&(x330==x331))^x332);

	if (t82 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MIN;
	int8_t x334 = INT8_MAX;
	static uint8_t x335 = 5U;
	int32_t x336 = 55931641;
	static volatile int32_t t83 = 76508651;

	t83 = ((x333&(x334==x335))^x336);

	if (t83 != 55931641) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = -1;
	int8_t x338 = INT8_MAX;
	int8_t x339 = INT8_MIN;
	volatile int64_t t84 = 259540582468LL;

	t84 = ((x337&(x338==x339))^x340);

	if (t84 != 3261848320382232112LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = -1;
	int8_t x342 = -1;
	uint32_t x343 = UINT32_MAX;
	static int8_t x344 = INT8_MIN;
	volatile int32_t t85 = -21;

	t85 = ((x341&(x342==x343))^x344);

	if (t85 != -127) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 25858104378928425LLU;
	int32_t x347 = -1;
	static int16_t x348 = -3743;
	static uint64_t t86 = 7845746785LLU;

	t86 = ((x345&(x346==x347))^x348);

	if (t86 != 18446744073709547873LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x349 = -591947560808LL;
	volatile int16_t x350 = INT16_MIN;
	int8_t x351 = -1;
	volatile int64_t t87 = 30622337LL;

	t87 = ((x349&(x350==x351))^x352);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;
	int8_t x355 = INT8_MAX;
	uint64_t x356 = UINT64_MAX;

	t88 = ((x353&(x354==x355))^x356);

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MAX;
	uint16_t x358 = 44U;

	t89 = ((x357&(x358==x359))^x360);

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 12748U;
	uint32_t x362 = 55357U;
	int64_t x364 = INT64_MIN;
	volatile int64_t t90 = INT64_MIN;

	t90 = ((x361&(x362==x363))^x364);

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -1LL;
	uint64_t x367 = 29905085374692LLU;
	uint64_t t91 = 1726995LLU;

	t91 = ((x365&(x366==x367))^x368);

	if (t91 != 14869881LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x369 = 30998U;
	int8_t x371 = INT8_MIN;
	int32_t x372 = 114932095;

	t92 = ((x369&(x370==x371))^x372);

	if (t92 != 114932095) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -1416458;
	int16_t x374 = INT16_MIN;
	int8_t x375 = -1;
	int8_t x376 = INT8_MIN;
	int32_t t93 = -8;

	t93 = ((x373&(x374==x375))^x376);

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x377 = -1;
	static uint16_t x378 = 19582U;
	uint64_t x379 = 247041093402770LLU;
	volatile uint64_t x380 = UINT64_MAX;
	uint64_t t94 = UINT64_MAX;

	t94 = ((x377&(x378==x379))^x380);

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t t95 = 3608U;

	t95 = ((x381&(x382==x383))^x384);

	if (t95 != 228903439U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 3676236890712531933LLU;
	int8_t x386 = INT8_MAX;
	int32_t x387 = -1;
	int32_t x388 = -1;
	static uint64_t t96 = UINT64_MAX;

	t96 = ((x385&(x386==x387))^x388);

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x389 = 32225820342856473LLU;
	uint32_t x390 = 29533218U;
	volatile int8_t x391 = -13;
	static int8_t x392 = -38;
	volatile uint64_t t97 = 122404LLU;

	t97 = ((x389&(x390==x391))^x392);

	if (t97 != 18446744073709551578LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = UINT64_MAX;
	volatile int64_t x394 = INT64_MAX;
	int16_t x395 = -4057;
	int32_t x396 = INT32_MIN;
	volatile uint64_t t98 = 30LLU;

	t98 = ((x393&(x394==x395))^x396);

	if (t98 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MAX;
	int32_t x398 = INT32_MIN;
	volatile int32_t x400 = INT32_MIN;
	volatile int32_t t99 = INT32_MIN;

	t99 = ((x397&(x398==x399))^x400);

	if (t99 != INT32_MIN) { NG(); } else { ; }
	
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

