#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = INT64_MAX;
int16_t x3 = INT16_MIN;
int32_t x10 = INT32_MIN;
volatile int64_t x14 = 163841LL;
uint16_t x16 = UINT16_MAX;
static uint32_t x21 = 7387U;
int64_t x23 = INT64_MIN;
int16_t x31 = INT16_MIN;
int32_t x34 = -1;
volatile int32_t t6 = 4807617;
uint64_t x37 = 125932244513158495LLU;
static uint16_t x48 = UINT16_MAX;
volatile uint64_t t8 = 2381457232778LLU;
volatile int32_t x52 = 7572;
int8_t x60 = 7;
int64_t t11 = -177813942726LL;
int8_t x66 = -1;
uint64_t x73 = 53414670115LLU;
int32_t x81 = -7739071;
uint16_t x83 = UINT16_MAX;
volatile uint64_t x87 = 1118411241LLU;
uint64_t x88 = 923038539284538LLU;
volatile uint64_t t18 = 1LLU;
uint32_t x100 = 140736U;
volatile uint32_t t21 = 30951268U;
static int64_t x103 = INT64_MIN;
static int32_t x108 = 24;
volatile int32_t x112 = INT32_MIN;
static volatile uint64_t t25 = 1556135081LLU;
int8_t x118 = 1;
static volatile int16_t x120 = -3588;
static int8_t x122 = INT8_MIN;
int64_t t28 = 261897837182385LL;
uint64_t x135 = 777164193005LLU;
static int32_t t31 = 3694;
uint64_t x147 = 47898519253544LLU;
static int16_t x148 = 2271;
volatile int8_t x154 = INT8_MAX;
uint8_t x168 = 1U;
int8_t x172 = INT8_MIN;
int8_t x175 = INT8_MIN;
static int32_t t40 = 1496816;
static volatile int16_t x180 = INT16_MAX;
static int64_t x183 = -7674465352503LL;
volatile uint16_t x185 = UINT16_MAX;
int32_t x186 = INT32_MAX;
int16_t x188 = -7;
static volatile int16_t x191 = INT16_MIN;
int8_t x192 = 2;
uint16_t x197 = 742U;
volatile uint8_t x202 = UINT8_MAX;
int64_t t47 = 2979LL;
static uint16_t x213 = UINT16_MAX;
int32_t t49 = 80595;
volatile int16_t x219 = INT16_MIN;
uint8_t x227 = UINT8_MAX;
static uint8_t x228 = 82U;
uint16_t x230 = UINT16_MAX;
volatile uint64_t t54 = 0LLU;
volatile uint64_t x239 = UINT64_MAX;
volatile uint8_t x252 = 1U;
uint8_t x256 = 124U;
volatile uint32_t x258 = 192052U;
static int8_t x260 = INT8_MAX;
static uint8_t x261 = 10U;
int32_t x266 = 1;
static int32_t t62 = 114;
int64_t t63 = -90340LL;
uint8_t x273 = UINT8_MAX;
int64_t x274 = INT64_MAX;
static int64_t t64 = -876640LL;
int32_t x280 = -161;
uint64_t t67 = 1LLU;
volatile int8_t x295 = 31;
int64_t t69 = -5921LL;
static int64_t x298 = INT64_MAX;
static int64_t t70 = 752015319416LL;
int32_t x302 = INT32_MIN;
static volatile uint64_t x306 = 45069476LLU;
static int8_t x311 = 1;
static volatile uint64_t t74 = 67827328251LLU;
static int64_t x321 = -315754144059LL;
volatile uint64_t x328 = UINT64_MAX;
volatile uint32_t t79 = 16U;
int16_t x339 = 221;
int8_t x344 = 10;
int32_t x346 = -68;
static uint64_t t82 = 5LLU;
int8_t x361 = INT8_MAX;
volatile int32_t x364 = INT32_MIN;
static volatile int16_t x365 = INT16_MIN;
volatile int16_t x369 = INT16_MAX;
int64_t x372 = -178106332345LL;
static int32_t x373 = 125;
int32_t t89 = -1;
int32_t x378 = INT32_MIN;
static int32_t x384 = -84669552;
uint8_t x386 = 0U;
int16_t x389 = INT16_MIN;
uint32_t x391 = 2689U;
volatile uint32_t t93 = 5U;
static int64_t x394 = INT64_MIN;
volatile int64_t t95 = 541LL;
uint64_t t96 = 3893979553998LLU;
int8_t x411 = 18;
volatile uint16_t x413 = 54U;
static uint8_t x416 = UINT8_MAX;


