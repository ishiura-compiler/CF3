#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t x2 = UINT32_MAX;
int64_t x7 = INT64_MIN;
int16_t x14 = 3354;
int64_t x17 = -1LL;
volatile int32_t t4 = 1921;
int8_t x25 = INT8_MIN;
volatile uint64_t x31 = 78835255266LLU;
int32_t x38 = INT32_MAX;
uint8_t x43 = UINT8_MAX;
volatile int32_t t10 = -45458;
volatile int8_t x45 = INT8_MIN;
static int8_t x52 = -1;
static uint8_t x53 = UINT8_MAX;
static volatile int32_t t14 = -653119689;
uint16_t x61 = UINT16_MAX;
volatile int32_t t15 = 1859;
int32_t x68 = INT32_MIN;
int32_t t16 = -16550090;
int16_t x69 = INT16_MIN;
int64_t x81 = INT64_MIN;
static uint16_t x83 = 13U;
int64_t x85 = -1LL;
int32_t t21 = -108784;
volatile int32_t t23 = 53;
int16_t x100 = -1;
volatile int64_t x105 = INT64_MAX;
volatile int64_t x108 = INT64_MAX;
uint8_t x109 = 33U;
int64_t x112 = INT64_MIN;
uint32_t x114 = UINT32_MAX;
static int32_t t28 = 5217;
static volatile int32_t t29 = -940;
uint32_t x128 = 68U;
volatile int32_t t34 = 308;
int32_t x146 = 2191;
uint64_t x147 = 216074LLU;
int32_t x149 = INT32_MIN;
static uint8_t x154 = UINT8_MAX;
int16_t x155 = INT16_MIN;
static volatile int16_t x162 = INT16_MIN;
static volatile int32_t t40 = 4583228;
int32_t t41 = -1;
volatile int32_t t44 = -108871540;
int16_t x185 = INT16_MIN;
static volatile int32_t t47 = -648321;
static uint64_t x195 = 13LLU;
volatile int16_t x204 = -1;
int16_t x207 = -1;
static int32_t x218 = INT32_MIN;
volatile int32_t t55 = 111;
int64_t x232 = INT64_MAX;
static volatile int16_t x233 = INT16_MAX;
static int32_t x234 = INT32_MIN;
uint64_t x247 = 109738LLU;
volatile uint32_t x253 = 682U;
volatile int32_t t64 = -102;
int16_t x267 = 194;
volatile int32_t t65 = -1;
int32_t x271 = INT32_MIN;
int32_t t67 = 197749;
static uint16_t x280 = 24533U;
int8_t x282 = -1;
int8_t x285 = -62;
static uint16_t x297 = 6U;
static uint32_t x299 = 1U;
static uint8_t x301 = UINT8_MAX;
int64_t x304 = INT64_MAX;
int32_t t74 = 112;
int8_t x306 = 17;
static int32_t x308 = INT32_MAX;
int64_t x311 = -394942LL;
volatile int32_t t76 = 448;
int8_t x314 = INT8_MIN;
uint8_t x317 = UINT8_MAX;
uint8_t x318 = 0U;
static uint64_t x326 = 2771414854851LLU;
int32_t t81 = -151784436;
volatile int32_t t83 = 416055;
static int16_t x341 = 2;
int32_t t84 = 7;
static int64_t x345 = INT64_MAX;
int64_t x348 = 147594796974LL;
volatile uint64_t x350 = 17028LLU;
static int16_t x353 = INT16_MIN;
int64_t x355 = INT64_MAX;
volatile int32_t t89 = 6339;
volatile int8_t x369 = -1;
uint8_t x371 = 30U;
volatile int64_t x373 = INT64_MIN;
static int16_t x374 = -1453;
int64_t x376 = -1LL;
volatile int64_t x388 = INT64_MAX;
int32_t t96 = -403645508;
int32_t t98 = 10297062;


