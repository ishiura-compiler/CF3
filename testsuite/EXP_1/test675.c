#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
uint16_t x9 = 14U;
static volatile int32_t x12 = INT32_MAX;
volatile int32_t t2 = 180705970;
volatile uint64_t t3 = 34409252760396LLU;
int16_t x19 = -1;
int16_t x25 = -5;
int64_t x26 = INT64_MIN;
uint64_t x29 = 466284LLU;
int8_t x31 = INT8_MAX;
int8_t x35 = INT8_MIN;
volatile uint64_t t10 = UINT64_MAX;
volatile int32_t x45 = INT32_MAX;
int64_t t11 = -148630197LL;
uint32_t x53 = 16673U;
uint32_t x58 = 3U;
uint32_t x59 = 559789U;
uint32_t x61 = 70U;
int16_t x67 = INT16_MAX;
static int64_t x71 = INT64_MIN;
int32_t x73 = INT32_MIN;
static volatile int16_t x74 = INT16_MIN;
static uint16_t x80 = 831U;
uint64_t x83 = 6219382270261LLU;
static int32_t x87 = 45626524;
int64_t x92 = INT64_MIN;
static uint64_t x95 = 11791LLU;
volatile uint64_t t23 = UINT64_MAX;
int32_t x97 = INT32_MAX;
uint64_t x98 = 19228589265347096LLU;
volatile int8_t x102 = INT8_MAX;
int32_t t25 = 248;
int16_t x107 = -2;
int8_t x119 = INT8_MIN;
int32_t t29 = -1223172;
volatile uint32_t t30 = 18U;
int32_t x125 = 27613533;
static int16_t x128 = INT16_MIN;
int8_t x130 = -1;
static int32_t t32 = 62549;
int32_t x139 = -10138;
volatile uint8_t x141 = 24U;
int32_t x144 = INT32_MIN;
volatile uint64_t t35 = 336377LLU;
static int32_t x146 = INT32_MIN;
int32_t x155 = INT32_MIN;
volatile uint32_t t38 = 18U;
int8_t x157 = -1;
int64_t x158 = -25LL;
uint16_t x166 = UINT16_MAX;
int32_t x168 = INT32_MAX;
int16_t x171 = -1470;
uint32_t x172 = UINT32_MAX;
uint64_t t42 = UINT64_MAX;
int64_t t43 = -3663126138305482249LL;
uint64_t t46 = UINT64_MAX;
static uint32_t t47 = UINT32_MAX;
int32_t x197 = -1;
int8_t x199 = -1;
static uint16_t x208 = UINT16_MAX;
static uint8_t x211 = UINT8_MAX;
int32_t x212 = -1;
volatile int64_t x228 = INT64_MAX;
int64_t t55 = INT64_MAX;
static int32_t x229 = INT32_MIN;
int64_t x230 = INT64_MIN;
uint32_t x234 = 107346U;
volatile uint64_t x236 = 10054934351366709LLU;
int16_t x257 = 2;
volatile int8_t x264 = -8;
int16_t x265 = INT16_MIN;
static uint32_t x269 = UINT32_MAX;
int8_t x273 = INT8_MIN;
volatile uint16_t x274 = 16U;
uint32_t x279 = 7U;
volatile int32_t x288 = INT32_MAX;
static int8_t x292 = -8;
int8_t x294 = -11;
uint64_t x301 = UINT64_MAX;
uint8_t x302 = 29U;
uint16_t x304 = UINT16_MAX;
volatile uint64_t t73 = 478315636952748105LLU;
int32_t x309 = INT32_MIN;
uint64_t x311 = UINT64_MAX;
uint32_t x312 = 271924U;
volatile uint64_t t79 = 2746803028304155LLU;
int64_t x335 = -1LL;
int64_t x337 = INT64_MIN;
volatile uint64_t t81 = 565636192539566135LLU;
volatile int32_t x347 = -1;
static int16_t x352 = INT16_MAX;
int32_t x357 = -19822668;
static int64_t t88 = -138604623LL;
static int32_t x375 = -1;
static uint64_t x379 = 0LLU;
static int64_t t92 = -1164234265321666189LL;
uint64_t x386 = 19144027429454361LLU;
int64_t x395 = 81305LL;
int64_t x397 = INT64_MIN;
volatile int64_t t96 = 3732979LL;
int64_t x402 = INT64_MIN;
static int64_t x403 = -4083954220003LL;
uint32_t x409 = 531811261U;
volatile int8_t x413 = -57;
uint16_t x414 = 12914U;