void f0(void) {
	int32_t x1 = INT32_MIN;
	int8_t x4 = INT8_MIN;
	int64_t t0 = 449LL;

	t0 = (((x1^x2)^x3)%x4);

	if (t0 != 127LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = INT32_MIN;
	uint8_t x11 = UINT8_MAX;
	int32_t x12 = 113;
	volatile int32_t t1 = -1275759;

	t1 = (((x9^x10)^x11)%x12);

	if (t1 != 29) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = -80004716770LL;
	uint64_t x15 = 168417293LLU;
	static uint64_t t2 = 8419190011107LLU;

	t2 = (((x13^x14)^x15)%x16);

	if (t2 != 5204LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x17 = -1364;
	uint16_t x18 = 0U;
	volatile uint16_t x19 = 59U;
	int16_t x20 = -1;
	volatile int32_t t3 = 0;

	t3 = (((x17^x18)^x19)%x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x22 = 6930236U;
	volatile int16_t x24 = 1;
	volatile int64_t t4 = -833987100487LL;

	t4 = (((x21^x22)^x23)%x24);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x29 = -12;
	int32_t x30 = 1;
	volatile uint32_t x32 = UINT32_MAX;
	static uint32_t t5 = 35U;

	t5 = (((x29^x30)^x31)%x32);

	if (t5 != 32757U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = 11;
	static int32_t x35 = -3033173;
	int16_t x36 = -1;

	t6 = (((x33^x34)^x35)%x36);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x38 = 1;
	static volatile int8_t x39 = 54;
	int64_t x40 = INT64_MIN;
	volatile uint64_t t7 = 358951737LLU;

	t7 = (((x37^x38)^x39)%x40);

	if (t7 != 125932244513158504LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x45 = UINT64_MAX;
	int64_t x46 = -1LL;
	int16_t x47 = -7986;

	t8 = (((x45^x46)^x47)%x48);

	if (t8 != 57550LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x49 = 2U;
	static int8_t x50 = INT8_MIN;
	int8_t x51 = -52;
	volatile int32_t t9 = 2102;

	t9 = (((x49^x50)^x51)%x52);

	if (t9 != 78) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x53 = 39LLU;
	volatile int32_t x54 = -156891;
	uint64_t x55 = 3520094188315LLU;
	int16_t x56 = INT16_MIN;
	volatile uint64_t t10 = 16460780006044951LLU;

	t10 = (((x53^x54)^x55)%x56);

	if (t10 != 18446740553615484953LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x57 = 705U;
	int64_t x58 = INT64_MAX;
	static uint32_t x59 = 86946U;

	t11 = (((x57^x58)^x59)%x60);

	if (t11 != 2LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x61 = -1;
	static uint32_t x62 = UINT32_MAX;
	int64_t x63 = INT64_MIN;
	int64_t x64 = -55940205LL;
	static int64_t t12 = 216351LL;

	t12 = (((x61^x62)^x63)%x64);

	if (t12 != -21169028LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x65 = 93;
	volatile int8_t x67 = 1;
	int64_t x68 = INT64_MIN;
	static int64_t t13 = -1958LL;

	t13 = (((x65^x66)^x67)%x68);

	if (t13 != -93LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x69 = UINT16_MAX;
	int16_t x70 = INT16_MIN;
	volatile int64_t x71 = -43LL;
	static int8_t x72 = INT8_MAX;
	static volatile int64_t t14 = 51066LL;

	t14 = (((x69^x70)^x71)%x72);

	if (t14 != 44LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x74 = INT8_MAX;
	uint32_t x75 = 55U;
	volatile int16_t x76 = -1;
	uint64_t t15 = 5271028LLU;

	t15 = (((x73^x74)^x75)%x76);

	if (t15 != 53414670187LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x77 = INT64_MIN;
	uint64_t x78 = 179255652LLU;
	int16_t x79 = 10609;
	static uint16_t x80 = UINT16_MAX;
	uint64_t t16 = 1LLU;

	t16 = (((x77^x78)^x79)%x80);

	if (t16 != 39620LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x82 = 432U;
	int64_t x84 = 28764353487750173LL;
	static volatile int64_t t17 = 12232LL;

	t17 = (((x81^x82)^x83)%x84);

	if (t17 != 4287174414LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x85 = 1U;
	static volatile uint32_t x86 = 9015U;

	t18 = (((x85^x86)^x87)%x88);

	if (t18 != 1118419679LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x89 = INT64_MIN;
	static int16_t x90 = -1;
	int8_t x91 = INT8_MIN;
	int64_t x92 = -367LL;
	static volatile int64_t t19 = -218820LL;

	t19 = (((x89^x90)^x91)%x92);

	if (t19 != -205LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x93 = INT64_MIN;
	uint64_t x94 = 20256005025258404LLU;
	uint64_t x95 = 6713039LLU;
	int8_t x96 = 1;
	uint64_t t20 = 413441562382582589LLU;

	t20 = (((x93^x94)^x95)%x96);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x97 = 2U;
	int16_t x98 = INT16_MIN;
	int8_t x99 = INT8_MIN;

	t21 = (((x97^x98)^x99)%x100);

	if (t21 != 32642U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x101 = 3271U;
	uint16_t x102 = 27684U;
	uint8_t x104 = 38U;
	static volatile int64_t t22 = 9LL;

	t22 = (((x101^x102)^x103)%x104);

	if (t22 != -29LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x105 = -1;
	int32_t x106 = INT32_MAX;
	uint16_t x107 = UINT16_MAX;
	int32_t t23 = -59501;

	t23 = (((x105^x106)^x107)%x108);

	if (t23 != -17) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x109 = INT16_MAX;
	volatile int32_t x110 = INT32_MAX;
	static int8_t x111 = INT8_MIN;
	volatile int32_t t24 = 0;

	t24 = (((x109^x110)^x111)%x112);

	if (t24 != -2147451008) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x113 = UINT16_MAX;
	volatile uint64_t x114 = UINT64_MAX;
	static volatile int16_t x115 = INT16_MAX;
	static int16_t x116 = 56;

	t25 = (((x113^x114)^x115)%x116);

	if (t25 != 7LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x117 = -1;
	int16_t x119 = INT16_MIN;
	static volatile int32_t t26 = -470;

	t26 = (((x117^x118)^x119)%x120);

	if (t26 != 474) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x121 = -2;
	int64_t x123 = INT64_MIN;
	int16_t x124 = INT16_MAX;
	int64_t t27 = 105076666155378022LL;

	t27 = (((x121^x122)^x123)%x124);

	if (t27 != -32649LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x125 = -1LL;
	int64_t x126 = -3313388420LL;
	volatile int8_t x127 = 0;
	static volatile int32_t x128 = INT32_MIN;

	t28 = (((x125^x126)^x127)%x128);

	if (t28 != 1165904771LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x129 = 2;
	int32_t x130 = INT32_MAX;
	volatile uint8_t x131 = 3U;
	static volatile uint32_t x132 = 3373U;
	uint32_t t29 = 43U;

	t29 = (((x129^x130)^x131)%x132);

	if (t29 != 2482U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x133 = UINT64_MAX;
	volatile int32_t x134 = 5502386;
	uint16_t x136 = UINT16_MAX;
	static uint64_t t30 = 5204LLU;

	t30 = (((x133^x134)^x135)%x136);

	if (t30 != 33568LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x137 = -1;
	int8_t x138 = 21;
	volatile int8_t x139 = INT8_MAX;
	int32_t x140 = -1;

	t31 = (((x137^x138)^x139)%x140);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = INT8_MAX;
	int8_t x142 = INT8_MIN;
	static int64_t x143 = 330748833322LL;
	volatile uint32_t x144 = UINT32_MAX;
	int64_t t32 = -1044239LL;

	t32 = (((x141^x142)^x143)%x144);

	if (t32 != -36351608LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x145 = -1;
	int32_t x146 = -1;
	uint64_t t33 = 20042LLU;

	t33 = (((x145^x146)^x147)%x148);

	if (t33 != 1766LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint8_t x149 = 3U;
	int16_t x150 = -1;
	int8_t x151 = 28;
	uint64_t x152 = 2982327401301478LLU;
	volatile uint64_t t34 = 681028056223494733LLU;

	t34 = (((x149^x150)^x151)%x152);

	if (t34 != 1049096659910154LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x153 = UINT64_MAX;
	int64_t x155 = INT64_MIN;
	int64_t x156 = 14255569298410LL;
	volatile uint64_t t35 = 3578LLU;

	t35 = (((x153^x154)^x155)%x156);

	if (t35 != 4445214207270LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x157 = 3U;
	int16_t x158 = INT16_MAX;
	uint16_t x159 = UINT16_MAX;
	int32_t x160 = -1;
	int32_t t36 = 6841;

	t36 = (((x157^x158)^x159)%x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x161 = INT64_MIN;
	int16_t x162 = INT16_MIN;
	static volatile uint16_t x163 = 975U;
	uint32_t x164 = UINT32_MAX;
	int64_t t37 = -3318821408124LL;

	t37 = (((x161^x162)^x163)%x164);

	if (t37 != 2147451855LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x165 = INT8_MIN;
	int8_t x166 = 1;
	uint32_t x167 = 23U;
	volatile uint32_t t38 = 177U;

	t38 = (((x165^x166)^x167)%x168);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x169 = 3068064627477727LLU;
	int16_t x170 = INT16_MIN;
	static int8_t x171 = -1;
	uint64_t t39 = 1063358966351LLU;

	t39 = (((x169^x170)^x171)%x172);

	if (t39 != 3068064627471136LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x173 = 1271879;
	static volatile uint8_t x174 = UINT8_MAX;
	int16_t x176 = INT16_MAX;

	t40 = (((x173^x174)^x175)%x176);

	if (t40 != -26862) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x177 = -1LL;
	int16_t x178 = INT16_MIN;
	int8_t x179 = INT8_MIN;
	static volatile int64_t t41 = 1313501984LL;

	t41 = (((x177^x178)^x179)%x180);

	if (t41 != -32641LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x181 = INT32_MIN;
	uint16_t x182 = 776U;
	int8_t x184 = -1;
	static volatile int64_t t42 = -220564868LL;

	t42 = (((x181^x182)^x183)%x184);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x187 = INT64_MIN;
	volatile int64_t t43 = -184656578078738887LL;

	t43 = (((x185^x186)^x187)%x188);

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x189 = INT32_MIN;
	uint8_t x190 = 10U;
	static int32_t t44 = -5325327;

	t44 = (((x189^x190)^x191)%x192);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x193 = 43;
	int32_t x194 = INT32_MAX;
	uint8_t x195 = UINT8_MAX;
	int32_t x196 = 5;
	volatile int32_t t45 = 42;

	t45 = (((x193^x194)^x195)%x196);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x198 = UINT64_MAX;
	volatile int64_t x199 = INT64_MAX;
	static int16_t x200 = INT16_MIN;
	uint64_t t46 = 504142448LLU;

	t46 = (((x197^x198)^x199)%x200);

	if (t46 != 9223372036854776550LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x201 = 485231LL;
	static int64_t x203 = INT64_MIN;
	static int8_t x204 = -38;

	t47 = (((x201^x202)^x203)%x204);

	if (t47 != -14LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x205 = UINT16_MAX;
	int32_t x206 = INT32_MIN;
	int32_t x207 = INT32_MIN;
	int32_t x208 = 57;
	int32_t t48 = -225746283;

	t48 = (((x205^x206)^x207)%x208);

	if (t48 != 42) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x214 = 13U;
	int32_t x215 = 288;
	int16_t x216 = INT16_MIN;

	t49 = (((x213^x214)^x215)%x216);

	if (t49 != 32466) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x217 = -1;
	int16_t x218 = -359;
	int64_t x220 = 62146388965582LL;
	static volatile int64_t t50 = -1LL;

	t50 = (((x217^x218)^x219)%x220);

	if (t50 != -32410LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x221 = -1;
	static int16_t x222 = INT16_MAX;
	int32_t x223 = 11423;
	int32_t x224 = 15;
	static volatile int32_t t51 = -31290;

	t51 = (((x221^x222)^x223)%x224);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x225 = INT64_MAX;
	int8_t x226 = -1;
	int64_t t52 = -6476569621368460LL;

	t52 = (((x225^x226)^x227)%x228);

	if (t52 != -81LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x229 = -1100690874090458LL;
	uint16_t x231 = 45U;
	volatile uint32_t x232 = UINT32_MAX;
	volatile int64_t t53 = 3138469182565LL;

	t53 = (((x229^x230)^x231)%x232);

	if (t53 != -2425496862LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x233 = 3;
	int32_t x234 = INT32_MAX;
	uint64_t x235 = UINT64_MAX;
	int16_t x236 = INT16_MIN;

	t54 = (((x233^x234)^x235)%x236);

	if (t54 != 18446744071562067971LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x237 = 61LLU;
	uint8_t x238 = 52U;
	int16_t x240 = INT16_MIN;
	volatile uint64_t t55 = 5LLU;

	t55 = (((x237^x238)^x239)%x240);

	if (t55 != 32758LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x241 = 25U;
	int32_t x242 = 120;
	volatile int8_t x243 = INT8_MIN;
	uint64_t x244 = 85996488241776996LLU;
	volatile uint64_t t56 = 13556096LLU;

	t56 = (((x241^x242)^x243)%x244);

	if (t56 != 43495589969274441LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x245 = 248LLU;
	uint64_t x246 = 325LLU;
	int8_t x247 = -1;
	int8_t x248 = INT8_MAX;
	volatile uint64_t t57 = 2127183405LLU;

	t57 = (((x245^x246)^x247)%x248);

	if (t57 != 64LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x249 = INT32_MAX;
	volatile uint16_t x250 = 30766U;
	int32_t x251 = INT32_MAX;
	volatile int32_t t58 = -926992;

	t58 = (((x249^x250)^x251)%x252);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x253 = 193581875502LLU;
	int64_t x254 = INT64_MIN;
	volatile int8_t x255 = INT8_MAX;
	uint64_t t59 = 2923253418416223LLU;

	t59 = (((x253^x254)^x255)%x256);

	if (t59 != 77LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x257 = 3;
	uint8_t x259 = 7U;
	static volatile uint32_t t60 = 236U;

	t60 = (((x257^x258)^x259)%x260);

	if (t60 != 24U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x262 = -1LL;
	static uint8_t x263 = UINT8_MAX;
	int64_t x264 = -1LL;
	int64_t t61 = -6890831624569571LL;

	t61 = (((x261^x262)^x263)%x264);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x265 = INT8_MIN;
	volatile int8_t x267 = -1;
	int32_t x268 = -1;

	t62 = (((x265^x266)^x267)%x268);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x269 = INT16_MIN;
	volatile int64_t x270 = INT64_MIN;
	uint16_t x271 = 7262U;
	static int32_t x272 = INT32_MIN;

	t63 = (((x269^x270)^x271)%x272);

	if (t63 != 2147458142LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x275 = -250;
	static volatile uint32_t x276 = 174900U;

	t64 = (((x273^x274)^x275)%x276);

	if (t64 != -56102LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x277 = 7611733014LL;
	volatile int16_t x278 = INT16_MIN;
	static uint8_t x279 = UINT8_MAX;
	volatile int64_t t65 = -1177658491955977002LL;

	t65 = (((x277^x278)^x279)%x280);

	if (t65 != -100LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x281 = INT16_MIN;
	uint32_t x282 = UINT32_MAX;
	uint16_t x283 = UINT16_MAX;
	static uint32_t x284 = UINT32_MAX;
	uint32_t t66 = 9525U;

	t66 = (((x281^x282)^x283)%x284);

	if (t66 != 32768U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x285 = 54241025832080541LLU;
	int32_t x286 = 63;
	int64_t x287 = INT64_MIN;
	static int16_t x288 = INT16_MAX;

	t67 = (((x285^x286)^x287)%x288);

	if (t67 != 5206LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x289 = 155288167U;
	int32_t x290 = INT32_MIN;
	volatile uint16_t x291 = UINT16_MAX;
	uint32_t x292 = UINT32_MAX;
	static volatile uint32_t t68 = 6820895U;

	t68 = (((x289^x290)^x291)%x292);

	if (t68 != 2302770584U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x293 = INT64_MAX;
	volatile int64_t x294 = 899512LL;
	uint16_t x296 = 15329U;

	t69 = (((x293^x294)^x295)%x296);

	if (t69 != 14262LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x297 = -25880372;
	volatile int32_t x299 = INT32_MIN;
	int8_t x300 = 6;

	t70 = (((x297^x298)^x299)%x300);

	if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x301 = 88U;
	int8_t x303 = -23;
	int8_t x304 = -10;
	int32_t t71 = -8;

	t71 = (((x301^x302)^x303)%x304);

	if (t71 != 9) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x305 = -273;
	volatile uint16_t x307 = 2646U;
	uint16_t x308 = UINT16_MAX;
	uint64_t t72 = 745844101450015433LLU;

	t72 = (((x305^x306)^x307)%x308);

	if (t72 != 15726LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x309 = 5U;
	int8_t x310 = INT8_MIN;
	int8_t x312 = INT8_MIN;
	volatile int32_t t73 = 1;

	t73 = (((x309^x310)^x311)%x312);

	if (t73 != -124) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x313 = INT16_MIN;
	volatile uint8_t x314 = 27U;
	uint16_t x315 = UINT16_MAX;
	uint64_t x316 = UINT64_MAX;

	t74 = (((x313^x314)^x315)%x316);

	if (t74 != 18446744073709518820LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x317 = INT16_MIN;
	int32_t x318 = 47;
	static int64_t x319 = INT64_MIN;
	uint32_t x320 = 453146693U;
	static volatile int64_t t75 = 24020875199848LL;

	t75 = (((x317^x318)^x319)%x320);

	if (t75 != 106347350LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x322 = 114U;
	volatile int64_t x323 = INT64_MIN;
	static int8_t x324 = INT8_MAX;
	int64_t t76 = -1753LL;

	t76 = (((x321^x322)^x323)%x324);

	if (t76 != 9LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x325 = INT32_MAX;
	int16_t x326 = INT16_MIN;
	uint8_t x327 = 52U;
	uint64_t t77 = 1846089LLU;

	t77 = (((x325^x326)^x327)%x328);

	if (t77 != 18446744071562100683LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x329 = -136451230;
	uint32_t x330 = 153265U;
	volatile uint8_t x331 = UINT8_MAX;
	int64_t x332 = 6077695676016LL;
	int64_t t78 = -1384192925811895983LL;

	t78 = (((x329^x330)^x331)%x332);

	if (t78 != 4158635308LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x333 = -1;
	int16_t x334 = -1;
	uint32_t x335 = 1041U;
	static int8_t x336 = 6;

	t79 = (((x333^x334)^x335)%x336);

	if (t79 != 3U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x337 = -1;
	uint64_t x338 = UINT64_MAX;
	static int8_t x340 = INT8_MIN;
	uint64_t t80 = 6755474610093LLU;

	t80 = (((x337^x338)^x339)%x340);

	if (t80 != 221LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x341 = 1796;
	volatile uint64_t x342 = 7LLU;
	static int8_t x343 = 12;
	uint64_t t81 = 6411710304854957482LLU;

	t81 = (((x341^x342)^x343)%x344);

	if (t81 != 7LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x345 = -1;
	int32_t x347 = -3879394;
	static uint64_t x348 = 1439514LLU;

	t82 = (((x345^x346)^x347)%x348);

	if (t82 != 824049LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x349 = -1;
	static int64_t x350 = INT64_MAX;
	volatile uint32_t x351 = 50319287U;
	volatile uint64_t x352 = 6LLU;
	static volatile uint64_t t83 = 27385565292LLU;

	t83 = (((x349^x350)^x351)%x352);

	if (t83 != 1LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x353 = 24712249754LLU;
	uint8_t x354 = 63U;
	static int16_t x355 = 3948;
	volatile uint8_t x356 = 1U;
	uint64_t t84 = 291996820441LLU;

	t84 = (((x353^x354)^x355)%x356);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x357 = UINT16_MAX;
	int32_t x358 = INT32_MAX;
	int16_t x359 = INT16_MIN;
	static volatile uint64_t x360 = UINT64_MAX;
	volatile uint64_t t85 = 25LLU;

	t85 = (((x357^x358)^x359)%x360);

	if (t85 != 18446744071562100736LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x362 = 7U;
	static uint16_t x363 = 1U;
	int32_t t86 = 43825;

	t86 = (((x361^x362)^x363)%x364);

	if (t86 != 121) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x366 = 1U;
	int8_t x367 = -43;
	int8_t x368 = 6;
	int32_t t87 = -1;

	t87 = (((x365^x366)^x367)%x368);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x370 = 0;
	uint8_t x371 = 52U;
	static volatile int64_t t88 = -26240LL;

	t88 = (((x369^x370)^x371)%x372);

	if (t88 != 32715LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x374 = 1U;
	int16_t x375 = INT16_MIN;
	int16_t x376 = INT16_MAX;

	t89 = (((x373^x374)^x375)%x376);

	if (t89 != -32644) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x377 = -1;
	volatile uint16_t x379 = 4859U;
	int8_t x380 = INT8_MIN;
	int32_t t90 = 185389;

	t90 = (((x377^x378)^x379)%x380);

	if (t90 != 4) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x381 = 14145795131LL;
	int32_t x382 = 1595515;
	int64_t x383 = -1LL;
	static volatile int64_t t91 = -51733LL;

	t91 = (((x381^x382)^x383)%x384);

	if (t91 != -7567153LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x385 = 24U;
	int16_t x387 = -18;
	int64_t x388 = -1LL;
	int64_t t92 = -44377118LL;

	t92 = (((x385^x386)^x387)%x388);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x390 = INT8_MIN;
	int8_t x392 = INT8_MIN;

	t93 = (((x389^x390)^x391)%x392);

	if (t93 != 29953U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x393 = -1LL;
	int64_t x395 = 1LL;
	int64_t x396 = -1LL;
	int64_t t94 = -52825LL;

	t94 = (((x393^x394)^x395)%x396);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x397 = INT64_MAX;
	static int8_t x398 = 1;
	int64_t x399 = -3876741878535LL;
	int64_t x400 = 14175424502925LL;

	t95 = (((x397^x398)^x399)%x400);

	if (t95 != -628464219698LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x401 = 39493672613545926LLU;
	uint16_t x402 = UINT16_MAX;
	static int32_t x403 = INT32_MAX;
	uint64_t x404 = 362485285979LLU;

	t96 = (((x401^x402)^x403)%x404);

	if (t96 != 176037355198LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x405 = 9201919;
	int8_t x406 = INT8_MIN;
	int64_t x407 = -1330229182724544222LL;
	static volatile uint64_t x408 = 413914013447246106LLU;
	static uint64_t t97 = 8719454323LLU;

	t97 = (((x405^x406)^x407)%x408);

	if (t97 != 88487142391483151LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x409 = -9;
	int32_t x410 = INT32_MIN;
	volatile int16_t x412 = INT16_MIN;
	int32_t t98 = 45266766;

	t98 = (((x409^x410)^x411)%x412);

	if (t98 != 32741) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x414 = -1;
	static uint32_t x415 = UINT32_MAX;
	uint32_t t99 = 1874U;

	t99 = (((x413^x414)^x415)%x416);

	if (t99 != 54U) { NG(); } else { ; }
	
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

