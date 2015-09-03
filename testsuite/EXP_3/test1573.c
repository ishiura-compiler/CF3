#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x3 = 15874U;
int64_t x7 = INT64_MIN;
volatile int16_t x9 = 28;
int32_t x11 = INT32_MAX;
volatile int32_t t2 = 23;
uint16_t x13 = 227U;
int32_t x14 = 1;
static int32_t t3 = -1064748542;
int64_t t4 = -1076153987047LL;
int16_t x21 = -265;
static int8_t x30 = INT8_MIN;
uint16_t x31 = 8507U;
int32_t x36 = -29893409;
int8_t x42 = INT8_MIN;
volatile uint64_t t12 = 27469082624LLU;
uint64_t x55 = 383619911LLU;
int8_t x58 = INT8_MAX;
uint32_t t14 = 399U;
volatile int32_t t16 = -15786931;
static int16_t x69 = -1;
volatile uint32_t x73 = UINT32_MAX;
static volatile int8_t x74 = -1;
int64_t x76 = -10783200865LL;
uint32_t x81 = 1094419399U;
int64_t x91 = INT64_MAX;
int64_t x92 = INT64_MIN;
int8_t x93 = -1;
uint32_t x97 = UINT32_MAX;
int32_t x100 = -370;
uint32_t x102 = UINT32_MAX;
int8_t x103 = -5;
int32_t x105 = -1;
static int32_t x118 = -9208;
int32_t t29 = -56;
int32_t x147 = -1;
static int32_t x148 = INT32_MAX;
uint8_t x153 = 60U;
int8_t x155 = INT8_MAX;
int64_t x158 = 12977LL;
uint16_t x160 = 2495U;
int64_t t38 = -15273036152LL;
uint32_t x164 = 12749326U;
static volatile int16_t x166 = -110;
static int8_t x170 = 7;
int8_t x172 = INT8_MIN;
int32_t t42 = -7572962;
uint8_t x177 = 78U;
int8_t x188 = -23;
uint32_t x191 = UINT32_MAX;
int32_t x192 = INT32_MIN;
volatile uint64_t t46 = 1877827382733554837LLU;
volatile uint8_t x198 = UINT8_MAX;
int64_t x201 = -23511019994LL;
int64_t x205 = INT64_MIN;
volatile uint64_t x210 = 5442769622LLU;
volatile int32_t x214 = INT32_MIN;
int16_t x215 = INT16_MIN;
int16_t x218 = -750;
uint8_t x220 = UINT8_MAX;
static int32_t t53 = -240;
uint32_t t54 = 3U;
uint64_t x225 = 62LLU;
uint32_t x227 = 3905213U;
int16_t x230 = 45;
int8_t x237 = 1;
int64_t x244 = INT64_MIN;
int64_t x257 = -204414510619884LL;
int8_t x261 = INT8_MAX;
int64_t x262 = INT64_MIN;
volatile int8_t x263 = -27;
uint16_t x265 = UINT16_MAX;
int32_t x274 = -1;
static int16_t x279 = 0;
int64_t x281 = -1LL;
int16_t x288 = INT16_MIN;
volatile int64_t x289 = 0LL;
int32_t x293 = INT32_MIN;
static volatile int32_t t71 = -381389;
volatile int8_t x298 = INT8_MIN;
volatile uint8_t x304 = UINT8_MAX;
uint32_t x319 = UINT32_MAX;
static volatile int64_t t77 = 6490051LL;
static volatile int32_t x333 = INT32_MIN;
uint8_t x337 = UINT8_MAX;
int32_t t79 = 2;
volatile int64_t t83 = 109702LL;
int32_t x357 = INT32_MIN;
static uint16_t x360 = 0U;
volatile uint32_t x367 = UINT32_MAX;
static uint8_t x368 = UINT8_MAX;
volatile int64_t t86 = 5291731708329674LL;
int64_t x370 = INT64_MAX;
volatile uint16_t x373 = UINT16_MAX;
int8_t x375 = 7;
uint32_t x377 = 7346914U;
static uint32_t x379 = UINT32_MAX;
volatile uint64_t x389 = 110962752039LLU;
volatile int16_t x391 = INT16_MIN;
int32_t x396 = INT32_MAX;
volatile int64_t x397 = -1LL;
int64_t x400 = -1LL;
uint32_t x401 = 1375U;
int64_t x404 = -1LL;
uint32_t t94 = 0U;
int64_t x407 = INT64_MAX;
int16_t x408 = 12;
volatile int32_t t96 = 966835;
static uint16_t x413 = 453U;
static volatile int16_t x421 = -3;


