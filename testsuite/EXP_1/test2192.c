#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x7 = INT8_MAX;
uint16_t x8 = 11U;
uint16_t x9 = 3U;
int8_t x13 = -9;
int64_t x14 = -580LL;
static uint8_t x21 = UINT8_MAX;
uint64_t x23 = 121103LLU;
volatile int32_t t6 = -188;
static int32_t t8 = -335331403;
int32_t x37 = INT32_MAX;
uint32_t x49 = 259U;
static volatile int16_t x56 = -505;
int64_t x58 = -1LL;
volatile int64_t x60 = -1LL;
uint8_t x62 = 39U;
static volatile uint16_t x71 = 12U;
uint8_t x74 = 78U;
uint64_t x75 = 70LLU;
static int32_t t18 = -8;
uint32_t x82 = 1013U;
volatile int32_t t21 = -792216689;
static uint8_t x90 = UINT8_MAX;
uint32_t x92 = 1694861079U;
int32_t t22 = 16788828;
int64_t x93 = -1LL;
static uint16_t x102 = 7U;
static int16_t x103 = -854;
int32_t x108 = INT32_MAX;
int32_t x112 = INT32_MIN;
int32_t t28 = 0;
int32_t x117 = -1;
static uint64_t x119 = 323685102LLU;
static int8_t x122 = INT8_MAX;
int8_t x132 = 0;
volatile uint8_t x138 = UINT8_MAX;
volatile int32_t t34 = 172;
static uint64_t x141 = 2731626547LLU;
int32_t x157 = -20439;
static uint16_t x158 = UINT16_MAX;
uint16_t x159 = 223U;
volatile int32_t t40 = 165732768;
int8_t x171 = INT8_MAX;
volatile int32_t t42 = 0;
uint64_t x175 = 41960237802LLU;
int8_t x176 = INT8_MAX;
static int64_t x181 = INT64_MIN;
int16_t x183 = INT16_MAX;
int8_t x186 = INT8_MAX;
static uint64_t x189 = UINT64_MAX;
volatile int32_t t48 = -1;
int8_t x204 = INT8_MIN;
static uint32_t x210 = UINT32_MAX;
uint8_t x211 = 2U;
int8_t x222 = 1;
static volatile int16_t x223 = 5266;
int8_t x230 = -1;
uint8_t x232 = UINT8_MAX;
volatile int32_t t57 = 23153;
uint16_t x234 = 5U;
volatile int16_t x249 = INT16_MIN;
uint64_t x251 = UINT64_MAX;
int64_t x255 = 418048LL;
int32_t t63 = -443875939;
int8_t x259 = INT8_MIN;
int32_t t64 = 12;
uint8_t x261 = 7U;
uint32_t x284 = 47U;
int32_t t70 = 7;
static int8_t x286 = INT8_MAX;
volatile int32_t t71 = 710;
int8_t x289 = -1;
static uint8_t x292 = 10U;
volatile uint32_t x304 = 1670541U;
uint16_t x313 = UINT16_MAX;
uint32_t x329 = UINT32_MAX;
uint64_t x330 = 903451204012475LLU;
int32_t x336 = -1;
volatile int32_t x337 = 145421931;
volatile uint32_t x344 = UINT32_MAX;
uint16_t x350 = 16251U;
volatile uint64_t x364 = 199401LLU;
int64_t x372 = INT64_MIN;
int64_t x393 = INT64_MIN;
static int16_t x396 = -3315;
volatile int64_t x399 = INT64_MIN;
volatile int32_t t99 = 49;


