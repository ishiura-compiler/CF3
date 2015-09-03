#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 40565258;
uint32_t x10 = 13758522U;
int8_t x12 = 3;
static uint8_t x14 = 118U;
int16_t x15 = -1;
int64_t x21 = -1LL;
int32_t x24 = INT32_MAX;
volatile int32_t t5 = 16436934;
uint32_t x36 = UINT32_MAX;
volatile int32_t x39 = -1;
int64_t x40 = -774328516416376LL;
volatile int16_t x41 = INT16_MAX;
uint8_t x43 = UINT8_MAX;
int64_t x46 = -1LL;
uint64_t x59 = 754LLU;
uint64_t x71 = 5974838LLU;
static volatile int16_t x78 = -1;
int32_t x79 = INT32_MAX;
volatile int32_t t17 = 4883697;
int32_t x81 = -57;
int16_t x100 = -1;
volatile int8_t x101 = -1;
uint64_t x104 = UINT64_MAX;
uint8_t x106 = 1U;
int16_t x108 = -1;
static int32_t x112 = INT32_MIN;
uint32_t x114 = 4689198U;
int32_t t25 = 1278;
int8_t x117 = -1;
uint8_t x121 = 106U;
int16_t x123 = INT16_MIN;
int16_t x126 = -1;
static int16_t x132 = -116;
uint32_t x136 = UINT32_MAX;
int32_t x137 = -121147;
int32_t t31 = 9;
int32_t t32 = -71;
volatile uint32_t x147 = 1003U;
static volatile int8_t x148 = -1;
volatile int32_t t35 = 9395996;
int64_t x160 = INT64_MIN;
int32_t x162 = INT32_MIN;
int32_t x166 = INT32_MAX;
volatile int32_t x168 = INT32_MIN;
static uint64_t x169 = 14557LLU;
int64_t x170 = INT64_MIN;
volatile uint8_t x172 = UINT8_MAX;
static volatile int32_t t43 = -4005;
volatile int32_t t44 = -14677647;
volatile int64_t x197 = -1LL;
static int32_t x201 = INT32_MIN;
int64_t x203 = INT64_MAX;
int32_t t48 = -1885;
int32_t t49 = -3860789;
static volatile int32_t t50 = -6;
int16_t x218 = INT16_MIN;
static uint64_t x225 = 11869101723LLU;
volatile int8_t x227 = -41;
int32_t x231 = 836570;
uint32_t x232 = 0U;
int16_t x235 = INT16_MIN;
int16_t x239 = -1;
int64_t x244 = INT64_MIN;
uint64_t x245 = 3766382378083681678LLU;
volatile int8_t x248 = -11;
int32_t x249 = INT32_MIN;
int8_t x250 = -22;
uint32_t x255 = 1057754940U;
uint64_t x256 = 18965383LLU;
static uint32_t x257 = 1917234U;
uint8_t x274 = 64U;
int8_t x276 = INT8_MIN;
static volatile int16_t x280 = INT16_MIN;
int8_t x282 = 5;
static uint8_t x283 = 22U;
int16_t x284 = -1;
uint64_t x287 = UINT64_MAX;
volatile uint16_t x295 = 1115U;
int32_t x301 = 505;
volatile uint64_t x302 = 574603944114LLU;
int16_t x305 = -1;
int8_t x312 = -7;
int16_t x313 = 3;
volatile int32_t t75 = -70;
int16_t x322 = -546;
int64_t x323 = -1LL;
int32_t t78 = 121330;
uint64_t x330 = 233549531542074LLU;
int32_t x332 = -1;
int16_t x338 = INT16_MIN;
static volatile int32_t x345 = 1;
int32_t t85 = -13;
uint64_t x363 = 1758604289475791LLU;
int32_t x364 = INT32_MAX;
int16_t x371 = INT16_MIN;
volatile int8_t x372 = INT8_MIN;
volatile int32_t t89 = 163609067;
int8_t x375 = INT8_MAX;
int64_t x378 = 4520179316332732988LL;
static uint64_t x380 = 69094380305364034LLU;
volatile int8_t x395 = INT8_MIN;
static volatile int8_t x399 = -30;
int64_t x405 = INT64_MIN;


