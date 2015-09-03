#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t x8 = 1918U;
int32_t x11 = 1007;
static int64_t x15 = -75521217604763LL;
volatile uint32_t t5 = 315223186U;
int8_t x25 = INT8_MIN;
int32_t x26 = -1044852;
int8_t x29 = 4;
int64_t x32 = -1LL;
static int32_t x33 = INT32_MIN;
static int64_t x34 = INT64_MIN;
static int16_t x36 = -5223;
volatile int8_t x37 = INT8_MIN;
uint64_t x42 = UINT64_MAX;
int8_t x49 = INT8_MAX;
volatile uint64_t x62 = 1071032393780556400LLU;
static int8_t x67 = -4;
int32_t x75 = INT32_MIN;
volatile uint64_t t18 = 17125761803176071LLU;
static volatile int32_t x77 = INT32_MIN;
int64_t x92 = 114LL;
int16_t x94 = INT16_MIN;
int32_t x120 = INT32_MIN;
int32_t x122 = -475673;
uint8_t x123 = 58U;
volatile uint64_t t30 = 1LLU;
volatile int8_t x125 = INT8_MAX;
static int64_t x127 = -1LL;
int16_t x133 = INT16_MAX;
volatile uint16_t x135 = 3U;
volatile int32_t t32 = -110;
int8_t x138 = INT8_MAX;
int16_t x140 = INT16_MIN;
static uint32_t x141 = 1391140209U;
int8_t x144 = INT8_MIN;
int8_t x149 = -1;
int64_t x156 = 1552445668LL;
int8_t x163 = -21;
static uint32_t x168 = 137U;
uint16_t x180 = 36U;
volatile int8_t x191 = INT8_MAX;
volatile int16_t x192 = INT16_MAX;
volatile uint64_t x197 = 13LLU;
int32_t x199 = -919632526;
volatile uint8_t x201 = UINT8_MAX;
int8_t x208 = 5;
int16_t x212 = INT16_MIN;
uint16_t x213 = 25586U;
int16_t x214 = -1;
uint32_t x215 = 844U;
int8_t x225 = -1;
static volatile uint64_t t55 = 236LLU;
int32_t x231 = -1;
uint32_t x235 = 2369754U;
int8_t x240 = 1;
int8_t x253 = 20;
uint16_t x258 = 0U;
volatile int64_t x259 = 137002LL;
volatile int64_t t63 = 21342LL;
uint8_t x267 = 34U;
int32_t t65 = -142402;
uint64_t x269 = 107643051096322LLU;
static volatile uint64_t t67 = 5946101358931LLU;
uint64_t x280 = UINT64_MAX;
uint32_t x293 = UINT32_MAX;
int64_t x302 = INT64_MIN;
int32_t x308 = 998341;
volatile int32_t t75 = -154;
uint32_t x309 = 3U;
volatile int64_t t76 = INT64_MIN;
static uint64_t x325 = 2401526LLU;
volatile int16_t x329 = -1;
uint16_t x337 = UINT16_MAX;
static volatile int64_t t83 = 942213654182259LL;
int8_t x342 = INT8_MIN;
volatile uint32_t t86 = 215888734U;
int32_t x369 = INT32_MIN;
int64_t x370 = -1LL;
uint16_t x389 = 624U;
int16_t x390 = INT16_MIN;
int8_t x396 = -1;
uint64_t x399 = 1830LLU;
volatile int64_t x403 = 394169254916313251LL;
volatile int32_t x406 = INT32_MAX;