void f0(void) {
	volatile int64_t x1 = INT64_MAX;
	int8_t x2 = 2;
	uint32_t x3 = 590198296U;
	int16_t x4 = INT16_MAX;
	volatile int32_t t0 = -109709;

	t0 = (((x1^x2)^x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	static int16_t x6 = 16;
	static volatile int32_t t1 = 1121918;

	t1 = (((x5^x6)^x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x10 = UINT16_MAX;
	uint16_t x11 = UINT16_MAX;
	static int16_t x12 = INT16_MIN;
	int32_t t2 = 1;

	t2 = (((x9^x10)^x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x15 = INT16_MAX;
	static volatile uint32_t x16 = 122601426U;
	int32_t t3 = -3103330;

	t3 = (((x13^x14)^x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 1197557992LLU;
	static int64_t x18 = -53977351214520LL;
	uint16_t x19 = UINT16_MAX;
	static int16_t x20 = -29;
	volatile int32_t t4 = 1;

	t4 = (((x17^x18)^x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x22 = UINT16_MAX;
	static int32_t x24 = -1891002;
	volatile int32_t t5 = 36865;

	t5 = (((x21^x22)^x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 112U;
	volatile int8_t x26 = INT8_MIN;
	int16_t x27 = INT16_MIN;
	volatile int32_t x28 = INT32_MAX;

	t6 = (((x25^x26)^x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = INT32_MIN;
	int16_t x30 = 1;
	int16_t x31 = 224;
	int8_t x32 = -1;
	int32_t t7 = -44294;

	t7 = (((x29^x30)^x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = UINT64_MAX;
	static uint32_t x34 = UINT32_MAX;
	uint8_t x35 = 3U;
	int32_t x36 = INT32_MIN;

	t8 = (((x33^x34)^x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = INT32_MIN;
	uint8_t x39 = UINT8_MAX;
	static volatile uint8_t x40 = 16U;
	volatile int32_t t9 = 1674870;

	t9 = (((x37^x38)^x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x41 = UINT16_MAX;
	volatile uint64_t x42 = 436734483095LLU;
	int32_t x43 = -1;
	volatile int32_t x44 = 383;
	volatile int32_t t10 = -109546084;

	t10 = (((x41^x42)^x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 7;
	int16_t x46 = INT16_MAX;
	static uint8_t x47 = UINT8_MAX;
	int64_t x48 = INT64_MAX;
	volatile int32_t t11 = -20897736;

	t11 = (((x45^x46)^x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x50 = INT64_MIN;
	uint64_t x51 = 6815LLU;
	int64_t x52 = 239849023284LL;
	static int32_t t12 = 0;

	t12 = (((x49^x50)^x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	uint64_t x54 = 825510436LLU;
	int8_t x55 = INT8_MIN;
	volatile int32_t t13 = -1782767;

	t13 = (((x53^x54)^x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = -58552;
	int32_t x59 = -1;
	int32_t t14 = -3033136;

	t14 = (((x57^x58)^x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MAX;
	uint16_t x63 = 9850U;
	static uint64_t x64 = UINT64_MAX;
	volatile int32_t t15 = 16331;

	t15 = (((x61^x62)^x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 323832615420177634LLU;
	uint8_t x66 = UINT8_MAX;
	volatile uint32_t x67 = UINT32_MAX;
	int16_t x68 = INT16_MIN;
	static volatile int32_t t16 = -29;

	t16 = (((x65^x66)^x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MAX;
	uint32_t x70 = UINT32_MAX;
	int64_t x72 = INT64_MIN;
	volatile int32_t t17 = -64;

	t17 = (((x69^x70)^x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 12U;
	int16_t x76 = INT16_MIN;

	t18 = (((x73^x74)^x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x77 = 459639567638536981LLU;
	int32_t x78 = -1;
	volatile int32_t x79 = -1;
	int8_t x80 = 29;
	volatile int32_t t19 = 26;

	t19 = (((x77^x78)^x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = UINT64_MAX;
	uint32_t x83 = UINT32_MAX;
	static int8_t x84 = INT8_MAX;
	volatile int32_t t20 = -1;

	t20 = (((x81^x82)^x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MIN;
	int16_t x86 = -1;
	volatile int8_t x87 = INT8_MIN;
	uint32_t x88 = 211U;

	t21 = (((x85^x86)^x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = 14125LL;
	uint8_t x91 = UINT8_MAX;

	t22 = (((x89^x90)^x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x94 = INT8_MAX;
	volatile int8_t x95 = INT8_MAX;
	volatile int8_t x96 = -1;
	int32_t t23 = -1062288645;

	t23 = (((x93^x94)^x95)==x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x97 = INT64_MIN;
	int64_t x98 = INT64_MIN;
	static int64_t x99 = INT64_MIN;
	uint32_t x100 = 2671159U;
	volatile int32_t t24 = 0;

	t24 = (((x97^x98)^x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	static int16_t x104 = -30;
	static volatile int32_t t25 = -27233398;

	t25 = (((x101^x102)^x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	uint8_t x106 = UINT8_MAX;
	int64_t x107 = 1777LL;
	volatile int32_t t26 = 93;

	t26 = (((x105^x106)^x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x109 = 451850;
	int16_t x110 = INT16_MIN;
	uint8_t x111 = 91U;
	int32_t t27 = 22;

	t27 = (((x109^x110)^x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	int8_t x114 = INT8_MIN;
	uint64_t x115 = 33734286373LLU;
	uint8_t x116 = 45U;

	t28 = (((x113^x114)^x115)==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x118 = 1675;
	static uint64_t x120 = 455854LLU;
	int32_t t29 = -314838702;

	t29 = (((x117^x118)^x119)==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint16_t x121 = 3738U;
	uint16_t x123 = 6327U;
	int64_t x124 = -1LL;
	volatile int32_t t30 = 93;

	t30 = (((x121^x122)^x123)==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x125 = INT64_MIN;
	static uint32_t x126 = 1242448U;
	volatile int8_t x127 = -1;
	static volatile int32_t x128 = INT32_MAX;
	volatile int32_t t31 = 0;

	t31 = (((x125^x126)^x127)==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x129 = 0;
	volatile int32_t x130 = INT32_MIN;
	uint64_t x131 = 2104301891144946821LLU;
	volatile int32_t t32 = 108682;

	t32 = (((x129^x130)^x131)==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = UINT64_MAX;
	int64_t x134 = INT64_MIN;
	uint32_t x135 = 4643U;
	static int64_t x136 = -1LL;
	volatile int32_t t33 = 62;

	t33 = (((x133^x134)^x135)==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MIN;
	uint16_t x139 = 1U;
	int8_t x140 = -1;

	t34 = (((x137^x138)^x139)==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x142 = INT64_MIN;
	int32_t x143 = 803868442;
	int16_t x144 = INT16_MIN;
	int32_t t35 = 97104805;

	t35 = (((x141^x142)^x143)==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -1;
	uint64_t x146 = 29931LLU;
	int64_t x147 = INT64_MIN;
	static int64_t x148 = -498LL;
	volatile int32_t t36 = -5;

	t36 = (((x145^x146)^x147)==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -1;
	int64_t x150 = INT64_MIN;
	static uint64_t x151 = 77LLU;
	int64_t x152 = -1LL;
	int32_t t37 = 33549951;

	t37 = (((x149^x150)^x151)==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = INT32_MAX;
	static uint64_t x154 = 275689LLU;
	static uint64_t x155 = 454629LLU;
	int16_t x156 = INT16_MIN;
	volatile int32_t t38 = 11;

	t38 = (((x153^x154)^x155)==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x160 = 0U;
	static volatile int32_t t39 = 42471317;

	t39 = (((x157^x158)^x159)==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -1;
	uint8_t x162 = 0U;
	static volatile uint32_t x163 = 249681773U;
	static int16_t x164 = -53;

	t40 = (((x161^x162)^x163)==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MIN;
	int16_t x166 = INT16_MIN;
	uint8_t x167 = 27U;
	volatile uint64_t x168 = 63458LLU;
	int32_t t41 = 237;

	t41 = (((x165^x166)^x167)==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x169 = INT8_MIN;
	volatile uint8_t x170 = 12U;
	uint64_t x172 = 191721914LLU;

	t42 = (((x169^x170)^x171)==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	uint64_t x174 = 10484178727LLU;
	volatile int32_t t43 = 131947;

	t43 = (((x173^x174)^x175)==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MAX;
	int8_t x178 = 6;
	uint64_t x179 = UINT64_MAX;
	static uint32_t x180 = 852058532U;
	volatile int32_t t44 = -120420;

	t44 = (((x177^x178)^x179)==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x182 = -1;
	uint8_t x184 = UINT8_MAX;
	int32_t t45 = 57768642;

	t45 = (((x181^x182)^x183)==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -5;
	uint32_t x187 = 16065U;
	uint64_t x188 = UINT64_MAX;
	int32_t t46 = 8;

	t46 = (((x185^x186)^x187)==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x190 = INT8_MIN;
	uint16_t x191 = 5U;
	uint32_t x192 = 10U;
	int32_t t47 = 4887498;

	t47 = (((x189^x190)^x191)==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = 15;
	int8_t x194 = INT8_MIN;
	int8_t x195 = INT8_MIN;
	volatile uint64_t x196 = 8119836LLU;

	t48 = (((x193^x194)^x195)==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = -9;
	volatile uint64_t x198 = UINT64_MAX;
	uint32_t x199 = UINT32_MAX;
	int64_t x200 = INT64_MIN;
	int32_t t49 = -130068;

	t49 = (((x197^x198)^x199)==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MAX;
	static int32_t x202 = INT32_MAX;
	static volatile uint8_t x203 = UINT8_MAX;
	int32_t t50 = -1;

	t50 = (((x201^x202)^x203)==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x205 = -1;
	int32_t x206 = 63889;
	uint32_t x207 = 3U;
	uint64_t x208 = UINT64_MAX;
	static int32_t t51 = -43655570;

	t51 = (((x205^x206)^x207)==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MAX;
	volatile int64_t x212 = 34459630391404LL;
	static int32_t t52 = -48030937;

	t52 = (((x209^x210)^x211)==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x213 = INT64_MIN;
	uint64_t x214 = 460988017033066LLU;
	int8_t x215 = INT8_MAX;
	int64_t x216 = INT64_MIN;
	int32_t t53 = -17736;

	t53 = (((x213^x214)^x215)==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MAX;
	uint16_t x218 = 5U;
	int8_t x219 = -1;
	int64_t x220 = INT64_MIN;
	int32_t t54 = 736;

	t54 = (((x217^x218)^x219)==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x221 = 873819LLU;
	uint32_t x224 = 529116767U;
	volatile int32_t t55 = -22217;

	t55 = (((x221^x222)^x223)==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x225 = UINT64_MAX;
	int16_t x226 = -1;
	uint16_t x227 = UINT16_MAX;
	int16_t x228 = -335;
	static volatile int32_t t56 = 28;

	t56 = (((x225^x226)^x227)==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x229 = INT8_MIN;
	int8_t x231 = INT8_MIN;

	t57 = (((x229^x230)^x231)==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MIN;
	int16_t x235 = 3096;
	uint64_t x236 = 1400628803LLU;
	volatile int32_t t58 = 27;

	t58 = (((x233^x234)^x235)==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = 11136951105400LL;
	int32_t x238 = INT32_MAX;
	int8_t x239 = INT8_MIN;
	uint64_t x240 = 5930813849LLU;
	static volatile int32_t t59 = -24419772;

	t59 = (((x237^x238)^x239)==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MIN;
	int16_t x242 = -1;
	uint32_t x243 = 876U;
	volatile uint32_t x244 = 1332U;
	volatile int32_t t60 = -15259910;

	t60 = (((x241^x242)^x243)==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MIN;
	int64_t x246 = INT64_MIN;
	static int16_t x247 = INT16_MIN;
	int8_t x248 = 0;
	static volatile int32_t t61 = 1;

	t61 = (((x245^x246)^x247)==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x250 = 1111LL;
	int32_t x252 = INT32_MIN;
	int32_t t62 = 0;

	t62 = (((x249^x250)^x251)==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x253 = INT8_MIN;
	int32_t x254 = -1;
	volatile int64_t x256 = INT64_MIN;

	t63 = (((x253^x254)^x255)==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	int32_t x258 = INT32_MAX;
	int16_t x260 = INT16_MAX;

	t64 = (((x257^x258)^x259)==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint32_t x262 = 115163663U;
	uint32_t x263 = 3U;
	static int64_t x264 = 28716204621LL;
	static volatile int32_t t65 = -69837200;

	t65 = (((x261^x262)^x263)==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = 33U;
	static volatile int8_t x266 = INT8_MIN;
	static volatile int32_t x267 = 15074263;
	int16_t x268 = -8875;
	int32_t t66 = 233521407;

	t66 = (((x265^x266)^x267)==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 700U;
	volatile int8_t x270 = INT8_MIN;
	int64_t x271 = -1LL;
	static volatile int8_t x272 = INT8_MAX;
	int32_t t67 = -777710849;

	t67 = (((x269^x270)^x271)==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x273 = INT8_MIN;
	int8_t x274 = INT8_MIN;
	int32_t x275 = INT32_MIN;
	volatile uint8_t x276 = 0U;
	static volatile int32_t t68 = -24693317;

	t68 = (((x273^x274)^x275)==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x277 = 14;
	int32_t x278 = INT32_MAX;
	static uint8_t x279 = UINT8_MAX;
	int8_t x280 = 11;
	volatile int32_t t69 = -80774;

	t69 = (((x277^x278)^x279)==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = -477;
	static uint64_t x282 = UINT64_MAX;
	int64_t x283 = 258232850LL;

	t70 = (((x281^x282)^x283)==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x285 = -1;
	static int16_t x287 = -1;
	volatile int64_t x288 = -1LL;

	t71 = (((x285^x286)^x287)==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x290 = INT64_MIN;
	uint64_t x291 = UINT64_MAX;
	int32_t t72 = 1;

	t72 = (((x289^x290)^x291)==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -1LL;
	volatile int64_t x294 = -94607504680903LL;
	int64_t x295 = -1017LL;
	int8_t x296 = INT8_MIN;
	static int32_t t73 = -595894047;

	t73 = (((x293^x294)^x295)==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x297 = INT8_MAX;
	uint64_t x298 = 2244799922265457LLU;
	uint16_t x299 = 1U;
	static volatile int8_t x300 = INT8_MAX;
	int32_t t74 = -115;

	t74 = (((x297^x298)^x299)==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = -18;
	uint32_t x302 = UINT32_MAX;
	int32_t x303 = -1;
	int32_t t75 = -274;

	t75 = (((x301^x302)^x303)==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MAX;
	uint8_t x306 = UINT8_MAX;
	int16_t x307 = -1;
	uint64_t x308 = 1060386978750160LLU;
	int32_t t76 = -58909315;

	t76 = (((x305^x306)^x307)==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -1;
	int32_t x310 = INT32_MIN;
	int16_t x311 = -28;
	volatile uint8_t x312 = 124U;
	volatile int32_t t77 = -52;

	t77 = (((x309^x310)^x311)==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x314 = INT16_MIN;
	uint8_t x315 = 11U;
	uint16_t x316 = 8U;
	volatile int32_t t78 = 21548277;

	t78 = (((x313^x314)^x315)==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x317 = 5626143LL;
	int32_t x318 = 3;
	int16_t x319 = INT16_MIN;
	int16_t x320 = -1;
	static int32_t t79 = -2503239;

	t79 = (((x317^x318)^x319)==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 30U;
	int32_t x322 = INT32_MIN;
	volatile int16_t x323 = INT16_MIN;
	volatile uint64_t x324 = 4537LLU;
	volatile int32_t t80 = 611419529;

	t80 = (((x321^x322)^x323)==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = 6283U;
	static int16_t x326 = 23;
	uint8_t x327 = 66U;
	int8_t x328 = -1;
	static volatile int32_t t81 = -1576;

	t81 = (((x325^x326)^x327)==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x331 = INT32_MIN;
	volatile int64_t x332 = 101236361LL;
	volatile int32_t t82 = -18868754;

	t82 = (((x329^x330)^x331)==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x333 = 176586237603494LLU;
	static volatile int64_t x334 = INT64_MAX;
	volatile int64_t x335 = INT64_MIN;
	int32_t t83 = -129254993;

	t83 = (((x333^x334)^x335)==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x338 = -1LL;
	static int16_t x339 = -1;
	int16_t x340 = INT16_MAX;
	volatile int32_t t84 = 179684;

	t84 = (((x337^x338)^x339)==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = 16527;
	static int8_t x342 = 54;
	uint16_t x343 = 1038U;
	volatile int32_t t85 = -34417;

	t85 = (((x341^x342)^x343)==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint32_t x345 = 1824571U;
	uint16_t x346 = 22480U;
	int32_t x347 = -405;
	static uint8_t x348 = 47U;
	static int32_t t86 = -809657629;

	t86 = (((x345^x346)^x347)==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = 2U;
	int16_t x351 = 252;
	int64_t x352 = INT64_MAX;
	int32_t t87 = -76219678;

	t87 = (((x349^x350)^x351)==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MAX;
	uint16_t x354 = 0U;
	static uint64_t x355 = 31694LLU;
	uint8_t x356 = UINT8_MAX;
	volatile int32_t t88 = -54917377;

	t88 = (((x353^x354)^x355)==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x357 = INT8_MIN;
	int32_t x358 = INT32_MIN;
	volatile int16_t x359 = INT16_MIN;
	uint8_t x360 = UINT8_MAX;
	int32_t t89 = 859450459;

	t89 = (((x357^x358)^x359)==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x361 = 117U;
	int8_t x362 = INT8_MAX;
	uint8_t x363 = 50U;
	volatile int32_t t90 = 0;

	t90 = (((x361^x362)^x363)==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -1;
	uint32_t x366 = UINT32_MAX;
	static int64_t x367 = INT64_MIN;
	uint8_t x368 = UINT8_MAX;
	int32_t t91 = 1894735;

	t91 = (((x365^x366)^x367)==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x369 = 1890024800622218LL;
	int16_t x370 = -1;
	uint16_t x371 = 6U;
	volatile int32_t t92 = 57079;

	t92 = (((x369^x370)^x371)==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MAX;
	int64_t x374 = -404682395LL;
	int16_t x375 = INT16_MIN;
	int32_t x376 = INT32_MAX;
	int32_t t93 = -5825;

	t93 = (((x373^x374)^x375)==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x377 = -1;
	uint64_t x378 = UINT64_MAX;
	int16_t x379 = INT16_MAX;
	int32_t x380 = INT32_MAX;
	volatile int32_t t94 = 2026;

	t94 = (((x377^x378)^x379)==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -1LL;
	int8_t x382 = INT8_MIN;
	volatile int16_t x383 = INT16_MAX;
	int64_t x384 = -820986998668LL;
	int32_t t95 = -834698939;

	t95 = (((x381^x382)^x383)==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x385 = 1161433LLU;
	int64_t x386 = -660328050181LL;
	int64_t x387 = 3385515879546044LL;
	int8_t x388 = 0;
	int32_t t96 = 5649288;

	t96 = (((x385^x386)^x387)==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x389 = INT64_MIN;
	int32_t x390 = -916;
	int64_t x391 = -1LL;
	int16_t x392 = INT16_MIN;
	volatile int32_t t97 = 2809;

	t97 = (((x389^x390)^x391)==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x394 = -7;
	static volatile int64_t x395 = -6261LL;
	volatile int32_t t98 = 832;

	t98 = (((x393^x394)^x395)==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -295LL;
	static int8_t x398 = INT8_MIN;
	int64_t x400 = 25997708LL;

	t99 = (((x397^x398)^x399)==x400);

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