void f0(void) {
	volatile int64_t x1 = INT64_MAX;
	int16_t x2 = INT16_MAX;
	volatile int32_t x3 = -114611;
	volatile int32_t x4 = INT32_MAX;

	t0 = ((x1==(x2/x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int8_t x6 = -1;
	uint64_t x7 = UINT64_MAX;
	static volatile int64_t x8 = INT64_MAX;
	volatile int32_t t1 = -2470;

	t1 = ((x5==(x6/x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MIN;
	int32_t x11 = 1;
	int32_t t2 = 4930550;

	t2 = ((x9==(x10/x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 4731379970806637791LLU;
	uint32_t x16 = 3U;
	volatile int32_t t3 = 6711;

	t3 = ((x13==(x14/x15))<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	static int16_t x18 = INT16_MAX;
	int16_t x19 = 1;
	static int8_t x20 = INT8_MIN;
	static int32_t t4 = 6349;

	t4 = ((x17==(x18/x19))<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = INT64_MAX;
	volatile uint64_t x23 = 1458160210LLU;

	t5 = ((x21==(x22/x23))<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 0U;
	int8_t x26 = 11;
	uint8_t x27 = UINT8_MAX;
	volatile int16_t x28 = INT16_MAX;
	int32_t t6 = 18985;

	t6 = ((x25==(x26/x27))<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = 119292U;
	static uint64_t x34 = 737291551804054LLU;
	static int32_t x35 = INT32_MIN;
	int32_t t7 = 13762;

	t7 = ((x33==(x34/x35))<=x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = -315;
	volatile int8_t x38 = 1;
	int32_t t8 = -1840629;

	t8 = ((x37==(x38/x39))<=x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x42 = 50U;
	int16_t x44 = -15;
	volatile int32_t t9 = 62;

	t9 = ((x41==(x42/x43))<=x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = 28860U;
	uint64_t x47 = 24475430574LLU;
	int32_t x48 = -1;
	volatile int32_t t10 = 683549989;

	t10 = ((x45==(x46/x47))<=x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = 4;
	uint16_t x50 = 2U;
	int16_t x51 = -1;
	volatile int64_t x52 = -172065677178839LL;
	static volatile int32_t t11 = -7;

	t11 = ((x49==(x50/x51))<=x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x57 = 122LLU;
	int16_t x58 = 1;
	int8_t x60 = -1;
	int32_t t12 = 583;

	t12 = ((x57==(x58/x59))<=x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = -1119;
	int32_t x62 = INT32_MAX;
	uint16_t x63 = 1441U;
	uint8_t x64 = 40U;
	static int32_t t13 = 984816815;

	t13 = ((x61==(x62/x63))<=x64);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x65 = INT16_MIN;
	uint16_t x66 = UINT16_MAX;
	uint64_t x67 = UINT64_MAX;
	int32_t x68 = -1;
	volatile int32_t t14 = 19143;

	t14 = ((x65==(x66/x67))<=x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = -1LL;
	volatile int64_t x70 = INT64_MIN;
	uint64_t x72 = 38188309375LLU;
	volatile int32_t t15 = 1919750;

	t15 = ((x69==(x70/x71))<=x72);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x73 = 64U;
	uint8_t x74 = UINT8_MAX;
	int32_t x75 = INT32_MAX;
	uint8_t x76 = 111U;
	int32_t t16 = 233510445;

	t16 = ((x73==(x74/x75))<=x76);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x77 = 838388LLU;
	int64_t x80 = INT64_MIN;

	t17 = ((x77==(x78/x79))<=x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x82 = INT32_MIN;
	int32_t x83 = INT32_MAX;
	int8_t x84 = -30;
	volatile int32_t t18 = 20;

	t18 = ((x81==(x82/x83))<=x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x89 = -230157502;
	static int64_t x90 = 8173LL;
	uint32_t x91 = 12882U;
	volatile uint16_t x92 = 5361U;
	volatile int32_t t19 = 4;

	t19 = ((x89==(x90/x91))<=x92);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x93 = 398LL;
	int8_t x94 = -6;
	static int32_t x95 = INT32_MAX;
	volatile int8_t x96 = INT8_MAX;
	static int32_t t20 = 16639639;

	t20 = ((x93==(x94/x95))<=x96);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x97 = 2866775U;
	volatile int64_t x98 = INT64_MIN;
	static int8_t x99 = INT8_MAX;
	static int32_t t21 = 594198868;

	t21 = ((x97==(x98/x99))<=x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x102 = -1LL;
	static uint8_t x103 = 12U;
	int32_t t22 = 993;

	t22 = ((x101==(x102/x103))<=x104);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = INT32_MIN;
	int32_t x107 = -1;
	static int32_t t23 = -10388417;

	t23 = ((x105==(x106/x107))<=x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x109 = INT8_MIN;
	int64_t x110 = INT64_MIN;
	static volatile int16_t x111 = INT16_MIN;
	volatile int32_t t24 = -8;

	t24 = ((x109==(x110/x111))<=x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x113 = -2622;
	static volatile int64_t x115 = 89LL;
	int8_t x116 = INT8_MAX;

	t25 = ((x113==(x114/x115))<=x116);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x118 = UINT8_MAX;
	int16_t x119 = -1;
	uint16_t x120 = 632U;
	int32_t t26 = -1488833;

	t26 = ((x117==(x118/x119))<=x120);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x122 = 60U;
	int64_t x124 = 1LL;
	static volatile int32_t t27 = -856;

	t27 = ((x121==(x122/x123))<=x124);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x125 = -1;
	int16_t x127 = -1;
	static uint16_t x128 = 101U;
	volatile int32_t t28 = 1;

	t28 = ((x125==(x126/x127))<=x128);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = INT64_MIN;
	uint32_t x130 = UINT32_MAX;
	volatile int64_t x131 = INT64_MIN;
	int32_t t29 = -9992099;

	t29 = ((x129==(x130/x131))<=x132);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x133 = INT16_MIN;
	int32_t x134 = 5706;
	int64_t x135 = -230522646118841631LL;
	int32_t t30 = -1;

	t30 = ((x133==(x134/x135))<=x136);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x138 = INT8_MAX;
	uint8_t x139 = 11U;
	uint16_t x140 = UINT16_MAX;

	t31 = ((x137==(x138/x139))<=x140);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x141 = INT32_MIN;
	uint8_t x142 = 25U;
	uint16_t x143 = 269U;
	int8_t x144 = INT8_MIN;

	t32 = ((x141==(x142/x143))<=x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x145 = 76;
	int8_t x146 = INT8_MAX;
	int32_t t33 = 32;

	t33 = ((x145==(x146/x147))<=x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x149 = INT8_MAX;
	uint8_t x150 = UINT8_MAX;
	int16_t x151 = -1;
	int16_t x152 = INT16_MAX;
	volatile int32_t t34 = 521923;

	t34 = ((x149==(x150/x151))<=x152);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x153 = -1LL;
	int32_t x154 = -32;
	volatile int64_t x155 = INT64_MAX;
	int16_t x156 = -10;

	t35 = ((x153==(x154/x155))<=x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x157 = INT8_MIN;
	static int16_t x158 = INT16_MIN;
	volatile int32_t x159 = 49159921;
	static int32_t t36 = 19;

	t36 = ((x157==(x158/x159))<=x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x161 = -1;
	volatile int32_t x163 = INT32_MIN;
	static uint8_t x164 = 4U;
	int32_t t37 = -14246;

	t37 = ((x161==(x162/x163))<=x164);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x165 = 6829U;
	volatile int64_t x167 = -1LL;
	int32_t t38 = -467772;

	t38 = ((x165==(x166/x167))<=x168);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x171 = INT64_MIN;
	int32_t t39 = 121203340;

	t39 = ((x169==(x170/x171))<=x172);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x173 = -1LL;
	int32_t x174 = 651465;
	int16_t x175 = INT16_MIN;
	int16_t x176 = INT16_MIN;
	int32_t t40 = -50218281;

	t40 = ((x173==(x174/x175))<=x176);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x177 = 0U;
	int16_t x178 = -342;
	uint8_t x179 = 14U;
	int32_t x180 = -1059731;
	int32_t t41 = -150;

	t41 = ((x177==(x178/x179))<=x180);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x181 = INT32_MAX;
	uint8_t x182 = 124U;
	volatile uint8_t x183 = 126U;
	static int64_t x184 = INT64_MIN;
	volatile int32_t t42 = -913;

	t42 = ((x181==(x182/x183))<=x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x185 = INT64_MAX;
	volatile int8_t x186 = INT8_MIN;
	int32_t x187 = INT32_MAX;
	uint64_t x188 = 123293048328119735LLU;

	t43 = ((x185==(x186/x187))<=x188);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x189 = INT16_MIN;
	int32_t x190 = -1;
	int32_t x191 = -1;
	static int16_t x192 = 0;

	t44 = ((x189==(x190/x191))<=x192);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x193 = 16835026410462LL;
	int64_t x194 = -1LL;
	int8_t x195 = INT8_MIN;
	int16_t x196 = INT16_MIN;
	volatile int32_t t45 = -29675494;

	t45 = ((x193==(x194/x195))<=x196);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x198 = 1;
	static int16_t x199 = INT16_MIN;
	static uint64_t x200 = 56990227577420LLU;
	int32_t t46 = 81;

	t46 = ((x197==(x198/x199))<=x200);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x202 = INT64_MIN;
	int8_t x204 = -1;
	static volatile int32_t t47 = 4974695;

	t47 = ((x201==(x202/x203))<=x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x205 = 244U;
	static int8_t x206 = 7;
	uint16_t x207 = 1253U;
	int16_t x208 = -1;

	t48 = ((x205==(x206/x207))<=x208);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x209 = 1371U;
	static uint16_t x210 = 2U;
	int64_t x211 = -1LL;
	int32_t x212 = -1;

	t49 = ((x209==(x210/x211))<=x212);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x213 = INT8_MIN;
	volatile uint32_t x214 = UINT32_MAX;
	int32_t x215 = INT32_MIN;
	int8_t x216 = INT8_MIN;

	t50 = ((x213==(x214/x215))<=x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x217 = INT8_MIN;
	volatile uint64_t x219 = 49LLU;
	int64_t x220 = -1LL;
	static int32_t t51 = 15079185;

	t51 = ((x217==(x218/x219))<=x220);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x221 = INT64_MIN;
	static volatile int32_t x222 = -1;
	static int16_t x223 = -5820;
	static uint32_t x224 = UINT32_MAX;
	int32_t t52 = -41399;

	t52 = ((x221==(x222/x223))<=x224);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x226 = INT32_MIN;
	uint64_t x228 = 164LLU;
	volatile int32_t t53 = -52;

	t53 = ((x225==(x226/x227))<=x228);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x229 = INT64_MAX;
	uint16_t x230 = UINT16_MAX;
	int32_t t54 = 1027692;

	t54 = ((x229==(x230/x231))<=x232);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x233 = 14LLU;
	static int64_t x234 = -250LL;
	volatile int32_t x236 = INT32_MIN;
	static volatile int32_t t55 = -39;

	t55 = ((x233==(x234/x235))<=x236);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x237 = UINT32_MAX;
	int32_t x238 = INT32_MAX;
	uint16_t x240 = 3957U;
	static int32_t t56 = -177;

	t56 = ((x237==(x238/x239))<=x240);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x241 = INT8_MAX;
	uint16_t x242 = 1607U;
	int64_t x243 = INT64_MAX;
	volatile int32_t t57 = -183710775;

	t57 = ((x241==(x242/x243))<=x244);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x246 = INT64_MAX;
	volatile int32_t x247 = INT32_MIN;
	static volatile int32_t t58 = -470;

	t58 = ((x245==(x246/x247))<=x248);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x251 = 200903623;
	static uint16_t x252 = 13963U;
	volatile int32_t t59 = -4;

	t59 = ((x249==(x250/x251))<=x252);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x253 = INT32_MIN;
	int8_t x254 = INT8_MAX;
	volatile int32_t t60 = -555900886;

	t60 = ((x253==(x254/x255))<=x256);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x258 = 6U;
	static volatile uint8_t x259 = 5U;
	uint16_t x260 = 2U;
	volatile int32_t t61 = -31603927;

	t61 = ((x257==(x258/x259))<=x260);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x261 = 1;
	int16_t x262 = 5971;
	int8_t x263 = -1;
	uint32_t x264 = 420919742U;
	volatile int32_t t62 = -248046;

	t62 = ((x261==(x262/x263))<=x264);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x265 = 1;
	static volatile int64_t x266 = -1LL;
	static int16_t x267 = -45;
	uint8_t x268 = 26U;
	volatile int32_t t63 = 433;

	t63 = ((x265==(x266/x267))<=x268);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x269 = INT16_MIN;
	static int16_t x270 = INT16_MIN;
	int64_t x271 = 1LL;
	volatile uint8_t x272 = UINT8_MAX;
	volatile int32_t t64 = 218056536;

	t64 = ((x269==(x270/x271))<=x272);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x273 = UINT16_MAX;
	int32_t x275 = -1;
	volatile int32_t t65 = -2;

	t65 = ((x273==(x274/x275))<=x276);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x277 = -1;
	int8_t x278 = INT8_MIN;
	volatile int32_t x279 = INT32_MIN;
	volatile int32_t t66 = -985;

	t66 = ((x277==(x278/x279))<=x280);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x281 = UINT32_MAX;
	static volatile int32_t t67 = -7330;

	t67 = ((x281==(x282/x283))<=x284);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x285 = INT32_MIN;
	uint64_t x286 = 1419LLU;
	uint64_t x288 = 56LLU;
	int32_t t68 = -4807;

	t68 = ((x285==(x286/x287))<=x288);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x289 = 7491326U;
	uint32_t x290 = 49068U;
	static int8_t x291 = -1;
	volatile uint64_t x292 = 22LLU;
	volatile int32_t t69 = 7332325;

	t69 = ((x289==(x290/x291))<=x292);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x293 = INT16_MIN;
	int16_t x294 = INT16_MAX;
	volatile int32_t x296 = -1;
	volatile int32_t t70 = -1;

	t70 = ((x293==(x294/x295))<=x296);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x297 = 2;
	uint64_t x298 = UINT64_MAX;
	int16_t x299 = INT16_MIN;
	static uint64_t x300 = 149525315102249512LLU;
	static volatile int32_t t71 = 16960095;

	t71 = ((x297==(x298/x299))<=x300);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x303 = -1LL;
	int64_t x304 = INT64_MIN;
	volatile int32_t t72 = 97;

	t72 = ((x301==(x302/x303))<=x304);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x306 = UINT32_MAX;
	volatile int8_t x307 = INT8_MIN;
	int8_t x308 = INT8_MIN;
	int32_t t73 = 0;

	t73 = ((x305==(x306/x307))<=x308);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x309 = INT64_MIN;
	uint32_t x310 = UINT32_MAX;
	int16_t x311 = INT16_MIN;
	int32_t t74 = 7962159;

	t74 = ((x309==(x310/x311))<=x312);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x314 = INT16_MAX;
	int64_t x315 = 15399851579857LL;
	int32_t x316 = -6;

	t75 = ((x313==(x314/x315))<=x316);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x317 = 19136U;
	int16_t x318 = -1;
	int8_t x319 = 22;
	static volatile int8_t x320 = INT8_MAX;
	volatile int32_t t76 = 119600158;

	t76 = ((x317==(x318/x319))<=x320);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x321 = INT16_MAX;
	int16_t x324 = -39;
	volatile int32_t t77 = -11;

	t77 = ((x321==(x322/x323))<=x324);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x325 = -29;
	volatile int16_t x326 = INT16_MIN;
	int8_t x327 = 15;
	int16_t x328 = 13;

	t78 = ((x325==(x326/x327))<=x328);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x329 = 10;
	static int8_t x331 = INT8_MIN;
	volatile int32_t t79 = -64815850;

	t79 = ((x329==(x330/x331))<=x332);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x333 = -6836475LL;
	uint64_t x334 = 62290402403407447LLU;
	int16_t x335 = INT16_MIN;
	int16_t x336 = -14835;
	int32_t t80 = -1705;

	t80 = ((x333==(x334/x335))<=x336);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x337 = INT32_MIN;
	int8_t x339 = INT8_MAX;
	int16_t x340 = INT16_MIN;
	volatile int32_t t81 = 15;

	t81 = ((x337==(x338/x339))<=x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x341 = -13099952812984LL;
	uint8_t x342 = 16U;
	int64_t x343 = 32968582LL;
	volatile int64_t x344 = INT64_MAX;
	int32_t t82 = -4251273;

	t82 = ((x341==(x342/x343))<=x344);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x346 = -1;
	int64_t x347 = INT64_MIN;
	int64_t x348 = 44LL;
	int32_t t83 = -28075124;

	t83 = ((x345==(x346/x347))<=x348);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x349 = INT64_MIN;
	uint16_t x350 = UINT16_MAX;
	int8_t x351 = INT8_MAX;
	uint16_t x352 = UINT16_MAX;
	volatile int32_t t84 = 700;

	t84 = ((x349==(x350/x351))<=x352);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x353 = -1;
	static volatile int32_t x354 = INT32_MIN;
	int32_t x355 = -126462;
	static int64_t x356 = INT64_MAX;

	t85 = ((x353==(x354/x355))<=x356);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x357 = 2;
	int16_t x358 = INT16_MAX;
	uint8_t x359 = UINT8_MAX;
	static int8_t x360 = -1;
	volatile int32_t t86 = -180;

	t86 = ((x357==(x358/x359))<=x360);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x361 = INT16_MIN;
	static volatile int64_t x362 = INT64_MIN;
	int32_t t87 = 38;

	t87 = ((x361==(x362/x363))<=x364);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x365 = 2U;
	int32_t x366 = INT32_MAX;
	volatile uint32_t x367 = 188U;
	int16_t x368 = -22;
	volatile int32_t t88 = -13195;

	t88 = ((x365==(x366/x367))<=x368);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x369 = 451U;
	int64_t x370 = 4507791670769920199LL;

	t89 = ((x369==(x370/x371))<=x372);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x373 = 198913419286194253LLU;
	uint8_t x374 = 36U;
	int8_t x376 = 28;
	int32_t t90 = 3;

	t90 = ((x373==(x374/x375))<=x376);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x377 = UINT16_MAX;
	int64_t x379 = INT64_MAX;
	static int32_t t91 = -36278683;

	t91 = ((x377==(x378/x379))<=x380);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x381 = UINT32_MAX;
	int16_t x382 = INT16_MIN;
	uint16_t x383 = 1U;
	int64_t x384 = -3557449LL;
	static int32_t t92 = 39001453;

	t92 = ((x381==(x382/x383))<=x384);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x389 = INT32_MIN;
	uint8_t x390 = UINT8_MAX;
	static int16_t x391 = -47;
	volatile int32_t x392 = -44661;
	int32_t t93 = 184315967;

	t93 = ((x389==(x390/x391))<=x392);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x393 = INT64_MAX;
	uint16_t x394 = 2U;
	int8_t x396 = INT8_MAX;
	static volatile int32_t t94 = -257977;

	t94 = ((x393==(x394/x395))<=x396);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x397 = UINT16_MAX;
	volatile int32_t x398 = -14784857;
	uint8_t x400 = 1U;
	int32_t t95 = -9056;

	t95 = ((x397==(x398/x399))<=x400);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x401 = INT8_MIN;
	volatile int8_t x402 = INT8_MIN;
	int8_t x403 = INT8_MAX;
	static int64_t x404 = INT64_MIN;
	int32_t t96 = -74887983;

	t96 = ((x401==(x402/x403))<=x404);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint32_t x406 = UINT32_MAX;
	int64_t x407 = INT64_MIN;
	uint8_t x408 = 22U;
	int32_t t97 = 26747;

	t97 = ((x405==(x406/x407))<=x408);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x409 = 7U;
	int64_t x410 = INT64_MIN;
	uint8_t x411 = UINT8_MAX;
	uint16_t x412 = UINT16_MAX;
	int32_t t98 = -1230;

	t98 = ((x409==(x410/x411))<=x412);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x413 = INT64_MAX;
	int16_t x414 = -1;
	uint8_t x415 = 14U;
	int16_t x416 = INT16_MIN;
	static volatile int32_t t99 = 118738;

	t99 = ((x413==(x414/x415))<=x416);

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