void f0(void) {
	uint8_t x1 = 58U;
	int16_t x2 = INT16_MIN;
	volatile int64_t x3 = 1011LL;
	int8_t x4 = -1;
	int64_t t0 = 23LL;

	t0 = (((x1==x2)/x3)^x4);

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = 1145482778U;
	uint8_t x6 = 67U;
	int32_t x7 = 1000;
	volatile uint32_t t1 = 5634087U;

	t1 = (((x5==x6)/x7)^x8);

	if (t1 != 1918U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	int32_t x10 = INT32_MAX;
	static int32_t x12 = -1;
	int32_t t2 = -794954;

	t2 = (((x9==x10)/x11)^x12);

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -2;
	uint64_t x14 = 72774821410430796LLU;
	int64_t x16 = 285849082195824LL;
	volatile int64_t t3 = -98806LL;

	t3 = (((x13==x14)/x15)^x16);

	if (t3 != 285849082195824LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = 1;
	int16_t x18 = 7407;
	volatile int64_t x19 = INT64_MIN;
	int16_t x20 = -1;
	int64_t t4 = 1471566403802LL;

	t4 = (((x17==x18)/x19)^x20);

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	uint8_t x22 = 3U;
	int16_t x23 = INT16_MAX;
	static uint32_t x24 = 348605909U;

	t5 = (((x21==x22)/x23)^x24);

	if (t5 != 348605909U) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x27 = UINT32_MAX;
	volatile int64_t x28 = INT64_MIN;
	int64_t t6 = INT64_MIN;

	t6 = (((x25==x26)/x27)^x28);

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x30 = 2145U;
	uint8_t x31 = UINT8_MAX;
	volatile int64_t t7 = 57LL;

	t7 = (((x29==x30)/x31)^x32);

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint64_t x35 = UINT64_MAX;
	uint64_t t8 = 53706914792LLU;

	t8 = (((x33==x34)/x35)^x36);

	if (t8 != 18446744073709546393LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x38 = 0U;
	int16_t x39 = INT16_MIN;
	uint64_t x40 = UINT64_MAX;
	volatile uint64_t t9 = UINT64_MAX;

	t9 = (((x37==x38)/x39)^x40);

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -16192;
	uint8_t x43 = UINT8_MAX;
	int64_t x44 = INT64_MIN;
	static int64_t t10 = INT64_MIN;

	t10 = (((x41==x42)/x43)^x44);

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 11U;
	int16_t x46 = INT16_MIN;
	uint32_t x47 = 121733U;
	int16_t x48 = 8;
	static uint32_t t11 = 1932125148U;

	t11 = (((x45==x46)/x47)^x48);

	if (t11 != 8U) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x50 = 4U;
	uint8_t x51 = UINT8_MAX;
	uint16_t x52 = UINT16_MAX;
	int32_t t12 = 294807;

	t12 = (((x49==x50)/x51)^x52);

	if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 7132U;
	int32_t x54 = -1;
	volatile int64_t x55 = INT64_MIN;
	volatile uint64_t x56 = UINT64_MAX;
	uint64_t t13 = UINT64_MAX;

	t13 = (((x53==x54)/x55)^x56);

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	int32_t x58 = -74115;
	int16_t x59 = -36;
	static int64_t x60 = -15596727133347218LL;
	int64_t t14 = 824854957148LL;

	t14 = (((x57==x58)/x59)^x60);

	if (t14 != -15596727133347218LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = 522936;
	uint16_t x63 = 12076U;
	static int32_t x64 = 690;
	int32_t t15 = 1382575;

	t15 = (((x61==x62)/x63)^x64);

	if (t15 != 690) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 86U;
	int64_t x66 = 1039806296284900LL;
	uint8_t x68 = UINT8_MAX;
	int32_t t16 = -1818639;

	t16 = (((x65==x66)/x67)^x68);

	if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x69 = 9998U;
	int64_t x70 = INT64_MIN;
	int32_t x71 = -99342241;
	volatile int8_t x72 = INT8_MIN;
	int32_t t17 = 0;

	t17 = (((x69==x70)/x71)^x72);

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 10U;
	int8_t x74 = INT8_MIN;
	uint64_t x76 = 83020515LLU;

	t18 = (((x73==x74)/x75)^x76);

	if (t18 != 83020515LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x78 = 7084536;
	int32_t x79 = 8358;
	int32_t x80 = INT32_MIN;
	volatile int32_t t19 = INT32_MIN;

	t19 = (((x77==x78)/x79)^x80);

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MAX;
	uint32_t x82 = UINT32_MAX;
	static int32_t x83 = INT32_MIN;
	int16_t x84 = -5506;
	int32_t t20 = -7531;

	t20 = (((x81==x82)/x83)^x84);

	if (t20 != -5506) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	volatile int8_t x86 = -1;
	static uint8_t x87 = 22U;
	static int16_t x88 = INT16_MIN;
	int32_t t21 = -20;

	t21 = (((x85==x86)/x87)^x88);

	if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = UINT8_MAX;
	int64_t x90 = INT64_MIN;
	uint16_t x91 = 109U;
	volatile int64_t t22 = 89266819428804593LL;

	t22 = (((x89==x90)/x91)^x92);

	if (t22 != 114LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	int8_t x95 = INT8_MAX;
	int16_t x96 = -1;
	static int32_t t23 = 80;

	t23 = (((x93==x94)/x95)^x96);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = -1;
	int32_t x98 = -548340;
	static int64_t x99 = INT64_MIN;
	int64_t x100 = INT64_MIN;
	int64_t t24 = INT64_MIN;

	t24 = (((x97==x98)/x99)^x100);

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MAX;
	uint16_t x102 = 20647U;
	static volatile uint32_t x103 = UINT32_MAX;
	int16_t x104 = INT16_MAX;
	volatile uint32_t t25 = 808463684U;

	t25 = (((x101==x102)/x103)^x104);

	if (t25 != 32767U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -23;
	int32_t x106 = -98465;
	int8_t x107 = 22;
	static uint8_t x108 = 5U;
	int32_t t26 = 136;

	t26 = (((x105==x106)/x107)^x108);

	if (t26 != 5) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = 1;
	static int16_t x110 = INT16_MIN;
	int8_t x111 = INT8_MAX;
	int8_t x112 = INT8_MIN;
	static int32_t t27 = 19378062;

	t27 = (((x109==x110)/x111)^x112);

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = 10;
	static volatile int16_t x114 = INT16_MIN;
	int64_t x115 = INT64_MIN;
	int32_t x116 = 183;
	static int64_t t28 = 7LL;

	t28 = (((x113==x114)/x115)^x116);

	if (t28 != 183LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 12U;
	int8_t x118 = -1;
	int16_t x119 = INT16_MIN;
	volatile int32_t t29 = INT32_MIN;

	t29 = (((x117==x118)/x119)^x120);

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -1;
	static volatile uint64_t x124 = 2LLU;

	t30 = (((x121==x122)/x123)^x124);

	if (t30 != 2LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x126 = INT8_MIN;
	uint64_t x128 = 76737LLU;
	uint64_t t31 = 6202280LLU;

	t31 = (((x125==x126)/x127)^x128);

	if (t31 != 76737LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x134 = -1;
	uint16_t x136 = 2872U;

	t32 = (((x133==x134)/x135)^x136);

	if (t32 != 2872) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = INT8_MIN;
	int16_t x139 = 1;
	volatile int32_t t33 = 19965;

	t33 = (((x137==x138)/x139)^x140);

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x142 = -1LL;
	int16_t x143 = -1;
	volatile int32_t t34 = 50;

	t34 = (((x141==x142)/x143)^x144);

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x145 = UINT32_MAX;
	volatile int16_t x146 = -438;
	int32_t x147 = -1;
	volatile int16_t x148 = -1;
	static int32_t t35 = 182753171;

	t35 = (((x145==x146)/x147)^x148);

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x150 = INT64_MIN;
	int32_t x151 = INT32_MAX;
	volatile uint32_t x152 = 22262087U;
	volatile uint32_t t36 = 3451822U;

	t36 = (((x149==x150)/x151)^x152);

	if (t36 != 22262087U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x153 = 7U;
	int16_t x154 = INT16_MIN;
	uint8_t x155 = 87U;
	volatile int64_t t37 = -1451885LL;

	t37 = (((x153==x154)/x155)^x156);

	if (t37 != 1552445668LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = 121;
	int64_t x158 = -1LL;
	static uint8_t x159 = 6U;
	int16_t x160 = INT16_MAX;
	int32_t t38 = 101803874;

	t38 = (((x157==x158)/x159)^x160);

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x161 = 534LLU;
	static int16_t x162 = INT16_MIN;
	volatile int64_t x164 = INT64_MIN;
	int64_t t39 = INT64_MIN;

	t39 = (((x161==x162)/x163)^x164);

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x165 = INT64_MIN;
	volatile int16_t x166 = -10;
	uint32_t x167 = UINT32_MAX;
	static uint32_t t40 = 193371339U;

	t40 = (((x165==x166)/x167)^x168);

	if (t40 != 137U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = INT16_MIN;
	uint32_t x170 = 5U;
	int32_t x171 = -1;
	volatile uint16_t x172 = 7U;
	int32_t t41 = 40840;

	t41 = (((x169==x170)/x171)^x172);

	if (t41 != 7) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = INT16_MIN;
	int8_t x174 = INT8_MIN;
	volatile uint32_t x175 = 3878U;
	volatile int32_t x176 = -48130790;
	volatile uint32_t t42 = 1482319124U;

	t42 = (((x173==x174)/x175)^x176);

	if (t42 != 4246836506U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x177 = -1;
	int64_t x178 = 34989264792662LL;
	int32_t x179 = INT32_MIN;
	static volatile int32_t t43 = 448;

	t43 = (((x177==x178)/x179)^x180);

	if (t43 != 36) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = 2135547799684022LL;
	uint32_t x182 = 1083417U;
	volatile int32_t x183 = -1;
	int8_t x184 = 7;
	int32_t t44 = -314963;

	t44 = (((x181==x182)/x183)^x184);

	if (t44 != 7) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x185 = INT16_MAX;
	int32_t x186 = -2933580;
	int32_t x187 = 402263;
	uint8_t x188 = UINT8_MAX;
	static volatile int32_t t45 = 6;

	t45 = (((x185==x186)/x187)^x188);

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = -1;
	static int16_t x190 = -1;
	static int32_t t46 = -364045160;

	t46 = (((x189==x190)/x191)^x192);

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x193 = UINT16_MAX;
	static int16_t x194 = INT16_MAX;
	static int32_t x195 = INT32_MAX;
	static int32_t x196 = -1;
	static int32_t t47 = -141193;

	t47 = (((x193==x194)/x195)^x196);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x198 = UINT8_MAX;
	int32_t x200 = INT32_MIN;
	static int32_t t48 = INT32_MIN;

	t48 = (((x197==x198)/x199)^x200);

	if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x202 = INT32_MIN;
	static int32_t x203 = INT32_MIN;
	int64_t x204 = INT64_MIN;
	volatile int64_t t49 = INT64_MIN;

	t49 = (((x201==x202)/x203)^x204);

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x205 = -16586696;
	int32_t x206 = INT32_MIN;
	uint16_t x207 = 37U;
	int32_t t50 = -26103;

	t50 = (((x205==x206)/x207)^x208);

	if (t50 != 5) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x209 = -29;
	uint32_t x210 = 14255U;
	uint16_t x211 = UINT16_MAX;
	volatile int32_t t51 = 1074317;

	t51 = (((x209==x210)/x211)^x212);

	if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x216 = INT64_MIN;
	int64_t t52 = INT64_MIN;

	t52 = (((x213==x214)/x215)^x216);

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x217 = INT32_MAX;
	uint16_t x218 = UINT16_MAX;
	int64_t x219 = INT64_MIN;
	volatile int8_t x220 = -1;
	volatile int64_t t53 = 1LL;

	t53 = (((x217==x218)/x219)^x220);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x221 = INT32_MIN;
	int16_t x222 = 1;
	int8_t x223 = 4;
	int8_t x224 = INT8_MIN;
	int32_t t54 = 0;

	t54 = (((x221==x222)/x223)^x224);

	if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x226 = 737265964771219LL;
	volatile uint32_t x227 = UINT32_MAX;
	volatile uint64_t x228 = 1258571362007190LLU;

	t55 = (((x225==x226)/x227)^x228);

	if (t55 != 1258571362007190LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x229 = INT32_MAX;
	static volatile int16_t x230 = -1825;
	int16_t x232 = -6;
	int32_t t56 = -1566;

	t56 = (((x229==x230)/x231)^x232);

	if (t56 != -6) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x233 = INT8_MAX;
	volatile uint32_t x234 = UINT32_MAX;
	uint64_t x236 = 64356697LLU;
	uint64_t t57 = 4247302LLU;

	t57 = (((x233==x234)/x235)^x236);

	if (t57 != 64356697LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x237 = 4029U;
	static volatile int64_t x238 = INT64_MAX;
	static uint64_t x239 = 65556406135LLU;
	uint64_t t58 = 3951018387347538LLU;

	t58 = (((x237==x238)/x239)^x240);

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x241 = 85LLU;
	int8_t x242 = -1;
	static int16_t x243 = INT16_MIN;
	volatile int32_t x244 = 2399;
	volatile int32_t t59 = 16422903;

	t59 = (((x241==x242)/x243)^x244);

	if (t59 != 2399) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x245 = INT8_MAX;
	int8_t x246 = 5;
	volatile int64_t x247 = INT64_MIN;
	uint32_t x248 = UINT32_MAX;
	volatile int64_t t60 = -18018019124742LL;

	t60 = (((x245==x246)/x247)^x248);

	if (t60 != 4294967295LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x249 = -1;
	int16_t x250 = 112;
	volatile uint32_t x251 = 1904182404U;
	int32_t x252 = INT32_MAX;
	static uint32_t t61 = 967U;

	t61 = (((x249==x250)/x251)^x252);

	if (t61 != 2147483647U) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint64_t x254 = 11LLU;
	int32_t x255 = INT32_MIN;
	uint32_t x256 = UINT32_MAX;
	volatile uint32_t t62 = UINT32_MAX;

	t62 = (((x253==x254)/x255)^x256);

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x257 = -1320298345LL;
	static volatile int16_t x260 = -1;

	t63 = (((x257==x258)/x259)^x260);

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x261 = -504;
	static int8_t x262 = INT8_MIN;
	uint16_t x263 = 119U;
	uint32_t x264 = 2U;
	static uint32_t t64 = 45790806U;

	t64 = (((x261==x262)/x263)^x264);

	if (t64 != 2U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x265 = -1;
	int16_t x266 = INT16_MIN;
	int32_t x268 = -1;

	t65 = (((x265==x266)/x267)^x268);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x270 = -3;
	uint16_t x271 = 15U;
	static int16_t x272 = 10;
	volatile int32_t t66 = 27047003;

	t66 = (((x269==x270)/x271)^x272);

	if (t66 != 10) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x273 = INT32_MIN;
	int8_t x274 = INT8_MIN;
	uint64_t x275 = 4374403411621129838LLU;
	int8_t x276 = -24;

	t67 = (((x273==x274)/x275)^x276);

	if (t67 != 18446744073709551592LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x277 = INT64_MIN;
	uint8_t x278 = UINT8_MAX;
	uint16_t x279 = UINT16_MAX;
	volatile uint64_t t68 = UINT64_MAX;

	t68 = (((x277==x278)/x279)^x280);

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x281 = 62U;
	static int32_t x282 = -1007398;
	uint64_t x283 = 62798587LLU;
	int8_t x284 = INT8_MIN;
	static uint64_t t69 = 172789988834LLU;

	t69 = (((x281==x282)/x283)^x284);

	if (t69 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x285 = INT8_MIN;
	volatile int8_t x286 = -13;
	static uint8_t x287 = 6U;
	int32_t x288 = INT32_MAX;
	volatile int32_t t70 = INT32_MAX;

	t70 = (((x285==x286)/x287)^x288);

	if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x289 = UINT64_MAX;
	int16_t x290 = INT16_MAX;
	volatile int64_t x291 = INT64_MIN;
	volatile int16_t x292 = 618;
	int64_t t71 = 32103235397021LL;

	t71 = (((x289==x290)/x291)^x292);

	if (t71 != 618LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x294 = UINT64_MAX;
	static uint64_t x295 = 29736633382110LLU;
	static int32_t x296 = INT32_MAX;
	uint64_t t72 = 558302460788618710LLU;

	t72 = (((x293==x294)/x295)^x296);

	if (t72 != 2147483647LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x297 = 142442209311243093LLU;
	uint8_t x298 = UINT8_MAX;
	int64_t x299 = 686587LL;
	uint32_t x300 = 1U;
	static int64_t t73 = 55909905LL;

	t73 = (((x297==x298)/x299)^x300);

	if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x301 = INT32_MIN;
	int8_t x303 = INT8_MIN;
	volatile int16_t x304 = -1319;
	volatile int32_t t74 = 8644;

	t74 = (((x301==x302)/x303)^x304);

	if (t74 != -1319) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x305 = 2804614LLU;
	static int64_t x306 = 0LL;
	int32_t x307 = -1;

	t75 = (((x305==x306)/x307)^x308);

	if (t75 != 998341) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x310 = 2U;
	int8_t x311 = 1;
	int64_t x312 = INT64_MIN;

	t76 = (((x309==x310)/x311)^x312);

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x313 = INT32_MIN;
	int64_t x314 = 33275839218LL;
	int8_t x315 = 1;
	volatile int32_t x316 = 4;
	int32_t t77 = -33;

	t77 = (((x313==x314)/x315)^x316);

	if (t77 != 4) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x317 = -1LL;
	volatile int64_t x318 = INT64_MIN;
	volatile int64_t x319 = -1LL;
	static uint16_t x320 = 15156U;
	static volatile int64_t t78 = -8LL;

	t78 = (((x317==x318)/x319)^x320);

	if (t78 != 15156LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x321 = 5211105471LL;
	int32_t x322 = INT32_MIN;
	int32_t x323 = -1243;
	int64_t x324 = INT64_MAX;
	static int64_t t79 = INT64_MAX;

	t79 = (((x321==x322)/x323)^x324);

	if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x326 = 858U;
	uint64_t x327 = UINT64_MAX;
	uint16_t x328 = UINT16_MAX;
	volatile uint64_t t80 = 5199298482481LLU;

	t80 = (((x325==x326)/x327)^x328);

	if (t80 != 65535LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x330 = -48838358LL;
	volatile int32_t x331 = INT32_MIN;
	int64_t x332 = -1LL;
	volatile int64_t t81 = -191600LL;

	t81 = (((x329==x330)/x331)^x332);

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x333 = INT16_MIN;
	static int32_t x334 = INT32_MIN;
	int64_t x335 = INT64_MIN;
	int8_t x336 = -1;
	int64_t t82 = 2805030597397268LL;

	t82 = (((x333==x334)/x335)^x336);

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x338 = INT16_MIN;
	int64_t x339 = INT64_MIN;
	static int16_t x340 = INT16_MIN;

	t83 = (((x337==x338)/x339)^x340);

	if (t83 != -32768LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x341 = 57;
	static volatile uint16_t x343 = 6498U;
	static uint8_t x344 = UINT8_MAX;
	int32_t t84 = 1305208;

	t84 = (((x341==x342)/x343)^x344);

	if (t84 != 255) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x345 = INT32_MAX;
	int64_t x346 = INT64_MIN;
	int64_t x347 = -5620LL;
	int64_t x348 = 232LL;
	volatile int64_t t85 = -3579598889LL;

	t85 = (((x345==x346)/x347)^x348);

	if (t85 != 232LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x349 = -1;
	static uint64_t x350 = 420619612732LLU;
	uint32_t x351 = 5U;
	volatile int16_t x352 = 685;

	t86 = (((x349==x350)/x351)^x352);

	if (t86 != 685U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x353 = INT32_MIN;
	int32_t x354 = INT32_MAX;
	int32_t x355 = INT32_MAX;
	static int16_t x356 = INT16_MAX;
	static int32_t t87 = 100860;

	t87 = (((x353==x354)/x355)^x356);

	if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x357 = 0U;
	static int8_t x358 = INT8_MAX;
	volatile int16_t x359 = -836;
	static int64_t x360 = -53388459910443103LL;
	int64_t t88 = -3022797014LL;

	t88 = (((x357==x358)/x359)^x360);

	if (t88 != -53388459910443103LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x361 = -212;
	int16_t x362 = -1;
	uint64_t x363 = UINT64_MAX;
	static int64_t x364 = INT64_MIN;
	volatile uint64_t t89 = 260667387719407945LLU;

	t89 = (((x361==x362)/x363)^x364);

	if (t89 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x365 = -31305;
	static volatile int8_t x366 = 0;
	static int64_t x367 = -535430LL;
	static int32_t x368 = 5253290;
	int64_t t90 = -113870LL;

	t90 = (((x365==x366)/x367)^x368);

	if (t90 != 5253290LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x371 = 1006U;
	int32_t x372 = -1;
	int32_t t91 = -1278;

	t91 = (((x369==x370)/x371)^x372);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x373 = UINT16_MAX;
	int64_t x374 = INT64_MIN;
	uint16_t x375 = 15312U;
	uint16_t x376 = 28702U;
	int32_t t92 = 1735179;

	t92 = (((x373==x374)/x375)^x376);

	if (t92 != 28702) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x377 = -1;
	int64_t x378 = 15LL;
	uint32_t x379 = UINT32_MAX;
	uint8_t x380 = 60U;
	volatile uint32_t t93 = 0U;

	t93 = (((x377==x378)/x379)^x380);

	if (t93 != 60U) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x385 = INT8_MIN;
	int64_t x386 = 57855705099336LL;
	int64_t x387 = INT64_MIN;
	int16_t x388 = INT16_MAX;
	int64_t t94 = 3888626893395109591LL;

	t94 = (((x385==x386)/x387)^x388);

	if (t94 != 32767LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x391 = 9U;
	int32_t x392 = -598637109;
	int32_t t95 = -369;

	t95 = (((x389==x390)/x391)^x392);

	if (t95 != -598637109) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x393 = INT32_MAX;
	uint16_t x394 = UINT16_MAX;
	uint32_t x395 = 3861U;
	uint32_t t96 = UINT32_MAX;

	t96 = (((x393==x394)/x395)^x396);

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x397 = 3U;
	int64_t x398 = 100407692LL;
	static int8_t x400 = INT8_MIN;
	volatile uint64_t t97 = 180079LLU;

	t97 = (((x397==x398)/x399)^x400);

	if (t97 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x401 = INT8_MAX;
	int8_t x402 = -3;
	uint8_t x404 = UINT8_MAX;
	int64_t t98 = 53578876LL;

	t98 = (((x401==x402)/x403)^x404);

	if (t98 != 255LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x405 = -1;
	static uint64_t x407 = UINT64_MAX;
	static int16_t x408 = INT16_MIN;
	static volatile uint64_t t99 = 4528626LLU;

	t99 = (((x405==x406)/x407)^x408);

	if (t99 != 18446744073709518848LLU) { NG(); } else { ; }
	
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

