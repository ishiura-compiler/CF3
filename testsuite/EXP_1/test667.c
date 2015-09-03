#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x3 = INT64_MAX;
static uint32_t x7 = UINT32_MAX;
static uint32_t x10 = 613U;
static int64_t x12 = -3308967014LL;
volatile int16_t x17 = -1810;
uint8_t x18 = UINT8_MAX;
int32_t t4 = 238589132;
uint64_t t6 = 84LLU;
static int8_t x30 = INT8_MIN;
int16_t x36 = -1;
int32_t x39 = INT32_MAX;
int32_t t11 = 18;
volatile int16_t x53 = -1;
int8_t x55 = INT8_MIN;
volatile int8_t x58 = 37;
int32_t x61 = -1;
int32_t x62 = INT32_MAX;
static volatile uint16_t x69 = 1U;
static int16_t x72 = -1;
volatile int32_t t18 = -16532984;
int8_t x77 = -1;
volatile int64_t x80 = -14573361158LL;
int64_t t19 = -2049634LL;
int16_t x82 = INT16_MIN;
static int16_t x84 = -1295;
static volatile int16_t x85 = -1;
static volatile uint64_t t22 = 3727617105664767679LLU;
static uint32_t x100 = UINT32_MAX;
static int16_t x112 = INT16_MIN;
int8_t x113 = -1;
static int64_t x133 = -1927896108992384LL;
volatile int64_t t30 = -1596989333475541LL;
volatile int8_t x137 = -1;
volatile int16_t x140 = -431;
int64_t t32 = -13171090153776745LL;
int32_t x149 = -1;
static int64_t x151 = INT64_MIN;
static int8_t x155 = INT8_MIN;
int64_t x164 = -29040258LL;
volatile uint64_t t36 = 2LLU;
uint8_t x170 = 1U;
static int32_t t38 = 191;
uint32_t x200 = 55U;
uint16_t x204 = 1U;
uint16_t x205 = 23100U;
uint64_t x219 = 15943450813LLU;
uint64_t t50 = 91908LLU;
uint8_t x224 = 6U;
static int16_t x235 = INT16_MAX;
int16_t x239 = INT16_MIN;
volatile int64_t x247 = 34531603795192311LL;
uint64_t x248 = UINT64_MAX;
static volatile int16_t x250 = -1;
int32_t x251 = -1;
int64_t x252 = INT64_MAX;
static int64_t t58 = 4504991657634260610LL;
uint32_t x255 = 32175458U;
int64_t x266 = -28084907734941162LL;
volatile uint64_t t64 = 262677632LLU;
int8_t x281 = INT8_MIN;
volatile uint64_t x282 = 1311620LLU;
static int64_t x285 = INT64_MAX;
int64_t t69 = -4349481LL;
volatile uint64_t t70 = 381702LLU;
uint8_t x305 = 48U;
static int32_t t71 = 5624388;
volatile uint32_t x310 = UINT32_MAX;
uint64_t t73 = 31LLU;
static uint64_t x326 = 2109LLU;
int32_t x340 = -1;
volatile int32_t x342 = 106269004;
volatile int32_t x343 = -1;
int32_t x344 = 2829;
int64_t t80 = -259213289717852931LL;
uint16_t x346 = 812U;
static volatile int64_t x350 = INT64_MAX;
uint32_t x353 = 2029U;
int32_t x355 = -1;
uint16_t x356 = 3U;
int64_t t84 = -66622438462335666LL;
volatile uint64_t x368 = UINT64_MAX;
volatile uint64_t t86 = 58603898567161LLU;
uint64_t x370 = 2152320717199296LLU;
static uint16_t x372 = 87U;
int16_t x374 = -800;
uint64_t x375 = 1701565LLU;
static int16_t x383 = -2;
volatile int32_t t90 = 119158865;
static int32_t x389 = 70;
uint64_t x393 = 646515246743LLU;
int32_t t93 = 630481157;
volatile int64_t x402 = 1882LL;
int16_t x407 = -1;
int16_t x410 = INT16_MAX;
static int64_t x414 = -1LL;
static volatile int64_t t99 = 6710LL;