void f0(void) {
	static uint64_t x1 = UINT64_MAX;
	int16_t x2 = INT16_MIN;
	volatile uint32_t x4 = UINT32_MAX;
	uint64_t t0 = 3468094085804LLU;

	t0 = ((x1/x2)^(x3<=x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 245343411;
	int64_t x6 = 442106326LL;
	int64_t x8 = -1LL;
	int64_t t1 = -432923543LL;

	t1 = ((x5/x6)^(x7<=x8));

	if (t1 != 1LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x10 = UINT8_MAX;
	uint64_t x12 = 753LLU;

	t2 = ((x9/x10)^(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x15 = INT64_MAX;
	int8_t x16 = -1;

	t3 = ((x13/x14)^(x15<=x16));

	if (t3 != 227) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = -2LL;
	uint16_t x18 = 787U;
	int32_t x19 = -1;
	volatile int8_t x20 = -1;

	t4 = ((x17/x18)^(x19<=x20));

	if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x22 = UINT16_MAX;
	int8_t x23 = -1;
	int64_t x24 = 1580863LL;
	int32_t t5 = -229;

	t5 = ((x21/x22)^(x23<=x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = -1;
	uint32_t x26 = UINT32_MAX;
	volatile uint32_t x27 = 506339140U;
	uint16_t x28 = UINT16_MAX;
	uint32_t t6 = 3U;

	t6 = ((x25/x26)^(x27<=x28));

	if (t6 != 1U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = INT32_MAX;
	int16_t x32 = INT16_MIN;
	volatile int32_t t7 = -1;

	t7 = ((x29/x30)^(x31<=x32));

	if (t7 != -16777215) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -318247;
	uint32_t x34 = 30515710U;
	volatile int32_t x35 = -1;
	volatile uint32_t t8 = 415392U;

	t8 = ((x33/x34)^(x35<=x36));

	if (t8 != 140U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = UINT64_MAX;
	static uint16_t x38 = UINT16_MAX;
	int8_t x39 = INT8_MIN;
	volatile uint8_t x40 = 1U;
	uint64_t t9 = 1261740755LLU;

	t9 = ((x37/x38)^(x39<=x40));

	if (t9 != 281479271743488LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = 563594;
	volatile uint16_t x43 = UINT16_MAX;
	uint16_t x44 = UINT16_MAX;
	volatile int32_t t10 = -577993403;

	t10 = ((x41/x42)^(x43<=x44));

	if (t10 != -4404) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	volatile int8_t x46 = -1;
	static int32_t x47 = INT32_MIN;
	int16_t x48 = -1;
	int32_t t11 = -18;

	t11 = ((x45/x46)^(x47<=x48));

	if (t11 != 129) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = UINT64_MAX;
	uint64_t x50 = UINT64_MAX;
	static volatile int32_t x51 = INT32_MIN;
	volatile int8_t x52 = INT8_MAX;

	t12 = ((x49/x50)^(x51<=x52));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = INT8_MIN;
	static int8_t x54 = -21;
	uint32_t x56 = 385725U;
	int32_t t13 = -449289564;

	t13 = ((x53/x54)^(x55<=x56));

	if (t13 != 6) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = UINT32_MAX;
	static int8_t x59 = INT8_MAX;
	volatile int32_t x60 = INT32_MIN;

	t14 = ((x57/x58)^(x59<=x60));

	if (t14 != 33818640U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	volatile int8_t x62 = -1;
	static int64_t x63 = -1LL;
	static int32_t x64 = INT32_MAX;
	volatile int32_t t15 = 51591;

	t15 = ((x61/x62)^(x63<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x65 = 7U;
	static int8_t x66 = INT8_MAX;
	uint64_t x67 = 7LLU;
	int16_t x68 = INT16_MIN;

	t16 = ((x65/x66)^(x67<=x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x70 = -1802335925219932898LL;
	volatile int16_t x71 = -1;
	static volatile uint64_t x72 = 1833LLU;
	int64_t t17 = -528278238LL;

	t17 = ((x69/x70)^(x71<=x72));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x75 = -4;
	volatile uint32_t t18 = 27U;

	t18 = ((x73/x74)^(x75<=x76));

	if (t18 != 1U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 21587U;
	volatile uint32_t x78 = UINT32_MAX;
	int32_t x79 = INT32_MIN;
	int32_t x80 = -2561;
	volatile uint32_t t19 = 2505U;

	t19 = ((x77/x78)^(x79<=x80));

	if (t19 != 1U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x82 = 1512U;
	uint32_t x83 = 0U;
	uint8_t x84 = 46U;
	uint32_t t20 = 886735375U;

	t20 = ((x81/x82)^(x83<=x84));

	if (t20 != 723823U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -3;
	static int8_t x86 = INT8_MIN;
	int32_t x87 = INT32_MIN;
	int64_t x88 = INT64_MIN;
	static volatile int32_t t21 = 1;

	t21 = ((x85/x86)^(x87<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MAX;
	uint8_t x90 = 16U;
	int64_t t22 = 266776003780466662LL;

	t22 = ((x89/x90)^(x91<=x92));

	if (t22 != 576460752303423487LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x94 = INT16_MIN;
	uint32_t x95 = UINT32_MAX;
	int32_t x96 = 553005711;
	static volatile int32_t t23 = 91390182;

	t23 = ((x93/x94)^(x95<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x98 = INT8_MIN;
	int64_t x99 = INT64_MIN;
	uint32_t t24 = 186U;

	t24 = ((x97/x98)^(x99<=x100));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -1;
	int32_t x104 = -142324695;
	uint32_t t25 = 3U;

	t25 = ((x101/x102)^(x103<=x104));

	if (t25 != 1U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x106 = 645U;
	int64_t x107 = INT64_MAX;
	static volatile int8_t x108 = -1;
	volatile int32_t t26 = 3752395;

	t26 = ((x105/x106)^(x107<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = INT16_MIN;
	static int32_t x110 = -95055;
	int16_t x111 = INT16_MAX;
	uint16_t x112 = UINT16_MAX;
	volatile int32_t t27 = 325;

	t27 = ((x109/x110)^(x111<=x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x113 = INT64_MIN;
	volatile uint8_t x114 = 11U;
	static uint64_t x115 = 486LLU;
	int64_t x116 = INT64_MIN;
	volatile int64_t t28 = 296324LL;

	t28 = ((x113/x114)^(x115<=x116));

	if (t28 != -838488366986797799LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MAX;
	int64_t x119 = INT64_MIN;
	static int32_t x120 = INT32_MIN;

	t29 = ((x117/x118)^(x119<=x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -1;
	int8_t x122 = INT8_MIN;
	volatile int8_t x123 = INT8_MIN;
	static int8_t x124 = -31;
	int32_t t30 = -19426;

	t30 = ((x121/x122)^(x123<=x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	int32_t x126 = -1;
	int16_t x127 = 1;
	volatile int64_t x128 = INT64_MAX;
	volatile int32_t t31 = 22;

	t31 = ((x125/x126)^(x127<=x128));

	if (t31 != 129) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x129 = 3LLU;
	uint32_t x130 = 406346U;
	uint64_t x131 = UINT64_MAX;
	static uint32_t x132 = UINT32_MAX;
	uint64_t t32 = 473298812016971087LLU;

	t32 = ((x129/x130)^(x131<=x132));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x137 = 2116583110122672679LLU;
	int16_t x138 = INT16_MIN;
	int64_t x139 = INT64_MIN;
	volatile uint64_t x140 = UINT64_MAX;
	volatile uint64_t t33 = 3189292223LLU;

	t33 = ((x137/x138)^(x139<=x140));

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = INT16_MIN;
	static int16_t x142 = 1;
	uint8_t x143 = UINT8_MAX;
	int32_t x144 = 9;
	volatile int32_t t34 = 16228;

	t34 = ((x141/x142)^(x143<=x144));

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x145 = 157254758334223LLU;
	int32_t x146 = -1;
	static volatile uint64_t t35 = 8719175813718691679LLU;

	t35 = ((x145/x146)^(x147<=x148));

	if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x149 = 9680275U;
	static volatile int8_t x150 = INT8_MAX;
	static int8_t x151 = INT8_MIN;
	volatile uint8_t x152 = 15U;
	uint32_t t36 = 8156948U;

	t36 = ((x149/x150)^(x151<=x152));

	if (t36 != 76223U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x154 = UINT32_MAX;
	uint64_t x156 = UINT64_MAX;
	volatile uint32_t t37 = 50U;

	t37 = ((x153/x154)^(x155<=x156));

	if (t37 != 1U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = -89;
	volatile int8_t x159 = INT8_MIN;

	t38 = ((x157/x158)^(x159<=x160));

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = -22;
	uint8_t x162 = 1U;
	int64_t x163 = INT64_MIN;
	volatile int32_t t39 = -212245;

	t39 = ((x161/x162)^(x163<=x164));

	if (t39 != -21) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x165 = 20245645442LLU;
	int32_t x167 = INT32_MAX;
	int32_t x168 = -1;
	volatile uint64_t t40 = 99844237783426214LLU;

	t40 = ((x165/x166)^(x167<=x168));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x169 = -1;
	uint64_t x171 = UINT64_MAX;
	volatile int32_t t41 = 8172798;

	t41 = ((x169/x170)^(x171<=x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = -1;
	static volatile int8_t x174 = INT8_MIN;
	static int64_t x175 = INT64_MIN;
	int32_t x176 = INT32_MIN;

	t42 = ((x173/x174)^(x175<=x176));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x178 = 9986;
	int32_t x179 = INT32_MIN;
	uint32_t x180 = 140U;
	volatile int32_t t43 = -3217;

	t43 = ((x177/x178)^(x179<=x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x181 = 5U;
	static int64_t x182 = INT64_MIN;
	volatile int16_t x183 = -2;
	int8_t x184 = 1;
	int64_t t44 = 907516182584LL;

	t44 = ((x181/x182)^(x183<=x184));

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = INT32_MIN;
	static volatile uint8_t x186 = 8U;
	uint16_t x187 = 1U;
	volatile int32_t t45 = -65315;

	t45 = ((x185/x186)^(x187<=x188));

	if (t45 != -268435456) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x189 = INT64_MAX;
	uint64_t x190 = 457655585891344LLU;

	t46 = ((x189/x190)^(x191<=x192));

	if (t46 != 20153LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x193 = UINT8_MAX;
	int64_t x194 = -1LL;
	volatile int8_t x195 = -1;
	int32_t x196 = INT32_MIN;
	volatile int64_t t47 = -41472LL;

	t47 = ((x193/x194)^(x195<=x196));

	if (t47 != -255LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x197 = UINT16_MAX;
	int16_t x199 = INT16_MAX;
	int16_t x200 = 1937;
	int32_t t48 = 59;

	t48 = ((x197/x198)^(x199<=x200));

	if (t48 != 257) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x202 = INT32_MAX;
	static uint32_t x203 = UINT32_MAX;
	static int16_t x204 = INT16_MAX;
	int64_t t49 = 3809438137LL;

	t49 = ((x201/x202)^(x203<=x204));

	if (t49 != -10LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x206 = UINT16_MAX;
	int8_t x207 = 49;
	volatile int8_t x208 = INT8_MIN;
	volatile int64_t t50 = -3322162490658LL;

	t50 = ((x205/x206)^(x207<=x208));

	if (t50 != -140739635871744LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x209 = INT16_MIN;
	int8_t x211 = INT8_MAX;
	int64_t x212 = INT64_MAX;
	volatile uint64_t t51 = 3487080LLU;

	t51 = ((x209/x210)^(x211<=x212));

	if (t51 != 3389220077LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x213 = 27423U;
	int64_t x216 = -2622942522LL;
	int32_t t52 = -114;

	t52 = ((x213/x214)^(x215<=x216));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x217 = -665;
	int16_t x219 = -1;

	t53 = ((x217/x218)^(x219<=x220));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x221 = 168979U;
	static int8_t x222 = -1;
	volatile uint16_t x223 = 2U;
	static int64_t x224 = INT64_MAX;

	t54 = ((x221/x222)^(x223<=x224));

	if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint32_t x226 = 9U;
	int64_t x228 = INT64_MIN;
	uint64_t t55 = 1666458855389929LLU;

	t55 = ((x225/x226)^(x227<=x228));

	if (t55 != 6LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x229 = UINT32_MAX;
	volatile uint32_t x231 = UINT32_MAX;
	static int32_t x232 = INT32_MIN;
	volatile uint32_t t56 = 6453570U;

	t56 = ((x229/x230)^(x231<=x232));

	if (t56 != 95443717U) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x238 = UINT8_MAX;
	static volatile int16_t x239 = INT16_MAX;
	static int32_t x240 = INT32_MIN;
	static volatile int32_t t57 = -2525504;

	t57 = ((x237/x238)^(x239<=x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x241 = 11;
	int16_t x242 = INT16_MAX;
	uint16_t x243 = UINT16_MAX;
	int32_t t58 = 447;

	t58 = ((x241/x242)^(x243<=x244));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x245 = INT8_MIN;
	static uint32_t x246 = 1U;
	int64_t x247 = -1LL;
	uint64_t x248 = 92550200418LLU;
	uint32_t t59 = 384755U;

	t59 = ((x245/x246)^(x247<=x248));

	if (t59 != 4294967168U) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x249 = 21081751641214522LL;
	int64_t x250 = -1LL;
	static int16_t x251 = 1863;
	volatile int64_t x252 = 38633763621LL;
	static int64_t t60 = -1261678648632919LL;

	t60 = ((x249/x250)^(x251<=x252));

	if (t60 != -21081751641214521LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x253 = -427LL;
	volatile uint32_t x254 = 937U;
	int8_t x255 = INT8_MIN;
	uint16_t x256 = UINT16_MAX;
	static int64_t t61 = 1172378328802108LL;

	t61 = ((x253/x254)^(x255<=x256));

	if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x258 = -1;
	static int16_t x259 = 0;
	int8_t x260 = INT8_MAX;
	int64_t t62 = -296363LL;

	t62 = ((x257/x258)^(x259<=x260));

	if (t62 != 204414510619885LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x264 = -136;
	volatile int64_t t63 = 425LL;

	t63 = ((x261/x262)^(x263<=x264));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x266 = UINT32_MAX;
	int64_t x267 = INT64_MIN;
	int8_t x268 = 0;
	static volatile uint32_t t64 = 2346065U;

	t64 = ((x265/x266)^(x267<=x268));

	if (t64 != 1U) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x269 = UINT64_MAX;
	int8_t x270 = -14;
	volatile uint32_t x271 = 4253U;
	int16_t x272 = -1;
	volatile uint64_t t65 = 4229LLU;

	t65 = ((x269/x270)^(x271<=x272));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x273 = 7U;
	static volatile int16_t x275 = -1;
	static uint64_t x276 = 82875301LLU;
	volatile int32_t t66 = -1;

	t66 = ((x273/x274)^(x275<=x276));

	if (t66 != -7) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x277 = INT32_MIN;
	uint32_t x278 = 22U;
	int16_t x280 = 0;
	volatile uint32_t t67 = 340936U;

	t67 = ((x277/x278)^(x279<=x280));

	if (t67 != 97612892U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x282 = 13U;
	volatile uint32_t x283 = 2U;
	uint16_t x284 = 37U;
	int64_t t68 = -280783519264702814LL;

	t68 = ((x281/x282)^(x283<=x284));

	if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x285 = -1;
	static int64_t x286 = -1LL;
	static volatile uint64_t x287 = 764LLU;
	static volatile int64_t t69 = 22353952260774LL;

	t69 = ((x285/x286)^(x287<=x288));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x290 = INT64_MIN;
	int64_t x291 = -1318568127696LL;
	int16_t x292 = INT16_MIN;
	static int64_t t70 = -2752335634719LL;

	t70 = ((x289/x290)^(x291<=x292));

	if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x294 = INT32_MAX;
	static int8_t x295 = -1;
	int64_t x296 = INT64_MIN;

	t71 = ((x293/x294)^(x295<=x296));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x297 = -1LL;
	int64_t x299 = INT64_MAX;
	uint16_t x300 = 127U;
	static int64_t t72 = -19863237122313LL;

	t72 = ((x297/x298)^(x299<=x300));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x301 = INT32_MIN;
	static int8_t x302 = 1;
	static int64_t x303 = 340645419389663LL;
	int32_t t73 = INT32_MIN;

	t73 = ((x301/x302)^(x303<=x304));

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x317 = 15;
	uint64_t x318 = UINT64_MAX;
	static uint16_t x320 = 241U;
	volatile uint64_t t74 = 33665582383814915LLU;

	t74 = ((x317/x318)^(x319<=x320));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x321 = INT64_MAX;
	uint16_t x322 = UINT16_MAX;
	int32_t x323 = INT32_MIN;
	int16_t x324 = -886;
	volatile int64_t t75 = 31754383643914174LL;

	t75 = ((x321/x322)^(x323<=x324));

	if (t75 != 140739635871745LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x325 = 8873533U;
	volatile int16_t x326 = INT16_MIN;
	uint32_t x327 = UINT32_MAX;
	int16_t x328 = INT16_MIN;
	static volatile uint32_t t76 = 302508580U;

	t76 = ((x325/x326)^(x327<=x328));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x329 = 1;
	int64_t x330 = -1LL;
	static int32_t x331 = INT32_MIN;
	static int8_t x332 = INT8_MAX;

	t77 = ((x329/x330)^(x331<=x332));

	if (t77 != -2LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x334 = INT16_MIN;
	int32_t x335 = INT32_MIN;
	static int8_t x336 = 1;
	volatile int32_t t78 = -1131831;

	t78 = ((x333/x334)^(x335<=x336));

	if (t78 != 65537) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x338 = 78U;
	static uint16_t x339 = 8692U;
	int64_t x340 = INT64_MIN;

	t79 = ((x337/x338)^(x339<=x340));

	if (t79 != 3) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x341 = 0U;
	int32_t x342 = -52863001;
	int32_t x343 = -1;
	int16_t x344 = 1;
	uint32_t t80 = 22U;

	t80 = ((x341/x342)^(x343<=x344));

	if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x345 = INT16_MIN;
	uint8_t x346 = 78U;
	static int8_t x347 = 49;
	static uint64_t x348 = 224LLU;
	volatile int32_t t81 = 2802253;

	t81 = ((x345/x346)^(x347<=x348));

	if (t81 != -419) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x349 = UINT8_MAX;
	uint8_t x350 = UINT8_MAX;
	int64_t x351 = INT64_MIN;
	volatile int64_t x352 = INT64_MIN;
	volatile int32_t t82 = 87783;

	t82 = ((x349/x350)^(x351<=x352));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x353 = INT32_MAX;
	static int64_t x354 = INT64_MIN;
	int16_t x355 = INT16_MAX;
	volatile int32_t x356 = -163203;

	t83 = ((x353/x354)^(x355<=x356));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x358 = INT32_MIN;
	int16_t x359 = INT16_MAX;
	volatile int32_t t84 = 0;

	t84 = ((x357/x358)^(x359<=x360));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x361 = INT32_MIN;
	int8_t x362 = INT8_MAX;
	uint16_t x363 = UINT16_MAX;
	static int64_t x364 = INT64_MAX;
	int32_t t85 = 41559;

	t85 = ((x361/x362)^(x363<=x364));

	if (t85 != -16909319) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x365 = UINT16_MAX;
	int64_t x366 = -1LL;

	t86 = ((x365/x366)^(x367<=x368));

	if (t86 != -65535LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x369 = 1944807378U;
	int8_t x371 = INT8_MIN;
	uint64_t x372 = 4212LLU;
	int64_t t87 = 525823430019219050LL;

	t87 = ((x369/x370)^(x371<=x372));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x374 = -1;
	uint16_t x376 = 123U;
	int32_t t88 = -41621;

	t88 = ((x373/x374)^(x375<=x376));

	if (t88 != -65536) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x378 = INT16_MIN;
	int16_t x380 = INT16_MAX;
	volatile uint32_t t89 = 1096U;

	t89 = ((x377/x378)^(x379<=x380));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x381 = 1;
	uint64_t x382 = UINT64_MAX;
	int16_t x383 = INT16_MIN;
	uint32_t x384 = UINT32_MAX;
	uint64_t t90 = 35966574LLU;

	t90 = ((x381/x382)^(x383<=x384));

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x390 = 71LLU;
	static volatile int8_t x392 = -1;
	uint64_t t91 = 955015954LLU;

	t91 = ((x389/x390)^(x391<=x392));

	if (t91 != 1562855663LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x393 = UINT32_MAX;
	volatile uint16_t x394 = 6U;
	volatile int32_t x395 = -1;
	volatile uint32_t t92 = 14356411U;

	t92 = ((x393/x394)^(x395<=x396));

	if (t92 != 715827883U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x398 = 74;
	volatile uint16_t x399 = 249U;
	volatile int64_t t93 = 4448083675LL;

	t93 = ((x397/x398)^(x399<=x400));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x402 = -1;
	volatile int64_t x403 = -1650384LL;

	t94 = ((x401/x402)^(x403<=x404));

	if (t94 != 1U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x405 = UINT64_MAX;
	int64_t x406 = -2270661LL;
	uint64_t t95 = 2143361155666LLU;

	t95 = ((x405/x406)^(x407<=x408));

	if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x409 = INT8_MIN;
	int16_t x410 = INT16_MIN;
	uint8_t x411 = 112U;
	int16_t x412 = INT16_MIN;

	t96 = ((x409/x410)^(x411<=x412));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x414 = 121;
	volatile uint16_t x415 = 41U;
	static volatile int64_t x416 = INT64_MIN;
	volatile int32_t t97 = 48763468;

	t97 = ((x413/x414)^(x415<=x416));

	if (t97 != 3) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x417 = -1;
	int8_t x418 = INT8_MIN;
	static int64_t x419 = INT64_MIN;
	uint8_t x420 = UINT8_MAX;
	static volatile int32_t t98 = -221;

	t98 = ((x417/x418)^(x419<=x420));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x422 = 12U;
	int64_t x423 = -1LL;
	volatile int64_t x424 = -1LL;
	int32_t t99 = 3604613;

	t99 = ((x421/x422)^(x423<=x424));

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