void f0(void) {
	int32_t x1 = -1;
	uint16_t x3 = 109U;
	uint64_t x4 = 30297770855LLU;
	volatile int32_t t0 = -21;

	t0 = ((x1-(x2==x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 27677U;
	uint32_t x6 = 2U;
	int64_t x8 = INT64_MAX;
	int32_t t1 = -108484279;

	t1 = ((x5-(x6==x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	static int64_t x10 = INT64_MAX;
	volatile uint64_t x11 = 905862LLU;
	int8_t x12 = INT8_MAX;
	volatile int32_t t2 = 0;

	t2 = ((x9-(x10==x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 15;
	uint16_t x15 = 241U;
	uint8_t x16 = UINT8_MAX;
	int32_t t3 = -5442;

	t3 = ((x13-(x14==x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x18 = INT32_MIN;
	volatile int8_t x19 = -1;
	static int8_t x20 = INT8_MIN;

	t4 = ((x17-(x18==x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	static int16_t x22 = 11783;
	static int64_t x23 = -1LL;
	uint32_t x24 = UINT32_MAX;
	volatile int32_t t5 = -4581;

	t5 = ((x21-(x22==x23))==x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x26 = INT8_MAX;
	uint64_t x27 = 7798162716LLU;
	int8_t x28 = INT8_MIN;
	static volatile int32_t t6 = -41618;

	t6 = ((x25-(x26==x27))==x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x29 = 825U;
	int8_t x30 = INT8_MIN;
	int16_t x32 = 5;
	int32_t t7 = 261084222;

	t7 = ((x29-(x30==x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x33 = -1;
	static int32_t x34 = -4946;
	static uint64_t x35 = 356LLU;
	volatile int8_t x36 = -1;
	volatile int32_t t8 = 135674;

	t8 = ((x33-(x34==x35))==x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	uint8_t x39 = 19U;
	static int64_t x40 = INT64_MIN;
	int32_t t9 = -50570421;

	t9 = ((x37-(x38==x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = UINT16_MAX;
	uint32_t x42 = 7755985U;
	int32_t x44 = 1223097;

	t10 = ((x41-(x42==x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x46 = 423077U;
	uint64_t x47 = UINT64_MAX;
	uint8_t x48 = UINT8_MAX;
	int32_t t11 = 628;

	t11 = ((x45-(x46==x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MAX;
	uint8_t x50 = 26U;
	uint16_t x51 = 1983U;
	int32_t t12 = 522;

	t12 = ((x49-(x50==x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = -11;
	int16_t x55 = INT16_MIN;
	int64_t x56 = -1LL;
	volatile int32_t t13 = 6434757;

	t13 = ((x53-(x54==x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -7458;
	static uint8_t x58 = 60U;
	int64_t x59 = INT64_MIN;
	int32_t x60 = 1;

	t14 = ((x57-(x58==x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x62 = -8;
	int32_t x63 = INT32_MIN;
	int8_t x64 = INT8_MAX;

	t15 = ((x61-(x62==x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -1LL;
	uint64_t x66 = 5606955145230LLU;
	static int8_t x67 = 2;

	t16 = ((x65-(x66==x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x70 = 2375;
	int64_t x71 = 17378760857752LL;
	uint8_t x72 = 3U;
	volatile int32_t t17 = -1011541029;

	t17 = ((x69-(x70==x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = 62;
	int8_t x74 = INT8_MAX;
	int16_t x75 = -1;
	volatile int64_t x76 = INT64_MAX;
	volatile int32_t t18 = 1469;

	t18 = ((x73-(x74==x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x77 = UINT32_MAX;
	static int64_t x78 = INT64_MAX;
	int64_t x79 = INT64_MIN;
	static uint8_t x80 = UINT8_MAX;
	static int32_t t19 = 4070;

	t19 = ((x77-(x78==x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x82 = -1LL;
	volatile int32_t x84 = INT32_MAX;
	volatile int32_t t20 = 533306758;

	t20 = ((x81-(x82==x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x86 = 2746069LLU;
	static int64_t x87 = INT64_MAX;
	int32_t x88 = INT32_MAX;

	t21 = ((x85-(x86==x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MAX;
	int8_t x90 = -1;
	static int16_t x91 = INT16_MIN;
	static int64_t x92 = INT64_MIN;
	int32_t t22 = 63059;

	t22 = ((x89-(x90==x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MIN;
	int8_t x94 = INT8_MIN;
	volatile int32_t x95 = -2;
	int64_t x96 = INT64_MIN;

	t23 = ((x93-(x94==x95))==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -8LL;
	int8_t x98 = INT8_MIN;
	int64_t x99 = INT64_MAX;
	static int32_t t24 = 330115;

	t24 = ((x97-(x98==x99))==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MAX;
	int16_t x102 = INT16_MIN;
	int32_t x103 = INT32_MIN;
	static int64_t x104 = 739191LL;
	int32_t t25 = 146851264;

	t25 = ((x101-(x102==x103))==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x106 = UINT32_MAX;
	volatile int64_t x107 = INT64_MIN;
	int32_t t26 = 0;

	t26 = ((x105-(x106==x107))==x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x110 = 2U;
	volatile int16_t x111 = INT16_MAX;
	volatile int32_t t27 = 70359;

	t27 = ((x109-(x110==x111))==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = UINT64_MAX;
	uint16_t x115 = UINT16_MAX;
	int32_t x116 = INT32_MIN;

	t28 = ((x113-(x114==x115))==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x117 = 3583263U;
	static volatile uint8_t x118 = UINT8_MAX;
	int32_t x119 = INT32_MIN;
	int8_t x120 = -1;

	t29 = ((x117-(x118==x119))==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint8_t x121 = 81U;
	int64_t x122 = -1LL;
	uint8_t x123 = UINT8_MAX;
	static int8_t x124 = INT8_MAX;
	int32_t t30 = -3210639;

	t30 = ((x121-(x122==x123))==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x125 = UINT8_MAX;
	int32_t x126 = INT32_MAX;
	int64_t x127 = INT64_MAX;
	volatile int32_t t31 = -18;

	t31 = ((x125-(x126==x127))==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = INT64_MIN;
	int64_t x130 = 783LL;
	uint8_t x131 = 10U;
	int64_t x132 = 3097984262769LL;
	int32_t t32 = 659143891;

	t32 = ((x129-(x130==x131))==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x133 = 834743517685052883LLU;
	int64_t x134 = -1LL;
	int32_t x135 = -1;
	uint64_t x136 = 123979139LLU;
	volatile int32_t t33 = -2;

	t33 = ((x133-(x134==x135))==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x137 = INT16_MIN;
	int16_t x138 = 11887;
	int32_t x139 = -1;
	int32_t x140 = INT32_MIN;

	t34 = ((x137-(x138==x139))==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x141 = 51689LLU;
	volatile int8_t x142 = INT8_MAX;
	int8_t x143 = -1;
	int64_t x144 = 918926163705196LL;
	int32_t t35 = 123610;

	t35 = ((x141-(x142==x143))==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x145 = -1LL;
	uint8_t x148 = UINT8_MAX;
	volatile int32_t t36 = -18759058;

	t36 = ((x145-(x146==x147))==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x150 = INT16_MAX;
	int32_t x151 = INT32_MAX;
	int8_t x152 = -37;
	static int32_t t37 = -267447;

	t37 = ((x149-(x150==x151))==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MAX;
	int32_t x156 = 10;
	volatile int32_t t38 = -1933;

	t38 = ((x153-(x154==x155))==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 2803878U;
	int64_t x158 = -1LL;
	static uint8_t x159 = UINT8_MAX;
	int32_t x160 = INT32_MAX;
	int32_t t39 = -3;

	t39 = ((x157-(x158==x159))==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = -1LL;
	uint8_t x163 = UINT8_MAX;
	volatile int16_t x164 = INT16_MIN;

	t40 = ((x161-(x162==x163))==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = 51508733LL;
	static uint32_t x166 = 3843457U;
	uint16_t x167 = 0U;
	int16_t x168 = 15165;

	t41 = ((x165-(x166==x167))==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	volatile uint64_t x170 = UINT64_MAX;
	uint8_t x171 = 1U;
	int8_t x172 = INT8_MIN;
	volatile int32_t t42 = -82;

	t42 = ((x169-(x170==x171))==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MAX;
	static int64_t x174 = INT64_MIN;
	static int32_t x175 = -3922;
	int32_t x176 = INT32_MIN;
	volatile int32_t t43 = -78;

	t43 = ((x173-(x174==x175))==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MAX;
	int16_t x178 = INT16_MAX;
	int32_t x179 = INT32_MIN;
	int16_t x180 = INT16_MIN;

	t44 = ((x177-(x178==x179))==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	int32_t x182 = 1207812;
	volatile int32_t x183 = 12656479;
	volatile int8_t x184 = -58;
	int32_t t45 = -7704230;

	t45 = ((x181-(x182==x183))==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x186 = -1;
	volatile int8_t x187 = 1;
	volatile int8_t x188 = INT8_MIN;
	int32_t t46 = 29;

	t46 = ((x185-(x186==x187))==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -3940120737787829509LL;
	uint32_t x190 = UINT32_MAX;
	uint8_t x191 = 1U;
	static volatile int16_t x192 = -1;

	t47 = ((x189-(x190==x191))==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 5U;
	uint16_t x194 = 257U;
	int16_t x196 = INT16_MIN;
	int32_t t48 = -38;

	t48 = ((x193-(x194==x195))==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 105118LLU;
	int64_t x198 = INT64_MIN;
	uint64_t x199 = UINT64_MAX;
	int32_t x200 = -1;
	static volatile int32_t t49 = -9092;

	t49 = ((x197-(x198==x199))==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x201 = 2U;
	int8_t x202 = -1;
	volatile int8_t x203 = -22;
	volatile int32_t t50 = 3095794;

	t50 = ((x201-(x202==x203))==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = UINT16_MAX;
	uint64_t x206 = 566131150693404LLU;
	int16_t x208 = -14440;
	int32_t t51 = -664;

	t51 = ((x205-(x206==x207))==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x209 = 239053291U;
	uint8_t x210 = UINT8_MAX;
	int8_t x211 = INT8_MIN;
	static uint16_t x212 = 712U;
	volatile int32_t t52 = 30;

	t52 = ((x209-(x210==x211))==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = 4250685;
	static int32_t x214 = INT32_MAX;
	int32_t x215 = INT32_MAX;
	static int64_t x216 = INT64_MIN;
	int32_t t53 = 0;

	t53 = ((x213-(x214==x215))==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = UINT16_MAX;
	int32_t x219 = INT32_MIN;
	int16_t x220 = INT16_MIN;
	volatile int32_t t54 = 11550;

	t54 = ((x217-(x218==x219))==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x225 = UINT16_MAX;
	uint64_t x226 = UINT64_MAX;
	int64_t x227 = INT64_MIN;
	int8_t x228 = INT8_MIN;

	t55 = ((x225-(x226==x227))==x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x229 = 2903;
	uint32_t x230 = 1047822939U;
	static int64_t x231 = INT64_MIN;
	static int32_t t56 = 10239796;

	t56 = ((x229-(x230==x231))==x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x235 = -1;
	static volatile int16_t x236 = -1;
	volatile int32_t t57 = -12;

	t57 = ((x233-(x234==x235))==x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x237 = 28;
	int64_t x238 = INT64_MIN;
	uint8_t x239 = 1U;
	static int64_t x240 = INT64_MIN;
	volatile int32_t t58 = -48;

	t58 = ((x237-(x238==x239))==x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x241 = UINT32_MAX;
	uint8_t x242 = 5U;
	static volatile int16_t x243 = INT16_MIN;
	static int8_t x244 = -1;
	static int32_t t59 = 7069798;

	t59 = ((x241-(x242==x243))==x244);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x245 = UINT8_MAX;
	int64_t x246 = INT64_MIN;
	int64_t x248 = INT64_MIN;
	int32_t t60 = 3244;

	t60 = ((x245-(x246==x247))==x248);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x249 = -1;
	uint64_t x250 = 58LLU;
	int16_t x251 = -3;
	static uint64_t x252 = 4110553289640278739LLU;
	volatile int32_t t61 = -330760;

	t61 = ((x249-(x250==x251))==x252);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x254 = 188U;
	static int16_t x255 = -1;
	static volatile uint16_t x256 = 14493U;
	int32_t t62 = 136413;

	t62 = ((x253-(x254==x255))==x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x257 = -58335LL;
	static int16_t x258 = -1;
	int8_t x259 = INT8_MAX;
	static uint8_t x260 = UINT8_MAX;
	int32_t t63 = 53476;

	t63 = ((x257-(x258==x259))==x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x261 = INT16_MAX;
	int32_t x262 = -1;
	uint16_t x263 = UINT16_MAX;
	volatile uint16_t x264 = 14U;

	t64 = ((x261-(x262==x263))==x264);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x265 = 57U;
	uint32_t x266 = 79336664U;
	int32_t x268 = -6;

	t65 = ((x265-(x266==x267))==x268);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x269 = INT8_MIN;
	static uint64_t x270 = 1974076164686366525LLU;
	static uint64_t x272 = 23712LLU;
	static volatile int32_t t66 = 727050637;

	t66 = ((x269-(x270==x271))==x272);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint64_t x273 = 56LLU;
	int16_t x274 = 527;
	int8_t x275 = INT8_MAX;
	int32_t x276 = -7947886;

	t67 = ((x273-(x274==x275))==x276);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x277 = INT16_MIN;
	volatile int8_t x278 = -1;
	int16_t x279 = -396;
	int32_t t68 = -279950701;

	t68 = ((x277-(x278==x279))==x280);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x281 = INT8_MAX;
	int64_t x283 = -33217866670067LL;
	int64_t x284 = INT64_MIN;
	volatile int32_t t69 = -1;

	t69 = ((x281-(x282==x283))==x284);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x286 = INT16_MIN;
	int16_t x287 = 246;
	static volatile int16_t x288 = 9;
	int32_t t70 = 1901208;

	t70 = ((x285-(x286==x287))==x288);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x289 = -230LL;
	static uint8_t x290 = UINT8_MAX;
	int8_t x291 = INT8_MIN;
	volatile int8_t x292 = INT8_MIN;
	volatile int32_t t71 = 227;

	t71 = ((x289-(x290==x291))==x292);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x293 = 7LLU;
	uint64_t x294 = 5649LLU;
	int16_t x295 = INT16_MIN;
	volatile int8_t x296 = INT8_MAX;
	int32_t t72 = 29;

	t72 = ((x293-(x294==x295))==x296);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x298 = UINT8_MAX;
	int64_t x300 = 6931LL;
	int32_t t73 = -2;

	t73 = ((x297-(x298==x299))==x300);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x302 = -1;
	uint32_t x303 = 199U;

	t74 = ((x301-(x302==x303))==x304);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x305 = UINT8_MAX;
	uint32_t x307 = 752U;
	volatile int32_t t75 = -62002822;

	t75 = ((x305-(x306==x307))==x308);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x309 = INT64_MIN;
	int8_t x310 = -1;
	int8_t x312 = 0;

	t76 = ((x309-(x310==x311))==x312);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x313 = -58;
	int64_t x315 = INT64_MIN;
	int64_t x316 = 1887565834LL;
	int32_t t77 = 341776;

	t77 = ((x313-(x314==x315))==x316);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x319 = -1;
	volatile int32_t x320 = INT32_MIN;
	int32_t t78 = 16;

	t78 = ((x317-(x318==x319))==x320);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x321 = -222;
	uint8_t x322 = UINT8_MAX;
	static volatile int16_t x323 = INT16_MAX;
	volatile int64_t x324 = INT64_MIN;
	volatile int32_t t79 = -1026207363;

	t79 = ((x321-(x322==x323))==x324);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x325 = 18U;
	uint16_t x327 = UINT16_MAX;
	static int8_t x328 = 2;
	static volatile int32_t t80 = -5022401;

	t80 = ((x325-(x326==x327))==x328);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x329 = -205;
	int16_t x330 = INT16_MIN;
	int64_t x331 = INT64_MAX;
	int16_t x332 = -1;

	t81 = ((x329-(x330==x331))==x332);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x333 = INT64_MIN;
	int32_t x334 = -1;
	int32_t x335 = INT32_MAX;
	uint32_t x336 = UINT32_MAX;
	int32_t t82 = 13903;

	t82 = ((x333-(x334==x335))==x336);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x337 = 0U;
	static uint8_t x338 = 8U;
	static int32_t x339 = 114;
	int16_t x340 = INT16_MIN;

	t83 = ((x337-(x338==x339))==x340);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x342 = -1;
	uint16_t x343 = 10027U;
	uint64_t x344 = 23LLU;

	t84 = ((x341-(x342==x343))==x344);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x346 = UINT8_MAX;
	uint64_t x347 = UINT64_MAX;
	static volatile int32_t t85 = 16572180;

	t85 = ((x345-(x346==x347))==x348);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x349 = 24U;
	volatile int16_t x351 = -10;
	static uint64_t x352 = 5163627541505477529LLU;
	int32_t t86 = -230549;

	t86 = ((x349-(x350==x351))==x352);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x354 = 15;
	int32_t x356 = -109769688;
	volatile int32_t t87 = -30998;

	t87 = ((x353-(x354==x355))==x356);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x357 = INT16_MIN;
	volatile uint32_t x358 = 5130081U;
	uint32_t x359 = UINT32_MAX;
	int8_t x360 = INT8_MIN;
	static int32_t t88 = 14488420;

	t88 = ((x357-(x358==x359))==x360);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x361 = INT16_MIN;
	int16_t x362 = INT16_MAX;
	int16_t x363 = INT16_MIN;
	int8_t x364 = INT8_MIN;

	t89 = ((x361-(x362==x363))==x364);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x365 = INT8_MIN;
	uint32_t x366 = 369U;
	volatile int64_t x367 = 3167892808619036382LL;
	volatile int64_t x368 = -1LL;
	volatile int32_t t90 = -1;

	t90 = ((x365-(x366==x367))==x368);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x370 = INT8_MIN;
	uint64_t x372 = UINT64_MAX;
	int32_t t91 = 846576584;

	t91 = ((x369-(x370==x371))==x372);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x375 = INT32_MAX;
	static volatile int32_t t92 = -45;

	t92 = ((x373-(x374==x375))==x376);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x377 = INT32_MIN;
	uint8_t x378 = 21U;
	uint32_t x379 = 3097952U;
	volatile uint8_t x380 = 6U;
	volatile int32_t t93 = 6837423;

	t93 = ((x377-(x378==x379))==x380);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x381 = 89U;
	volatile int32_t x382 = INT32_MAX;
	volatile int32_t x383 = INT32_MIN;
	int16_t x384 = INT16_MIN;
	volatile int32_t t94 = -6;

	t94 = ((x381-(x382==x383))==x384);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int8_t x385 = INT8_MIN;
	uint32_t x386 = 576U;
	volatile int16_t x387 = 4;
	volatile int32_t t95 = -103414544;

	t95 = ((x385-(x386==x387))==x388);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x389 = INT32_MIN;
	int16_t x390 = -3362;
	int32_t x391 = 1;
	uint8_t x392 = UINT8_MAX;

	t96 = ((x389-(x390==x391))==x392);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x393 = INT64_MIN;
	volatile int16_t x394 = INT16_MIN;
	int16_t x395 = -31;
	static uint16_t x396 = UINT16_MAX;
	static int32_t t97 = 59327011;

	t97 = ((x393-(x394==x395))==x396);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x397 = UINT16_MAX;
	int32_t x398 = INT32_MAX;
	uint16_t x399 = 326U;
	uint8_t x400 = 21U;

	t98 = ((x397-(x398==x399))==x400);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x401 = INT16_MIN;
	int16_t x402 = INT16_MIN;
	uint16_t x403 = 681U;
	uint16_t x404 = 145U;
	static volatile int32_t t99 = -4491471;

	t99 = ((x401-(x402==x403))==x404);

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