void f0(void) {
	static int32_t x1 = INT32_MAX;
	static uint16_t x2 = UINT16_MAX;
	static int16_t x4 = INT16_MAX;
	volatile int64_t t0 = 137LL;

	t0 = (((x1/x2)^x3)/x4);

	if (t0 != 281483566907399LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 2U;
	uint32_t x6 = 65080U;
	uint64_t x8 = UINT64_MAX;
	volatile uint64_t t1 = 4562773010004LLU;

	t1 = (((x5/x6)^x7)/x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	int8_t x11 = -1;
	int64_t t2 = -255306339593401LL;

	t2 = (((x9/x10)^x11)/x12);

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 1915574U;
	int16_t x14 = 927;
	int32_t x15 = 3745;
	uint16_t x16 = 116U;
	volatile uint32_t t3 = 890158U;

	t3 = (((x13/x14)^x15)/x16);

	if (t3 != 14U) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x19 = INT8_MAX;
	static int8_t x20 = INT8_MIN;

	t4 = (((x17/x18)^x19)/x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	uint8_t x22 = 60U;
	int64_t x23 = INT64_MAX;
	static int16_t x24 = INT16_MIN;
	volatile int64_t t5 = 3407206890321839LL;

	t5 = (((x21/x22)^x23)/x24);

	if (t5 != 281474976709563LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	static uint64_t x26 = 117LLU;
	int16_t x27 = INT16_MAX;
	int16_t x28 = 18;

	t6 = (((x25/x26)^x27)/x28);

	if (t6 != 2040220LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = UINT8_MAX;
	int16_t x31 = -18;
	int8_t x32 = INT8_MIN;
	volatile int32_t t7 = 38985;

	t7 = (((x29/x30)^x31)/x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	int8_t x34 = INT8_MIN;
	static int8_t x35 = INT8_MIN;
	volatile int32_t t8 = -3;

	t8 = (((x33/x34)^x35)/x36);

	if (t8 != 384) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 671077090599558463LLU;
	volatile uint32_t x38 = 1U;
	int32_t x40 = INT32_MAX;
	volatile uint64_t t9 = 56674702LLU;

	t9 = (((x37/x38)^x39)/x40);

	if (t9 != 312494621LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = INT8_MAX;
	uint64_t x42 = 318312275202LLU;
	volatile uint8_t x43 = UINT8_MAX;
	uint64_t x44 = UINT64_MAX;
	static volatile uint64_t t10 = 1434091778273167LLU;

	t10 = (((x41/x42)^x43)/x44);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	int32_t x46 = INT32_MIN;
	static volatile uint8_t x47 = UINT8_MAX;
	volatile int8_t x48 = INT8_MIN;

	t11 = (((x45/x46)^x47)/x48);

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = 1;
	int64_t x50 = -1794232813LL;
	int64_t x51 = -653LL;
	static int64_t x52 = INT64_MIN;
	volatile int64_t t12 = -216086072183LL;

	t12 = (((x49/x50)^x51)/x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x54 = UINT8_MAX;
	int16_t x56 = INT16_MIN;
	volatile int32_t t13 = -833794;

	t13 = (((x53/x54)^x55)/x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	volatile int32_t x59 = -47849505;
	int16_t x60 = 22;
	volatile int32_t t14 = -87128156;

	t14 = (((x57/x58)^x59)/x60);

	if (t14 != 2174977) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x63 = INT64_MAX;
	int32_t x64 = 30877;
	int64_t t15 = 3694LL;

	t15 = (((x61/x62)^x63)/x64);

	if (t15 != 298713347697469LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	uint16_t x66 = UINT16_MAX;
	int32_t x67 = -2026;
	volatile int16_t x68 = INT16_MAX;
	int32_t t16 = 9896;

	t16 = (((x65/x66)^x67)/x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = -1;
	volatile int8_t x71 = -1;
	volatile int32_t t17 = -1831386;

	t17 = (((x69/x70)^x71)/x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MAX;
	int32_t x74 = -29318130;
	volatile int8_t x75 = INT8_MAX;
	static int8_t x76 = INT8_MIN;

	t18 = (((x73/x74)^x75)/x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x78 = UINT8_MAX;
	int64_t x79 = INT64_MIN;

	t19 = (((x77/x78)^x79)/x80);

	if (t19 != 632892572LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x81 = -1;
	static int16_t x83 = INT16_MAX;
	volatile int32_t t20 = -43;

	t20 = (((x81/x82)^x83)/x84);

	if (t20 != -25) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x86 = UINT16_MAX;
	int16_t x87 = INT16_MAX;
	static uint64_t x88 = 51612LLU;
	uint64_t t21 = 8707318LLU;

	t21 = (((x85/x86)^x87)/x88);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 948285351342LLU;
	volatile int32_t x90 = 3705;
	uint16_t x91 = 1U;
	static int8_t x92 = 41;

	t22 = (((x89/x90)^x91)/x92);

	if (t22 != 6242621LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = 2;
	uint16_t x94 = 424U;
	static volatile int32_t x95 = -736342749;
	uint32_t x96 = UINT32_MAX;
	static volatile uint32_t t23 = 79962013U;

	t23 = (((x93/x94)^x95)/x96);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 8444177670445122LLU;
	static volatile int32_t x98 = INT32_MAX;
	static volatile int16_t x99 = -482;
	uint64_t t24 = 1945079381950690LLU;

	t24 = (((x97/x98)^x99)/x100);

	if (t24 != 4294967296LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x105 = 4U;
	int64_t x106 = -9LL;
	int32_t x107 = INT32_MAX;
	static uint32_t x108 = 27820547U;
	static int64_t t25 = -110468419684140732LL;

	t25 = (((x105/x106)^x107)/x108);

	if (t25 != 77LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = INT32_MAX;
	int32_t x110 = -3779;
	volatile int64_t x111 = -1LL;
	int64_t t26 = 587975638807LL;

	t26 = (((x109/x110)^x111)/x112);

	if (t26 != -17LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x114 = 11467;
	uint64_t x115 = 251860307LLU;
	volatile uint16_t x116 = UINT16_MAX;
	static volatile uint64_t t27 = 137057695LLU;

	t27 = (((x113/x114)^x115)/x116);

	if (t27 != 3843LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x117 = UINT32_MAX;
	volatile int64_t x118 = -1LL;
	static uint64_t x119 = UINT64_MAX;
	uint8_t x120 = 7U;
	volatile uint64_t t28 = 9959LLU;

	t28 = (((x117/x118)^x119)/x120);

	if (t28 != 613566756LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = 1;
	uint16_t x126 = 1U;
	int16_t x127 = 47;
	volatile int8_t x128 = INT8_MAX;
	volatile int32_t t29 = 21;

	t29 = (((x125/x126)^x127)/x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x134 = INT32_MIN;
	uint8_t x135 = 83U;
	static volatile int16_t x136 = INT16_MAX;

	t30 = (((x133/x134)^x135)/x136);

	if (t30 != 27LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x138 = INT64_MAX;
	int32_t x139 = -2;
	static int64_t t31 = -75290805767LL;

	t31 = (((x137/x138)^x139)/x140);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x141 = INT64_MIN;
	volatile int32_t x142 = INT32_MIN;
	volatile int32_t x143 = INT32_MIN;
	static uint16_t x144 = UINT16_MAX;

	t32 = (((x141/x142)^x143)/x144);

	if (t32 != -98305LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x145 = INT16_MAX;
	volatile int32_t x146 = -1;
	int32_t x147 = -7132;
	static uint16_t x148 = 983U;
	static volatile int32_t t33 = -1487;

	t33 = (((x145/x146)^x147)/x148);

	if (t33 != 26) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x150 = 13U;
	uint64_t x152 = 7412LLU;
	uint64_t t34 = 1220850030863LLU;

	t34 = (((x149/x150)^x151)/x152);

	if (t34 != 1244383707077006LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x153 = INT32_MIN;
	int64_t x154 = INT64_MAX;
	volatile int8_t x156 = -10;
	int64_t t35 = -15499840864160LL;

	t35 = (((x153/x154)^x155)/x156);

	if (t35 != 12LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x161 = -11005366;
	volatile int32_t x162 = INT32_MIN;
	volatile uint64_t x163 = 36071LLU;

	t36 = (((x161/x162)^x163)/x164);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x165 = INT16_MAX;
	volatile int32_t x166 = -1;
	uint8_t x167 = UINT8_MAX;
	int32_t x168 = INT32_MAX;
	volatile int32_t t37 = -53160;

	t37 = (((x165/x166)^x167)/x168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = INT16_MIN;
	static int32_t x171 = INT32_MIN;
	int32_t x172 = 682453011;

	t38 = (((x169/x170)^x171)/x172);

	if (t38 != 3) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x173 = 2501545U;
	static uint64_t x174 = UINT64_MAX;
	uint32_t x175 = 244723U;
	int8_t x176 = INT8_MIN;
	static uint64_t t39 = 810LLU;

	t39 = (((x173/x174)^x175)/x176);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x177 = 3U;
	int32_t x178 = -9145;
	static uint8_t x179 = UINT8_MAX;
	uint32_t x180 = 2039680500U;
	uint32_t t40 = 143U;

	t40 = (((x177/x178)^x179)/x180);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x181 = INT8_MIN;
	uint32_t x182 = 10245865U;
	int32_t x183 = -38213;
	int64_t x184 = -125243547LL;
	volatile int64_t t41 = 190LL;

	t41 = (((x181/x182)^x183)/x184);

	if (t41 != -34LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x185 = 27423LLU;
	int16_t x186 = INT16_MAX;
	int16_t x187 = INT16_MAX;
	int8_t x188 = INT8_MIN;
	volatile uint64_t t42 = 152LLU;

	t42 = (((x185/x186)^x187)/x188);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x189 = INT8_MAX;
	int64_t x190 = INT64_MIN;
	int8_t x191 = INT8_MAX;
	volatile uint32_t x192 = 92U;
	volatile int64_t t43 = -1488943910862407LL;

	t43 = (((x189/x190)^x191)/x192);

	if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x193 = INT32_MIN;
	int32_t x194 = INT32_MIN;
	int8_t x195 = INT8_MAX;
	static volatile int16_t x196 = INT16_MIN;
	static int32_t t44 = 1065285421;

	t44 = (((x193/x194)^x195)/x196);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x197 = -35068479;
	volatile int64_t x198 = -1LL;
	uint32_t x199 = UINT32_MAX;
	volatile int64_t t45 = 334182888348LL;

	t45 = (((x197/x198)^x199)/x200);

	if (t45 != 77452705LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x201 = 328U;
	uint64_t x202 = 124639LLU;
	static int8_t x203 = -1;
	uint64_t t46 = UINT64_MAX;

	t46 = (((x201/x202)^x203)/x204);

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x206 = INT16_MIN;
	int8_t x207 = -38;
	volatile int8_t x208 = -11;
	volatile int32_t t47 = 153;

	t47 = (((x205/x206)^x207)/x208);

	if (t47 != 3) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x209 = -1;
	int64_t x210 = 5959105161845494LL;
	uint32_t x211 = UINT32_MAX;
	int8_t x212 = -1;
	int64_t t48 = 0LL;

	t48 = (((x209/x210)^x211)/x212);

	if (t48 != -4294967295LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x213 = 504800876210LL;
	static uint32_t x214 = UINT32_MAX;
	static int8_t x215 = INT8_MIN;
	uint8_t x216 = UINT8_MAX;
	int64_t t49 = -258233LL;

	t49 = (((x213/x214)^x215)/x216);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x217 = -1;
	uint32_t x218 = 8141484U;
	volatile int8_t x220 = INT8_MAX;

	t50 = (((x217/x218)^x219)/x220);

	if (t50 != 125538986LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x221 = INT8_MIN;
	int32_t x222 = -1;
	volatile uint64_t x223 = UINT64_MAX;
	uint64_t t51 = 188LLU;

	t51 = (((x221/x222)^x223)/x224);

	if (t51 != 3074457345618258581LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x225 = 1995LLU;
	uint16_t x226 = 42U;
	uint16_t x227 = 68U;
	int8_t x228 = INT8_MIN;
	uint64_t t52 = 5529464LLU;

	t52 = (((x225/x226)^x227)/x228);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x229 = INT8_MIN;
	uint8_t x230 = 3U;
	int32_t x231 = INT32_MIN;
	int32_t x232 = INT32_MAX;
	int32_t t53 = 9903;

	t53 = (((x229/x230)^x231)/x232);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x233 = -1;
	int32_t x234 = -1;
	static int32_t x236 = INT32_MAX;
	static int32_t t54 = 0;

	t54 = (((x233/x234)^x235)/x236);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x237 = INT8_MIN;
	int8_t x238 = INT8_MIN;
	int32_t x240 = INT32_MAX;
	volatile int32_t t55 = -2743;

	t55 = (((x237/x238)^x239)/x240);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x241 = -1LL;
	static int8_t x242 = -1;
	uint16_t x243 = 45U;
	int32_t x244 = INT32_MIN;
	volatile int64_t t56 = -7648075LL;

	t56 = (((x241/x242)^x243)/x244);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x245 = -128443;
	static int32_t x246 = 18529236;
	volatile uint64_t t57 = 4179376LLU;

	t57 = (((x245/x246)^x247)/x248);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x249 = -54;

	t58 = (((x249/x250)^x251)/x252);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x253 = 6U;
	volatile int32_t x254 = 802618;
	volatile int64_t x256 = INT64_MIN;
	int64_t t59 = 9LL;

	t59 = (((x253/x254)^x255)/x256);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x257 = 240136U;
	static int64_t x258 = INT64_MAX;
	int8_t x259 = INT8_MAX;
	int16_t x260 = -534;
	volatile int64_t t60 = -1LL;

	t60 = (((x257/x258)^x259)/x260);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x261 = 595411624U;
	uint16_t x262 = 236U;
	volatile uint8_t x263 = 46U;
	int8_t x264 = INT8_MAX;
	uint32_t t61 = 1U;

	t61 = (((x261/x262)^x263)/x264);

	if (t61 != 19865U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x265 = -1;
	uint32_t x267 = 253U;
	uint64_t x268 = 431LLU;
	volatile uint64_t t62 = 52918120416LLU;

	t62 = (((x265/x266)^x267)/x268);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x269 = 0;
	volatile int32_t x270 = 465;
	uint64_t x271 = UINT64_MAX;
	int8_t x272 = -1;
	static uint64_t t63 = 17054LLU;

	t63 = (((x269/x270)^x271)/x272);

	if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x277 = UINT64_MAX;
	volatile int8_t x278 = -1;
	int16_t x279 = INT16_MIN;
	int64_t x280 = 253633402278678094LL;

	t64 = (((x277/x278)^x279)/x280);

	if (t64 != 72LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x283 = 240348U;
	volatile uint64_t x284 = 1785412353LLU;
	volatile uint64_t t65 = 178244LLU;

	t65 = (((x281/x282)^x283)/x284);

	if (t65 != 7877LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x286 = -1;
	int64_t x287 = INT64_MAX;
	static int64_t x288 = INT64_MIN;
	volatile int64_t t66 = 19381648576LL;

	t66 = (((x285/x286)^x287)/x288);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x289 = 343U;
	int8_t x290 = INT8_MIN;
	int16_t x291 = INT16_MAX;
	int64_t x292 = INT64_MIN;
	int64_t t67 = 1419286220448070LL;

	t67 = (((x289/x290)^x291)/x292);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x293 = 9U;
	static int32_t x294 = INT32_MIN;
	static int64_t x295 = 391269390LL;
	int16_t x296 = -1;
	static int64_t t68 = -180598332738640LL;

	t68 = (((x293/x294)^x295)/x296);

	if (t68 != -391269390LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x297 = 54U;
	int64_t x298 = INT64_MIN;
	volatile int8_t x299 = INT8_MIN;
	int32_t x300 = -7217822;

	t69 = (((x297/x298)^x299)/x300);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x301 = 137763203129809LLU;
	int32_t x302 = INT32_MIN;
	static uint8_t x303 = 107U;
	volatile uint64_t x304 = UINT64_MAX;

	t70 = (((x301/x302)^x303)/x304);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x306 = INT32_MAX;
	int8_t x307 = INT8_MIN;
	int8_t x308 = INT8_MIN;

	t71 = (((x305/x306)^x307)/x308);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x309 = -1LL;
	int32_t x311 = -1;
	int8_t x312 = 3;
	int64_t t72 = 81373LL;

	t72 = (((x309/x310)^x311)/x312);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x313 = 3856059LLU;
	uint64_t x314 = 26586593291LLU;
	volatile int64_t x315 = INT64_MAX;
	int32_t x316 = -1;

	t73 = (((x313/x314)^x315)/x316);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x317 = INT8_MIN;
	volatile uint8_t x318 = 52U;
	int8_t x319 = INT8_MAX;
	uint64_t x320 = UINT64_MAX;
	volatile uint64_t t74 = 62682780504LLU;

	t74 = (((x317/x318)^x319)/x320);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x321 = INT32_MIN;
	int64_t x322 = INT64_MAX;
	static int64_t x323 = INT64_MAX;
	volatile int8_t x324 = -2;
	int64_t t75 = -2725501914747LL;

	t75 = (((x321/x322)^x323)/x324);

	if (t75 != -4611686018427387903LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x325 = INT32_MIN;
	volatile int32_t x327 = 0;
	int16_t x328 = 221;
	volatile uint64_t t76 = 260477LLU;

	t76 = (((x325/x326)^x327)/x328);

	if (t76 != 39577728870584LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x329 = INT8_MAX;
	volatile uint64_t x330 = UINT64_MAX;
	static int8_t x331 = 0;
	uint16_t x332 = 474U;
	volatile uint64_t t77 = 10551857251556761LLU;

	t77 = (((x329/x330)^x331)/x332);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x333 = 19989U;
	volatile uint8_t x334 = UINT8_MAX;
	int16_t x335 = INT16_MIN;
	volatile uint32_t x336 = UINT32_MAX;
	static volatile uint32_t t78 = 75U;

	t78 = (((x333/x334)^x335)/x336);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x337 = INT8_MAX;
	int8_t x338 = -1;
	int64_t x339 = -12705281738LL;
	static int64_t t79 = 492190009061694996LL;

	t79 = (((x337/x338)^x339)/x340);

	if (t79 != -12705281719LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x341 = -3698164LL;

	t80 = (((x341/x342)^x343)/x344);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x345 = INT64_MIN;
	static int8_t x347 = 0;
	int32_t x348 = -4982;
	int64_t t81 = -259006059971279391LL;

	t81 = (((x345/x346)^x347)/x348);

	if (t81 != 2279974419450LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x349 = 652U;
	uint8_t x351 = UINT8_MAX;
	int32_t x352 = -1;
	static int64_t t82 = -216477LL;

	t82 = (((x349/x350)^x351)/x352);

	if (t82 != -255LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x354 = -1LL;
	int64_t t83 = 236764074859LL;

	t83 = (((x353/x354)^x355)/x356);

	if (t83 != 676LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x357 = 12U;
	int8_t x358 = INT8_MIN;
	uint16_t x359 = 22319U;
	int64_t x360 = 518301012240021324LL;

	t84 = (((x357/x358)^x359)/x360);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x361 = 0U;
	volatile int8_t x362 = INT8_MAX;
	uint64_t x363 = UINT64_MAX;
	uint64_t x364 = 427621694LLU;
	volatile uint64_t t85 = 2018LLU;

	t85 = (((x361/x362)^x363)/x364);

	if (t85 != 43137998685LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x365 = 1061027723U;
	int16_t x366 = INT16_MIN;
	volatile int8_t x367 = -2;

	t86 = (((x365/x366)^x367)/x368);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x369 = UINT32_MAX;
	int64_t x371 = INT64_MIN;
	uint64_t t87 = 191227323734214LLU;

	t87 = (((x369/x370)^x371)/x372);

	if (t87 != 106015770538560641LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x373 = UINT64_MAX;
	int16_t x376 = 51;
	uint64_t t88 = 54509450148929030LLU;

	t88 = (((x373/x374)^x375)/x376);

	if (t88 != 33364LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x381 = 88LLU;
	static volatile int32_t x382 = INT32_MIN;
	uint8_t x384 = 4U;
	volatile uint64_t t89 = 3572095074265915LLU;

	t89 = (((x381/x382)^x383)/x384);

	if (t89 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x385 = 0;
	uint8_t x386 = 8U;
	uint16_t x387 = UINT16_MAX;
	uint8_t x388 = 3U;

	t90 = (((x385/x386)^x387)/x388);

	if (t90 != 21845) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x390 = INT8_MIN;
	uint16_t x391 = 1627U;
	int8_t x392 = INT8_MAX;
	volatile int32_t t91 = 324415;

	t91 = (((x389/x390)^x391)/x392);

	if (t91 != 12) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x394 = INT64_MAX;
	volatile int16_t x395 = INT16_MAX;
	uint32_t x396 = UINT32_MAX;
	static volatile uint64_t t92 = 2054414897445062LLU;

	t92 = (((x393/x394)^x395)/x396);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x397 = -1;
	int8_t x398 = INT8_MIN;
	static int32_t x399 = INT32_MAX;
	static int16_t x400 = 206;

	t93 = (((x397/x398)^x399)/x400);

	if (t93 != 10424677) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x401 = 13559294U;
	uint16_t x403 = 120U;
	volatile int32_t x404 = -1;
	volatile int64_t t94 = -14LL;

	t94 = (((x401/x402)^x403)/x404);

	if (t94 != -7260LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x405 = INT8_MAX;
	static int16_t x406 = INT16_MIN;
	int8_t x408 = -1;
	static volatile int32_t t95 = -177857;

	t95 = (((x405/x406)^x407)/x408);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x409 = INT32_MIN;
	uint32_t x411 = 2236U;
	int8_t x412 = -1;
	volatile uint32_t t96 = 445518U;

	t96 = (((x409/x410)^x411)/x412);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x413 = -6LL;
	int8_t x415 = INT8_MIN;
	volatile int64_t x416 = 254LL;
	int64_t t97 = 1943LL;

	t97 = (((x413/x414)^x415)/x416);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x417 = INT16_MIN;
	int16_t x418 = INT16_MAX;
	static int8_t x419 = -1;
	uint64_t x420 = 119LLU;
	static uint64_t t98 = 17124762471LLU;

	t98 = (((x417/x418)^x419)/x420);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x421 = UINT8_MAX;
	int64_t x422 = INT64_MIN;
	int64_t x423 = INT64_MAX;
	int8_t x424 = -1;

	t99 = (((x421/x422)^x423)/x424);

	if (t99 != -9223372036854775807LL) { NG(); } else { ; }
	
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