void f0(void) {
	uint8_t x2 = 27U;
	static int32_t x3 = -1;
	int64_t x4 = 598529399865LL;
	int64_t t0 = 66356LL;

	t0 = (((x1/x2)^x3)|x4);

	if (t0 != 598529399997LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	int64_t x6 = -1LL;
	volatile int32_t x7 = -900;
	int8_t x8 = INT8_MIN;
	int64_t t1 = -319619300LL;

	t1 = (((x5/x6)^x7)|x8);

	if (t1 != -3LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x10 = INT16_MIN;
	int16_t x11 = -1;

	t2 = (((x9/x10)^x11)|x12);

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = UINT64_MAX;
	int64_t x14 = INT64_MIN;
	uint16_t x15 = UINT16_MAX;
	uint16_t x16 = 25479U;

	t3 = (((x13/x14)^x15)|x16);

	if (t3 != 65535LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	uint64_t x18 = 5LLU;
	uint32_t x20 = UINT32_MAX;
	volatile uint64_t t4 = 15057355165137LLU;

	t4 = (((x17/x18)^x19)|x20);

	if (t4 != 14757395259826634751LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 27LL;
	int32_t x22 = -10;
	int32_t x23 = INT32_MIN;
	volatile uint16_t x24 = UINT16_MAX;
	int64_t t5 = -521341518620381318LL;

	t5 = (((x21/x22)^x23)|x24);

	if (t5 != 2147483647LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x27 = 2556;
	static int32_t x28 = INT32_MAX;
	int64_t t6 = -156853410445113LL;

	t6 = (((x25/x26)^x27)|x28);

	if (t6 != 2147483647LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = -1;
	int16_t x32 = INT16_MIN;
	volatile uint64_t t7 = 51491549450289LLU;

	t7 = (((x29/x30)^x31)|x32);

	if (t7 != 18446744073709518975LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	int16_t x34 = INT16_MAX;
	int8_t x36 = 18;
	int32_t t8 = 7028279;

	t8 = (((x33/x34)^x35)|x36);

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = UINT64_MAX;
	static uint32_t x38 = UINT32_MAX;
	static int64_t x39 = 65947LL;
	int32_t x40 = INT32_MIN;
	uint64_t t9 = 106LLU;

	t9 = (((x37/x38)^x39)|x40);

	if (t9 != 18446744071562133914LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = -1;
	int8_t x42 = -1;
	uint64_t x43 = 202598892607113LLU;
	int32_t x44 = -1;

	t10 = (((x41/x42)^x43)|x44);

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = INT64_MIN;
	static volatile int8_t x47 = -1;
	static int64_t x48 = 12LL;

	t11 = (((x45/x46)^x47)|x48);

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = UINT32_MAX;
	int32_t x50 = INT32_MIN;
	uint32_t x51 = 3433U;
	int16_t x52 = 104;
	uint32_t t12 = 58U;

	t12 = (((x49/x50)^x51)|x52);

	if (t12 != 3432U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x54 = 3269U;
	int32_t x55 = -1;
	int32_t x56 = INT32_MIN;
	uint32_t t13 = 50046U;

	t13 = (((x53/x54)^x55)|x56);

	if (t13 != 4294967290U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x57 = 13U;
	int8_t x60 = INT8_MAX;
	uint32_t t14 = 198004474U;

	t14 = (((x57/x58)^x59)|x60);

	if (t14 != 559871U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x62 = 3455510838711LLU;
	uint64_t x63 = 83037603987853LLU;
	static int64_t x64 = -1LL;
	static uint64_t t15 = UINT64_MAX;

	t15 = (((x61/x62)^x63)|x64);

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint8_t x65 = UINT8_MAX;
	int8_t x66 = -1;
	volatile int32_t x68 = INT32_MIN;
	int32_t t16 = 375;

	t16 = (((x65/x66)^x67)|x68);

	if (t16 != -32514) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = UINT32_MAX;
	volatile int64_t x70 = 27746972754LL;
	int16_t x72 = -1;
	static volatile int64_t t17 = -147691182282042780LL;

	t17 = (((x69/x70)^x71)|x72);

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x75 = 2U;
	int8_t x76 = 20;
	static int32_t t18 = 5563;

	t18 = (((x73/x74)^x75)|x76);

	if (t18 != 65558) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = UINT32_MAX;
	int32_t x78 = INT32_MIN;
	static uint64_t x79 = 109701063810733683LLU;
	static volatile uint64_t t19 = 278339394805517866LLU;

	t19 = (((x77/x78)^x79)|x80);

	if (t19 != 109701063810733951LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x81 = 3898;
	uint32_t x82 = UINT32_MAX;
	uint64_t x84 = 271107LLU;
	uint64_t t20 = 11682LLU;

	t20 = (((x81/x82)^x83)|x84);

	if (t20 != 6219382532919LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = 4;
	static int8_t x86 = INT8_MIN;
	volatile int32_t x88 = INT32_MIN;
	int32_t t21 = -12;

	t21 = (((x85/x86)^x87)|x88);

	if (t21 != -2101857124) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -3867LL;
	volatile int32_t x90 = INT32_MAX;
	uint8_t x91 = 6U;
	volatile int64_t t22 = 3LL;

	t22 = (((x89/x90)^x91)|x92);

	if (t22 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -1;
	int8_t x94 = -32;
	int64_t x96 = -1LL;

	t23 = (((x93/x94)^x95)|x96);

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x99 = INT64_MAX;
	uint32_t x100 = UINT32_MAX;
	uint64_t t24 = 1012601540599413571LLU;

	t24 = (((x97/x98)^x99)|x100);

	if (t24 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = 0;
	int32_t x103 = INT32_MIN;
	int8_t x104 = INT8_MIN;

	t25 = (((x101/x102)^x103)|x104);

	if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	int64_t x106 = INT64_MIN;
	static uint64_t x108 = 483731831738LLU;
	static volatile uint64_t t26 = 124167LLU;

	t26 = (((x105/x106)^x107)|x108);

	if (t26 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 25U;
	int32_t x110 = INT32_MIN;
	int32_t x111 = INT32_MAX;
	int8_t x112 = INT8_MAX;
	volatile uint32_t t27 = 98889438U;

	t27 = (((x109/x110)^x111)|x112);

	if (t27 != 2147483647U) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint64_t x113 = UINT64_MAX;
	static volatile int64_t x114 = -1LL;
	int16_t x115 = -5785;
	int16_t x116 = -1;
	uint64_t t28 = UINT64_MAX;

	t28 = (((x113/x114)^x115)|x116);

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 19U;
	volatile int32_t x118 = -90;
	int8_t x120 = INT8_MIN;

	t29 = (((x117/x118)^x119)|x120);

	if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = UINT32_MAX;
	volatile uint8_t x122 = 22U;
	int8_t x123 = -1;
	static uint16_t x124 = 1254U;

	t30 = (((x121/x122)^x123)|x124);

	if (t30 != 4099741671U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x126 = UINT32_MAX;
	uint64_t x127 = 725LLU;
	uint64_t t31 = 117LLU;

	t31 = (((x125/x126)^x127)|x128);

	if (t31 != 18446744073709519573LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x129 = -1;
	static uint16_t x131 = UINT16_MAX;
	int8_t x132 = -1;

	t32 = (((x129/x130)^x131)|x132);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MAX;
	int32_t x134 = INT32_MAX;
	int16_t x135 = -131;
	static int8_t x136 = INT8_MIN;
	static int32_t t33 = 8489747;

	t33 = (((x133/x134)^x135)|x136);

	if (t33 != -4) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x137 = INT32_MAX;
	uint32_t x138 = 18U;
	int32_t x140 = -1;
	volatile uint32_t t34 = UINT32_MAX;

	t34 = (((x137/x138)^x139)|x140);

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x142 = INT64_MAX;
	uint64_t x143 = 35969LLU;

	t35 = (((x141/x142)^x143)|x144);

	if (t35 != 18446744071562103937LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = 115842584031065LL;
	int32_t x147 = INT32_MAX;
	static int64_t x148 = INT64_MIN;
	int64_t t36 = -1LL;

	t36 = (((x145/x146)^x147)|x148);

	if (t36 != -2147429706LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = UINT64_MAX;
	static int16_t x150 = INT16_MIN;
	uint8_t x151 = 24U;
	volatile int32_t x152 = -1;
	uint64_t t37 = UINT64_MAX;

	t37 = (((x149/x150)^x151)|x152);

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x153 = UINT32_MAX;
	uint16_t x154 = 8U;
	uint16_t x156 = 4U;

	t38 = (((x153/x154)^x155)|x156);

	if (t38 != 2684354559U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x159 = INT64_MIN;
	static int8_t x160 = INT8_MAX;
	static volatile int64_t t39 = 2745LL;

	t39 = (((x157/x158)^x159)|x160);

	if (t39 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = UINT16_MAX;
	uint8_t x162 = 13U;
	int32_t x163 = -24;
	int16_t x164 = INT16_MAX;
	int32_t t40 = -1213633;

	t40 = (((x161/x162)^x163)|x164);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint8_t x165 = UINT8_MAX;
	uint8_t x167 = 34U;
	int32_t t41 = INT32_MAX;

	t41 = (((x165/x166)^x167)|x168);

	if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 29098881LLU;
	static int32_t x170 = INT32_MIN;

	t42 = (((x169/x170)^x171)|x172);

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	uint32_t x174 = 7U;
	static volatile int8_t x175 = -1;
	int64_t x176 = 226003119182392168LL;

	t43 = (((x173/x174)^x175)|x176);

	if (t43 != 226003120440721389LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x177 = INT32_MIN;
	uint8_t x178 = 4U;
	static int32_t x179 = INT32_MIN;
	int8_t x180 = INT8_MIN;
	volatile int32_t t44 = -1;

	t44 = (((x177/x178)^x179)|x180);

	if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MIN;
	int64_t x182 = -1LL;
	volatile int64_t x183 = INT64_MIN;
	uint16_t x184 = 9U;
	volatile int64_t t45 = 2902LL;

	t45 = (((x181/x182)^x183)|x184);

	if (t45 != -9223372036854743031LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x189 = UINT64_MAX;
	int8_t x190 = 61;
	volatile int64_t x191 = -3672LL;
	int32_t x192 = -1;

	t46 = (((x189/x190)^x191)|x192);

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x193 = UINT8_MAX;
	static uint16_t x194 = 7502U;
	volatile int16_t x195 = -1;
	uint32_t x196 = 29U;

	t47 = (((x193/x194)^x195)|x196);

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x198 = UINT16_MAX;
	int8_t x200 = -1;
	int32_t t48 = -629;

	t48 = (((x197/x198)^x199)|x200);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x201 = 1U;
	int16_t x202 = -1;
	int32_t x203 = INT32_MAX;
	static int64_t x204 = INT64_MAX;
	int64_t t49 = 1315341778499LL;

	t49 = (((x201/x202)^x203)|x204);

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x205 = 202U;
	uint32_t x206 = 31740U;
	int64_t x207 = -57445730LL;
	volatile int64_t t50 = 66LL;

	t50 = (((x205/x206)^x207)|x208);

	if (t50 != -57409537LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x209 = INT16_MIN;
	static uint16_t x210 = UINT16_MAX;
	int32_t t51 = -7;

	t51 = (((x209/x210)^x211)|x212);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x213 = -4509;
	int64_t x214 = INT64_MIN;
	uint32_t x215 = 194752U;
	static int8_t x216 = -40;
	int64_t t52 = 312135LL;

	t52 = (((x213/x214)^x215)|x216);

	if (t52 != -40LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x217 = UINT16_MAX;
	volatile int32_t x218 = INT32_MAX;
	static volatile int64_t x219 = -1LL;
	int16_t x220 = -1;
	int64_t t53 = 85356LL;

	t53 = (((x217/x218)^x219)|x220);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x221 = -617863250673179LL;
	static uint8_t x222 = 56U;
	volatile uint16_t x223 = 230U;
	int16_t x224 = INT16_MIN;
	volatile int64_t t54 = 48017496089606LL;

	t54 = (((x221/x222)^x223)|x224);

	if (t54 != -13423LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x225 = INT8_MIN;
	volatile int64_t x226 = 627563LL;
	uint16_t x227 = UINT16_MAX;

	t55 = (((x225/x226)^x227)|x228);

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x231 = INT8_MIN;
	static volatile int64_t x232 = 141870LL;
	static volatile int64_t t56 = 65212LL;

	t56 = (((x229/x230)^x231)|x232);

	if (t56 != -82LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int16_t x233 = INT16_MIN;
	uint32_t x235 = 620U;
	static volatile uint64_t t57 = 515LLU;

	t57 = (((x233/x234)^x235)|x236);

	if (t57 != 10054934351371831LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x237 = 29685736LL;
	int64_t x238 = INT64_MIN;
	volatile int16_t x239 = -1;
	int32_t x240 = -1;
	static int64_t t58 = 445812921848662797LL;

	t58 = (((x237/x238)^x239)|x240);

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x241 = -1;
	int8_t x242 = -1;
	static uint8_t x243 = UINT8_MAX;
	static volatile int16_t x244 = -1;
	int32_t t59 = -375172657;

	t59 = (((x241/x242)^x243)|x244);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x245 = INT32_MAX;
	volatile int64_t x246 = INT64_MIN;
	int8_t x247 = INT8_MAX;
	volatile int16_t x248 = -1;
	int64_t t60 = -361186786187LL;

	t60 = (((x245/x246)^x247)|x248);

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x249 = 3721;
	uint64_t x250 = 76LLU;
	static uint16_t x251 = UINT16_MAX;
	volatile int16_t x252 = -1;
	uint64_t t61 = UINT64_MAX;

	t61 = (((x249/x250)^x251)|x252);

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x253 = 472693146;
	int32_t x254 = INT32_MAX;
	volatile int16_t x255 = -1;
	volatile int32_t x256 = INT32_MIN;
	volatile int32_t t62 = 404389;

	t62 = (((x253/x254)^x255)|x256);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x258 = 4U;
	uint64_t x259 = 8646090394268145967LLU;
	int32_t x260 = -1;
	volatile uint64_t t63 = UINT64_MAX;

	t63 = (((x257/x258)^x259)|x260);

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x261 = -1;
	int8_t x262 = 3;
	volatile uint16_t x263 = 704U;
	static int32_t t64 = 1;

	t64 = (((x261/x262)^x263)|x264);

	if (t64 != -8) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x266 = UINT64_MAX;
	int16_t x267 = -11909;
	int32_t x268 = INT32_MIN;
	uint64_t t65 = 11194609854114LLU;

	t65 = (((x265/x266)^x267)|x268);

	if (t65 != 18446744073709539707LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x270 = -1LL;
	uint8_t x271 = UINT8_MAX;
	int16_t x272 = INT16_MIN;
	volatile int64_t t66 = 87870566755212LL;

	t66 = (((x269/x270)^x271)|x272);

	if (t66 != -32514LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x275 = UINT32_MAX;
	int8_t x276 = INT8_MIN;
	static uint32_t t67 = 867443U;

	t67 = (((x273/x274)^x275)|x276);

	if (t67 != 4294967175U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x277 = 9758U;
	int8_t x278 = INT8_MAX;
	int32_t x280 = -17;
	static volatile uint32_t t68 = 102283U;

	t68 = (((x277/x278)^x279)|x280);

	if (t68 != 4294967279U) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x285 = INT32_MIN;
	uint16_t x286 = 2463U;
	static volatile uint32_t x287 = UINT32_MAX;
	volatile uint32_t t69 = 1U;

	t69 = (((x285/x286)^x287)|x288);

	if (t69 != 2147483647U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x289 = -1LL;
	uint8_t x290 = 38U;
	static volatile int16_t x291 = INT16_MIN;
	int64_t t70 = -166245992LL;

	t70 = (((x289/x290)^x291)|x292);

	if (t70 != -8LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x293 = -27;
	int64_t x295 = INT64_MIN;
	uint16_t x296 = 5U;
	static int64_t t71 = 32278385LL;

	t71 = (((x293/x294)^x295)|x296);

	if (t71 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x297 = -1;
	int32_t x298 = INT32_MIN;
	static uint64_t x299 = 6831651324079777LLU;
	uint8_t x300 = UINT8_MAX;
	uint64_t t72 = 5786989889124265393LLU;

	t72 = (((x297/x298)^x299)|x300);

	if (t72 != 6831651324079871LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x303 = -1LL;

	t73 = (((x301/x302)^x303)|x304);

	if (t73 != 17810649450478239743LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x305 = 1;
	int16_t x306 = 24;
	uint64_t x307 = 1761378137101LLU;
	volatile uint64_t x308 = UINT64_MAX;
	uint64_t t74 = UINT64_MAX;

	t74 = (((x305/x306)^x307)|x308);

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x310 = INT8_MIN;
	uint64_t t75 = 143933570801738059LLU;

	t75 = (((x309/x310)^x311)|x312);

	if (t75 != 18446744073692774399LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x317 = 500179874624LLU;
	int64_t x318 = -1LL;
	volatile uint64_t x319 = 230033583LLU;
	volatile int16_t x320 = INT16_MIN;
	volatile uint64_t t76 = 1019208LLU;

	t76 = (((x317/x318)^x319)|x320);

	if (t76 != 18446744073709521071LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x321 = INT32_MAX;
	volatile int32_t x322 = INT32_MIN;
	uint16_t x323 = 51U;
	volatile int64_t x324 = INT64_MIN;
	int64_t t77 = 1012758LL;

	t77 = (((x321/x322)^x323)|x324);

	if (t77 != -9223372036854775757LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x325 = -124;
	uint32_t x326 = 4U;
	volatile int64_t x327 = -25LL;
	int8_t x328 = INT8_MIN;
	int64_t t78 = 7LL;

	t78 = (((x325/x326)^x327)|x328);

	if (t78 != -122LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x329 = 564798144417471LLU;
	uint8_t x330 = 14U;
	static int32_t x331 = -1;
	uint8_t x332 = UINT8_MAX;

	t79 = (((x329/x330)^x331)|x332);

	if (t79 != 18446703730984950527LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x333 = INT32_MAX;
	int32_t x334 = INT32_MIN;
	static int64_t x336 = -1LL;
	int64_t t80 = 4320751LL;

	t80 = (((x333/x334)^x335)|x336);

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x338 = UINT8_MAX;
	uint64_t x339 = UINT64_MAX;
	static int8_t x340 = INT8_MAX;

	t81 = (((x337/x338)^x339)|x340);

	if (t81 != 36170086419038335LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x341 = -1LL;
	int16_t x342 = INT16_MAX;
	uint16_t x343 = UINT16_MAX;
	static uint64_t x344 = 12LLU;
	volatile uint64_t t82 = 15755411896910222LLU;

	t82 = (((x341/x342)^x343)|x344);

	if (t82 != 65535LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x345 = 100309U;
	int16_t x346 = INT16_MIN;
	int16_t x348 = -1;
	volatile uint32_t t83 = UINT32_MAX;

	t83 = (((x345/x346)^x347)|x348);

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t x349 = 1;
	volatile uint16_t x350 = 26963U;
	volatile int8_t x351 = -1;
	volatile int32_t t84 = 72820818;

	t84 = (((x349/x350)^x351)|x352);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x353 = INT32_MIN;
	uint8_t x354 = UINT8_MAX;
	volatile uint8_t x355 = 14U;
	static int16_t x356 = INT16_MIN;
	static volatile int32_t t85 = -1;

	t85 = (((x353/x354)^x355)|x356);

	if (t85 != -114) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x358 = UINT16_MAX;
	uint16_t x359 = 5U;
	int16_t x360 = 0;
	volatile int32_t t86 = -1;

	t86 = (((x357/x358)^x359)|x360);

	if (t86 != -297) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x361 = INT64_MIN;
	volatile int32_t x362 = -33187098;
	uint64_t x363 = 3LLU;
	uint16_t x364 = UINT16_MAX;
	uint64_t t87 = 201491897571117526LLU;

	t87 = (((x361/x362)^x363)|x364);

	if (t87 != 277920415743LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x365 = 8108;
	static int64_t x366 = -1LL;
	static volatile uint32_t x367 = UINT32_MAX;
	uint8_t x368 = UINT8_MAX;

	t88 = (((x365/x366)^x367)|x368);

	if (t88 != -4294959105LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x369 = 317;
	volatile uint32_t x370 = 103426084U;
	int8_t x371 = -1;
	int64_t x372 = -370460044413LL;
	static int64_t t89 = -234145404937LL;

	t89 = (((x369/x370)^x371)|x372);

	if (t89 != -369367187457LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x373 = INT16_MIN;
	int32_t x374 = -1;
	uint16_t x376 = UINT16_MAX;
	int32_t t90 = -234489942;

	t90 = (((x373/x374)^x375)|x376);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x377 = -5284LL;
	int64_t x378 = -1LL;
	int16_t x380 = -1;
	uint64_t t91 = UINT64_MAX;

	t91 = (((x377/x378)^x379)|x380);

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x381 = 2197U;
	static volatile int64_t x382 = INT64_MAX;
	uint32_t x383 = 2958U;
	static volatile int16_t x384 = INT16_MAX;

	t92 = (((x381/x382)^x383)|x384);

	if (t92 != 32767LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x385 = -583;
	int8_t x387 = INT8_MIN;
	static int64_t x388 = -1LL;
	uint64_t t93 = UINT64_MAX;

	t93 = (((x385/x386)^x387)|x388);

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x389 = 8563223U;
	volatile int32_t x390 = 4580887;
	int64_t x391 = 251064788LL;
	int8_t x392 = INT8_MAX;
	static int64_t t94 = 8LL;

	t94 = (((x389/x390)^x391)|x392);

	if (t94 != 251064831LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x393 = -1;
	volatile int64_t x394 = INT64_MIN;
	uint16_t x396 = 1144U;
	static volatile int64_t t95 = -14382804722182384LL;

	t95 = (((x393/x394)^x395)|x396);

	if (t95 != 81401LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x398 = INT16_MIN;
	static volatile uint8_t x399 = 5U;
	volatile int32_t x400 = -202938;

	t96 = (((x397/x398)^x399)|x400);

	if (t96 != -202937LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint32_t x401 = UINT32_MAX;
	uint8_t x404 = 32U;
	volatile int64_t t97 = 11915231LL;

	t97 = (((x401/x402)^x403)|x404);

	if (t97 != -4083954219971LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x410 = -63;
	static int32_t x411 = -1;
	static int8_t x412 = INT8_MIN;
	volatile uint32_t t98 = UINT32_MAX;

	t98 = (((x409/x410)^x411)|x412);

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x415 = UINT32_MAX;
	uint16_t x416 = 241U;
	uint32_t t99 = UINT32_MAX;

	t99 = (((x413/x414)^x415)|x416);

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

