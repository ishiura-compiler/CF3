#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = INT64_MIN;
int32_t t0 = -31161136;
uint64_t x9 = 783414848529LLU;
int8_t x13 = INT8_MIN;
volatile int8_t x14 = INT8_MIN;
volatile uint16_t x16 = 54U;
int32_t t3 = 97;
int32_t t5 = -3;
int8_t x29 = INT8_MIN;
uint8_t x35 = UINT8_MAX;
static int32_t t8 = -26840126;
int8_t x42 = INT8_MIN;
static int64_t x44 = INT64_MAX;
volatile int32_t t10 = 313249;
int32_t t11 = 1383;
uint32_t x57 = 0U;
int8_t x64 = INT8_MAX;
uint8_t x72 = 3U;
int64_t x73 = -29289662317LL;
int64_t x77 = INT64_MIN;
int32_t t20 = -94;
uint64_t x89 = 21LLU;
int32_t x90 = INT32_MAX;
int64_t x91 = -791648552LL;
volatile int16_t x92 = -1;
uint64_t x94 = UINT64_MAX;
uint32_t x98 = UINT32_MAX;
static uint64_t x100 = UINT64_MAX;
volatile int32_t t24 = -42959;
uint16_t x107 = UINT16_MAX;
uint16_t x112 = UINT16_MAX;
int32_t x114 = -1;
int16_t x118 = 1;
static int32_t x131 = INT32_MAX;
static uint16_t x138 = 22679U;
int32_t t34 = -1;
uint8_t x142 = 1U;
uint64_t x143 = 0LLU;
uint64_t x145 = 65971366369852LLU;
volatile int32_t t36 = -387;
int32_t x150 = INT32_MAX;
uint64_t x151 = UINT64_MAX;
static volatile int32_t t37 = 4162;
int32_t t39 = -48967;
int8_t x161 = -1;
int16_t x163 = -127;
int8_t x169 = 7;
int32_t x170 = INT32_MIN;
uint8_t x171 = 4U;
static int8_t x172 = 2;
volatile int32_t t42 = 0;
int32_t t43 = 3;
static int16_t x177 = INT16_MIN;
int8_t x178 = -1;
int64_t x182 = INT64_MIN;
int64_t x186 = -1LL;
static int32_t x197 = -1;
uint64_t x198 = 5822007431078LLU;
volatile int32_t t52 = 7;
int32_t t53 = -826877787;
static volatile int16_t x217 = -1;
int32_t x234 = 1863859;
int32_t x236 = -14;
uint8_t x248 = UINT8_MAX;
static volatile int32_t t61 = -2;
int16_t x252 = -1;
int32_t t62 = -1;
int8_t x255 = -1;
int8_t x262 = -17;
static int64_t x263 = INT64_MIN;
static uint32_t x267 = UINT32_MAX;
volatile int32_t t69 = 0;
volatile uint64_t x284 = 21164046LLU;
volatile int32_t t72 = -40686;
volatile int32_t x295 = -848110;
int64_t x296 = INT64_MAX;
uint64_t x297 = UINT64_MAX;
int32_t t75 = 16574;
int32_t t77 = -122;
uint64_t x313 = 15091LLU;
uint32_t x316 = UINT32_MAX;
int8_t x326 = INT8_MIN;
uint8_t x331 = UINT8_MAX;
int8_t x334 = INT8_MIN;
volatile int32_t t83 = -489;
volatile int32_t t84 = 202;
int32_t t86 = 912;
volatile int32_t x354 = -1;
volatile int32_t x363 = -1;
static int16_t x371 = INT16_MIN;
int8_t x373 = -15;
static int32_t x376 = INT32_MIN;
int64_t x380 = INT64_MIN;
static int32_t t94 = 20294372;
uint64_t x381 = 82515631LLU;
volatile int32_t x392 = INT32_MIN;
int32_t t97 = 383;
static volatile int64_t x394 = INT64_MIN;
static uint64_t x396 = UINT64_MAX;
uint32_t x397 = 472U;
int16_t x398 = INT16_MIN;
int32_t x399 = INT32_MAX;


void f0(void) {
	static int32_t x1 = -1;
	volatile int64_t x2 = INT64_MAX;
	volatile uint64_t x4 = 1LLU;

	t0 = (((x1^x2)<x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	volatile int16_t x6 = INT16_MAX;
	volatile int16_t x7 = INT16_MIN;
	int8_t x8 = 0;
	volatile int32_t t1 = 28675;

	t1 = (((x5^x6)<x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = -1852369650528LL;
	int8_t x11 = -1;
	int16_t x12 = INT16_MAX;
	int32_t t2 = 1332;

	t2 = (((x9^x10)<x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x15 = INT16_MAX;

	t3 = (((x13^x14)<x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = UINT8_MAX;
	volatile int64_t x18 = INT64_MAX;
	volatile int8_t x19 = INT8_MAX;
	int32_t x20 = -1;
	int32_t t4 = -533869592;

	t4 = (((x17^x18)<x19)<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	int64_t x22 = INT64_MAX;
	volatile int64_t x23 = -1LL;
	int16_t x24 = INT16_MIN;

	t5 = (((x21^x22)<x23)<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	int32_t x26 = INT32_MIN;
	int16_t x27 = -9;
	int16_t x28 = INT16_MIN;
	volatile int32_t t6 = -617245325;

	t6 = (((x25^x26)<x27)<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = INT8_MIN;
	int8_t x31 = INT8_MIN;
	uint8_t x32 = 2U;
	volatile int32_t t7 = -267;

	t7 = (((x29^x30)<x31)<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = 10931200;
	int32_t x34 = INT32_MAX;
	int64_t x36 = -87LL;

	t8 = (((x33^x34)<x35)<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MAX;
	int64_t x38 = INT64_MIN;
	int16_t x39 = INT16_MAX;
	static uint64_t x40 = 1LLU;
	int32_t t9 = -1;

	t9 = (((x37^x38)<x39)<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = INT64_MIN;
	uint32_t x43 = 15U;

	t10 = (((x41^x42)<x43)<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 0LLU;
	static volatile int32_t x46 = 16;
	static uint64_t x47 = 3372145925473LLU;
	int8_t x48 = -1;

	t11 = (((x45^x46)<x47)<=x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -1;
	uint64_t x50 = UINT64_MAX;
	volatile int64_t x51 = INT64_MIN;
	volatile uint64_t x52 = 306409122852677453LLU;
	int32_t t12 = 1;

	t12 = (((x49^x50)<x51)<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint64_t x53 = 742717721151LLU;
	static volatile uint64_t x54 = 417939616195131126LLU;
	int32_t x55 = -1297;
	uint8_t x56 = 62U;
	int32_t t13 = 92;

	t13 = (((x53^x54)<x55)<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x58 = 1;
	static int16_t x59 = INT16_MIN;
	volatile int32_t x60 = INT32_MIN;
	static volatile int32_t t14 = -731366;

	t14 = (((x57^x58)<x59)<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x61 = 21U;
	int8_t x62 = 0;
	int8_t x63 = INT8_MAX;
	static volatile int32_t t15 = -44749135;

	t15 = (((x61^x62)<x63)<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x65 = 1262621947267LLU;
	volatile int8_t x66 = -1;
	int8_t x67 = -35;
	static uint8_t x68 = UINT8_MAX;
	volatile int32_t t16 = 6894;

	t16 = (((x65^x66)<x67)<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -5;
	uint8_t x70 = 1U;
	volatile int64_t x71 = -210985LL;
	int32_t t17 = 1;

	t17 = (((x69^x70)<x71)<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x74 = 17498665183LLU;
	uint32_t x75 = 12596076U;
	int32_t x76 = INT32_MIN;
	int32_t t18 = 691402854;

	t18 = (((x73^x74)<x75)<=x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x78 = -1;
	int8_t x79 = -1;
	static int64_t x80 = -1LL;
	volatile int32_t t19 = -16581;

	t19 = (((x77^x78)<x79)<=x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = UINT64_MAX;
	int16_t x82 = INT16_MIN;
	uint8_t x83 = 39U;
	static uint16_t x84 = UINT16_MAX;

	t20 = (((x81^x82)<x83)<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MAX;
	static int16_t x86 = INT16_MIN;
	uint8_t x87 = UINT8_MAX;
	uint16_t x88 = 43U;
	int32_t t21 = -7851990;

	t21 = (((x85^x86)<x87)<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t t22 = -10;

	t22 = (((x89^x90)<x91)<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 50U;
	static int32_t x95 = INT32_MIN;
	int8_t x96 = INT8_MIN;
	volatile int32_t t23 = 134842530;

	t23 = (((x93^x94)<x95)<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -1;
	volatile int64_t x99 = INT64_MAX;

	t24 = (((x97^x98)<x99)<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x101 = 11425U;
	volatile int8_t x102 = -1;
	static uint8_t x103 = 0U;
	int16_t x104 = INT16_MAX;
	static volatile int32_t t25 = 0;

	t25 = (((x101^x102)<x103)<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = 60;
	uint8_t x106 = 0U;
	int8_t x108 = INT8_MIN;
	int32_t t26 = 2981480;

	t26 = (((x105^x106)<x107)<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x109 = 1U;
	volatile int32_t x110 = 53814220;
	int8_t x111 = 1;
	int32_t t27 = 473779;

	t27 = (((x109^x110)<x111)<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 13043U;
	int16_t x115 = INT16_MIN;
	int8_t x116 = -1;
	volatile int32_t t28 = 1372;

	t28 = (((x113^x114)<x115)<=x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MAX;
	uint16_t x119 = UINT16_MAX;
	static int16_t x120 = INT16_MIN;
	int32_t t29 = 139;

	t29 = (((x117^x118)<x119)<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = 0U;
	uint16_t x122 = 9U;
	int16_t x123 = 15;
	int8_t x124 = -8;
	int32_t t30 = 1874;

	t30 = (((x121^x122)<x123)<=x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	uint32_t x126 = 19U;
	int32_t x127 = INT32_MIN;
	volatile int8_t x128 = 13;
	static int32_t t31 = -88354;

	t31 = (((x125^x126)<x127)<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -1;
	int8_t x130 = INT8_MAX;
	uint32_t x132 = 35U;
	static int32_t t32 = -2825731;

	t32 = (((x129^x130)<x131)<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x133 = INT64_MAX;
	int8_t x134 = INT8_MAX;
	static int64_t x135 = -268285933020172090LL;
	uint16_t x136 = 4U;
	int32_t t33 = -37569152;

	t33 = (((x133^x134)<x135)<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x137 = -118612379;
	int32_t x139 = 964552813;
	int8_t x140 = INT8_MAX;

	t34 = (((x137^x138)<x139)<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x141 = 77;
	static uint8_t x144 = 3U;
	volatile int32_t t35 = 20;

	t35 = (((x141^x142)<x143)<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x146 = UINT8_MAX;
	uint32_t x147 = 110U;
	uint8_t x148 = UINT8_MAX;

	t36 = (((x145^x146)<x147)<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x149 = UINT64_MAX;
	int16_t x152 = INT16_MAX;

	t37 = (((x149^x150)<x151)<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = -1LL;
	int64_t x154 = INT64_MIN;
	uint8_t x155 = 13U;
	int64_t x156 = INT64_MIN;
	volatile int32_t t38 = -3;

	t38 = (((x153^x154)<x155)<=x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -1LL;
	int32_t x158 = -1;
	uint32_t x159 = UINT32_MAX;
	int64_t x160 = INT64_MIN;

	t39 = (((x157^x158)<x159)<=x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x162 = 1833822986U;
	static int64_t x164 = INT64_MIN;
	int32_t t40 = -591659899;

	t40 = (((x161^x162)<x163)<=x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x165 = INT32_MIN;
	volatile uint8_t x166 = UINT8_MAX;
	int8_t x167 = 12;
	uint16_t x168 = UINT16_MAX;
	volatile int32_t t41 = -22;

	t41 = (((x165^x166)<x167)<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {


	t42 = (((x169^x170)<x171)<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MIN;
	volatile int64_t x174 = INT64_MIN;
	volatile uint16_t x175 = UINT16_MAX;
	static uint32_t x176 = UINT32_MAX;

	t43 = (((x173^x174)<x175)<=x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x179 = 72U;
	int32_t x180 = INT32_MIN;
	int32_t t44 = -234;

	t44 = (((x177^x178)<x179)<=x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MIN;
	volatile uint16_t x183 = 14042U;
	static int8_t x184 = INT8_MIN;
	static int32_t t45 = 1545449;

	t45 = (((x181^x182)<x183)<=x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	int16_t x187 = INT16_MIN;
	int16_t x188 = -1;
	int32_t t46 = -375278414;

	t46 = (((x185^x186)<x187)<=x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = 27239077286LLU;
	int16_t x190 = INT16_MIN;
	volatile uint32_t x191 = UINT32_MAX;
	int64_t x192 = INT64_MIN;
	int32_t t47 = 101537;

	t47 = (((x189^x190)<x191)<=x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -117;
	int64_t x194 = -1LL;
	volatile int32_t x195 = 1271;
	int64_t x196 = -7867042LL;
	static volatile int32_t t48 = 972983520;

	t48 = (((x193^x194)<x195)<=x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x199 = 13854739510LL;
	static int64_t x200 = -1LL;
	volatile int32_t t49 = 25479;

	t49 = (((x197^x198)<x199)<=x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MAX;
	uint8_t x202 = 2U;
	uint8_t x203 = UINT8_MAX;
	int16_t x204 = -1;
	int32_t t50 = 0;

	t50 = (((x201^x202)<x203)<=x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x205 = 29968U;
	static volatile int64_t x206 = -1LL;
	int16_t x207 = INT16_MIN;
	static volatile int16_t x208 = 233;
	volatile int32_t t51 = -55112072;

	t51 = (((x205^x206)<x207)<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x209 = UINT32_MAX;
	static int64_t x210 = -533020146222LL;
	int32_t x211 = INT32_MIN;
	int64_t x212 = -20607441LL;

	t52 = (((x209^x210)<x211)<=x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x213 = INT16_MIN;
	uint8_t x214 = 98U;
	static volatile int32_t x215 = INT32_MIN;
	int8_t x216 = -1;

	t53 = (((x213^x214)<x215)<=x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x218 = INT16_MIN;
	static int16_t x219 = INT16_MAX;
	static int8_t x220 = INT8_MIN;
	volatile int32_t t54 = -387175065;

	t54 = (((x217^x218)<x219)<=x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MAX;
	int32_t x222 = INT32_MIN;
	int64_t x223 = INT64_MIN;
	int8_t x224 = 0;
	volatile int32_t t55 = 373277551;

	t55 = (((x221^x222)<x223)<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x225 = UINT64_MAX;
	int8_t x226 = INT8_MIN;
	uint64_t x227 = 1578952583604572LLU;
	static int16_t x228 = -1;
	static volatile int32_t t56 = 2;

	t56 = (((x225^x226)<x227)<=x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MIN;
	static int16_t x230 = INT16_MAX;
	uint32_t x231 = 3U;
	static int64_t x232 = INT64_MIN;
	int32_t t57 = -14;

	t57 = (((x229^x230)<x231)<=x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x233 = INT64_MAX;
	static uint8_t x235 = 35U;
	int32_t t58 = -323605;

	t58 = (((x233^x234)<x235)<=x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = 32274406U;
	volatile int32_t x238 = INT32_MIN;
	static int16_t x239 = INT16_MIN;
	static volatile uint8_t x240 = UINT8_MAX;
	volatile int32_t t59 = -49747;

	t59 = (((x237^x238)<x239)<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x241 = -1344838LL;
	int64_t x242 = -1LL;
	static int64_t x243 = -28915LL;
	int32_t x244 = -1;
	int32_t t60 = -5;

	t60 = (((x241^x242)<x243)<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x245 = -948338;
	int16_t x246 = INT16_MIN;
	volatile uint8_t x247 = UINT8_MAX;

	t61 = (((x245^x246)<x247)<=x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = 1120;
	volatile int64_t x250 = 1384869248825LL;
	int32_t x251 = -1;

	t62 = (((x249^x250)<x251)<=x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MAX;
	int16_t x254 = INT16_MIN;
	static volatile int64_t x256 = -19LL;
	volatile int32_t t63 = 1;

	t63 = (((x253^x254)<x255)<=x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	int16_t x258 = INT16_MIN;
	volatile int16_t x259 = 1733;
	uint8_t x260 = 7U;
	volatile int32_t t64 = 358;

	t64 = (((x257^x258)<x259)<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = -1;
	int16_t x264 = -83;
	static volatile int32_t t65 = -60142;

	t65 = (((x261^x262)<x263)<=x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x265 = INT32_MAX;
	int8_t x266 = INT8_MAX;
	int8_t x268 = 5;
	volatile int32_t t66 = 689634;

	t66 = (((x265^x266)<x267)<=x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = UINT32_MAX;
	int64_t x270 = INT64_MIN;
	uint64_t x271 = 763LLU;
	uint8_t x272 = 16U;
	static volatile int32_t t67 = -963258;

	t67 = (((x269^x270)<x271)<=x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = 311U;
	int16_t x274 = INT16_MIN;
	int8_t x275 = INT8_MIN;
	static volatile uint64_t x276 = UINT64_MAX;
	int32_t t68 = -7;

	t68 = (((x273^x274)<x275)<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MAX;
	int16_t x278 = -1;
	uint8_t x279 = 0U;
	static int8_t x280 = INT8_MIN;

	t69 = (((x277^x278)<x279)<=x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = -55885113;
	volatile uint64_t x282 = 478891711684LLU;
	uint32_t x283 = 265399233U;
	static volatile int32_t t70 = -220;

	t70 = (((x281^x282)<x283)<=x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	int16_t x286 = -3;
	int64_t x287 = INT64_MAX;
	int32_t x288 = -1;
	volatile int32_t t71 = -133353079;

	t71 = (((x285^x286)<x287)<=x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int8_t x289 = 0;
	volatile int32_t x290 = -1;
	int32_t x291 = INT32_MIN;
	int32_t x292 = -1;

	t72 = (((x289^x290)<x291)<=x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x293 = 51867LLU;
	volatile uint64_t x294 = 21100498LLU;
	int32_t t73 = 8;

	t73 = (((x293^x294)<x295)<=x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x298 = INT8_MIN;
	volatile uint16_t x299 = UINT16_MAX;
	int32_t x300 = -48726;
	volatile int32_t t74 = -31469025;

	t74 = (((x297^x298)<x299)<=x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = -1;
	int8_t x302 = INT8_MIN;
	uint16_t x303 = 853U;
	int64_t x304 = INT64_MIN;

	t75 = (((x301^x302)<x303)<=x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = -1;
	uint32_t x306 = UINT32_MAX;
	uint32_t x307 = UINT32_MAX;
	int16_t x308 = INT16_MIN;
	int32_t t76 = 175044;

	t76 = (((x305^x306)<x307)<=x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint32_t x309 = UINT32_MAX;
	volatile int8_t x310 = -1;
	int32_t x311 = INT32_MIN;
	uint32_t x312 = 43U;

	t77 = (((x309^x310)<x311)<=x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x314 = UINT64_MAX;
	volatile uint8_t x315 = UINT8_MAX;
	volatile int32_t t78 = 87798294;

	t78 = (((x313^x314)<x315)<=x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = 23U;
	int64_t x318 = INT64_MIN;
	int8_t x319 = -1;
	static int16_t x320 = INT16_MAX;
	static volatile int32_t t79 = 782369415;

	t79 = (((x317^x318)<x319)<=x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = -1;
	int16_t x322 = INT16_MAX;
	int64_t x323 = -1LL;
	volatile uint16_t x324 = 44U;
	int32_t t80 = 120831141;

	t80 = (((x321^x322)<x323)<=x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x325 = INT16_MIN;
	uint16_t x327 = 89U;
	int16_t x328 = INT16_MIN;
	volatile int32_t t81 = -267555921;

	t81 = (((x325^x326)<x327)<=x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 3U;
	int16_t x330 = INT16_MIN;
	uint8_t x332 = 37U;
	int32_t t82 = 0;

	t82 = (((x329^x330)<x331)<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x333 = INT16_MIN;
	uint8_t x335 = 26U;
	static int16_t x336 = -10738;

	t83 = (((x333^x334)<x335)<=x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MAX;
	static volatile int16_t x338 = -1;
	static int64_t x339 = 428509LL;
	int8_t x340 = 43;

	t84 = (((x337^x338)<x339)<=x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x341 = 218;
	uint16_t x342 = 2U;
	int8_t x343 = 3;
	uint32_t x344 = UINT32_MAX;
	volatile int32_t t85 = 0;

	t85 = (((x341^x342)<x343)<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x345 = -1680;
	int8_t x346 = INT8_MAX;
	static uint32_t x347 = 24898U;
	volatile int64_t x348 = -1303328631499LL;

	t86 = (((x345^x346)<x347)<=x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MAX;
	int8_t x350 = INT8_MIN;
	int8_t x351 = -1;
	uint64_t x352 = UINT64_MAX;
	volatile int32_t t87 = 11;

	t87 = (((x349^x350)<x351)<=x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = 14749U;
	int8_t x355 = -1;
	int64_t x356 = -1LL;
	int32_t t88 = 3;

	t88 = (((x353^x354)<x355)<=x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	int16_t x358 = INT16_MIN;
	volatile int32_t x359 = -530;
	int16_t x360 = INT16_MIN;
	static int32_t t89 = -323864;

	t89 = (((x357^x358)<x359)<=x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x361 = 523246U;
	int8_t x362 = 18;
	uint8_t x364 = 1U;
	int32_t t90 = 208870645;

	t90 = (((x361^x362)<x363)<=x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = 10553893;
	volatile int8_t x366 = -47;
	volatile int32_t x367 = -1;
	int16_t x368 = 15530;
	int32_t t91 = 108;

	t91 = (((x365^x366)<x367)<=x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = 4;
	int8_t x370 = 0;
	int32_t x372 = 9;
	int32_t t92 = -175271;

	t92 = (((x369^x370)<x371)<=x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x374 = UINT8_MAX;
	int8_t x375 = -1;
	volatile int32_t t93 = -13852;

	t93 = (((x373^x374)<x375)<=x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x377 = 3014;
	static int8_t x378 = INT8_MAX;
	volatile uint16_t x379 = 11964U;

	t94 = (((x377^x378)<x379)<=x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x382 = -1;
	int64_t x383 = -1LL;
	int64_t x384 = -1LL;
	volatile int32_t t95 = -4;

	t95 = (((x381^x382)<x383)<=x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x385 = -1;
	int32_t x386 = INT32_MIN;
	int64_t x387 = INT64_MIN;
	int16_t x388 = -1;
	volatile int32_t t96 = 31;

	t96 = (((x385^x386)<x387)<=x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = 18657U;
	static int16_t x390 = INT16_MAX;
	volatile uint32_t x391 = 110U;

	t97 = (((x389^x390)<x391)<=x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MIN;
	static uint64_t x395 = 137211LLU;
	volatile int32_t t98 = 107;

	t98 = (((x393^x394)<x395)<=x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x400 = 11U;
	volatile int32_t t99 = 1;

	t99 = (((x397^x398)<x399)<=x400);

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

