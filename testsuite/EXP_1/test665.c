#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x8 = 722U;
static int64_t t1 = 4568077586967LL;
static int8_t x9 = 1;
int64_t x14 = -42LL;
volatile int64_t t3 = -125282468848399687LL;
uint8_t x20 = 106U;
uint64_t x23 = 368LLU;
uint8_t x33 = UINT8_MAX;
int64_t x35 = -208176LL;
static volatile uint8_t x38 = 3U;
static int32_t x40 = -51968559;
int32_t t9 = -300;
uint16_t x59 = UINT16_MAX;
int16_t x64 = INT16_MAX;
static uint64_t t13 = 2259668845630LLU;
static uint64_t x65 = 183999115657747151LLU;
static volatile int64_t t15 = 48563867LL;
uint32_t x75 = 5688364U;
uint64_t t16 = 664LLU;
uint32_t x77 = 1U;
int64_t x83 = INT64_MIN;
volatile uint64_t x84 = UINT64_MAX;
uint64_t x85 = 6658999LLU;
static int32_t x89 = -1;
int64_t t20 = 9LL;
volatile int32_t t22 = 943315;
volatile int16_t x101 = -1;
int64_t x105 = INT64_MIN;
static uint16_t x113 = 169U;
static volatile int64_t t25 = -131341LL;
int8_t x123 = INT8_MAX;
uint32_t x126 = 48970U;
static uint32_t x127 = 51U;
volatile int64_t t28 = -88162330LL;
int32_t x131 = INT32_MIN;
static volatile int64_t t29 = -1LL;
uint64_t x139 = 105664235454804781LLU;
volatile uint64_t t31 = 548469177531128LLU;
volatile int32_t x148 = INT32_MIN;
uint16_t x151 = 25U;
static int8_t x157 = INT8_MAX;
int8_t x162 = INT8_MIN;
int64_t x165 = -1LL;
uint64_t t38 = 581022231LLU;
static volatile int64_t t39 = 57837094LL;
volatile uint16_t x177 = 1153U;
int64_t t41 = 5492993552742169LL;
volatile int32_t t42 = -5;
int16_t x189 = 6840;
int64_t x193 = -1LL;
int32_t x194 = INT32_MAX;
int32_t x196 = 92535779;
int64_t t45 = -550243518286014700LL;
int8_t x200 = INT8_MIN;
static int32_t x202 = INT32_MAX;
uint32_t x203 = UINT32_MAX;
uint16_t x205 = 6U;
int8_t x208 = -1;
uint16_t x224 = 2U;
uint64_t t51 = 349063949194LLU;
int64_t x249 = INT64_MAX;
uint64_t t55 = 1236LLU;
volatile int64_t x253 = -118LL;
volatile int8_t x256 = INT8_MIN;
uint8_t x262 = 13U;
volatile int8_t x264 = 26;
static int32_t x266 = 1;
static uint32_t t59 = 321061U;
uint64_t x269 = UINT64_MAX;
int64_t x275 = INT64_MIN;
volatile int64_t t62 = 2350018LL;
static volatile uint64_t x281 = 2106486553930748896LLU;
int8_t x282 = INT8_MIN;
static int64_t x286 = 1369314408887441820LL;
volatile uint16_t x287 = 61U;
static int64_t x293 = 457359604764LL;
int8_t x297 = INT8_MIN;
int16_t x304 = INT16_MIN;
static volatile int32_t t68 = -100928885;
static int32_t x315 = -1;
uint32_t x317 = 1U;
static uint32_t x325 = UINT32_MAX;
volatile int32_t x328 = INT32_MAX;
int32_t t73 = 117;
volatile uint64_t t74 = 6991587LLU;
int64_t x337 = 6982972732LL;
uint8_t x343 = 118U;
volatile int32_t x346 = -1;
static int16_t x347 = -1;
volatile uint32_t t77 = 203374U;
int32_t x352 = INT32_MIN;
uint16_t x358 = 29053U;
int64_t t80 = -106590144LL;
int16_t x362 = INT16_MAX;
uint64_t x370 = UINT64_MAX;
static int8_t x375 = INT8_MIN;
int64_t t84 = -8967116008293854LL;
volatile int32_t x377 = 6395;
volatile uint32_t x378 = 533819U;
int64_t x381 = -1539065277LL;
static volatile uint64_t t87 = UINT64_MAX;
int16_t x395 = INT16_MAX;
uint64_t x396 = UINT64_MAX;
int16_t x400 = INT16_MIN;
int64_t x401 = INT64_MAX;
uint64_t x412 = 356280409LLU;
volatile uint64_t t93 = 0LLU;
int64_t x413 = INT64_MIN;
static int32_t x420 = -1;
int32_t x433 = INT32_MAX;


void f0(void) {
	int16_t x1 = INT16_MAX;
	uint64_t x2 = 14630LLU;
	uint16_t x3 = 4941U;
	int16_t x4 = INT16_MIN;
	static volatile uint64_t t0 = 84LLU;

	t0 = (((x1/x2)^x3)-x4);

	if (t0 != 37711LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	static uint8_t x6 = UINT8_MAX;
	volatile int8_t x7 = -11;

	t1 = (((x5/x6)^x7)-x8);

	if (t1 != 36170086419037603LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = -37;
	volatile uint16_t x11 = UINT16_MAX;
	int8_t x12 = INT8_MIN;
	int32_t t2 = 208;

	t2 = (((x9/x10)^x11)-x12);

	if (t2 != 65663) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint8_t x13 = UINT8_MAX;
	int32_t x15 = INT32_MIN;
	uint8_t x16 = 122U;

	t3 = (((x13/x14)^x15)-x16);

	if (t3 != 2147483520LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	int8_t x18 = 2;
	volatile int8_t x19 = 33;
	static volatile int32_t t4 = -948119837;

	t4 = (((x17/x18)^x19)-x20);

	if (t4 != 1073741684) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x21 = UINT64_MAX;
	static uint8_t x22 = 28U;
	int64_t x24 = 7LL;
	volatile uint64_t t5 = 18LLU;

	t5 = (((x21/x22)^x23)-x24);

	if (t5 != 658812288346769485LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int64_t x26 = -1LL;
	int8_t x27 = INT8_MIN;
	volatile int32_t x28 = -130630;
	volatile int64_t t6 = -97842366377467159LL;

	t6 = (((x25/x26)^x27)-x28);

	if (t6 != 130374LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	uint64_t x30 = 14LLU;
	uint32_t x31 = 23U;
	uint64_t x32 = 69962LLU;
	volatile uint64_t t7 = 990LLU;

	t7 = (((x29/x30)^x31)-x32);

	if (t7 != 1317624576540077773LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x34 = INT32_MAX;
	int32_t x36 = 3012;
	int64_t t8 = 3294LL;

	t8 = (((x33/x34)^x35)-x36);

	if (t8 != -211188LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MAX;
	int32_t x39 = 935453773;

	t9 = (((x37/x38)^x39)-x40);

	if (t9 != 545540374) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x45 = -1;
	int16_t x46 = INT16_MIN;
	static uint16_t x47 = 415U;
	uint32_t x48 = 307730U;
	uint32_t t10 = 22863U;

	t10 = (((x45/x46)^x47)-x48);

	if (t10 != 4294659981U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = 2U;
	static volatile int64_t x50 = INT64_MIN;
	static volatile uint32_t x51 = 19U;
	int16_t x52 = -5;
	volatile int64_t t11 = -1LL;

	t11 = (((x49/x50)^x51)-x52);

	if (t11 != 24LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = INT64_MIN;
	volatile int16_t x58 = INT16_MIN;
	int8_t x60 = INT8_MAX;
	static volatile int64_t t12 = -653164543138LL;

	t12 = (((x57/x58)^x59)-x60);

	if (t12 != 281474976776064LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x61 = -1;
	static uint64_t x62 = UINT64_MAX;
	int32_t x63 = -1;

	t13 = (((x61/x62)^x63)-x64);

	if (t13 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x66 = INT8_MIN;
	uint32_t x67 = 7758375U;
	static int16_t x68 = INT16_MAX;
	uint64_t t14 = 10778665550LLU;

	t14 = (((x65/x66)^x67)-x68);

	if (t14 != 7725608LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x69 = INT16_MIN;
	int64_t x70 = -46036LL;
	static volatile int8_t x71 = INT8_MAX;
	volatile uint32_t x72 = 362U;

	t15 = (((x69/x70)^x71)-x72);

	if (t15 != -235LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x73 = UINT64_MAX;
	volatile uint64_t x74 = 119679226324540LLU;
	uint64_t x76 = 9905828931509LLU;

	t16 = (((x73/x74)^x75)-x76);

	if (t16 != 18446734167886163589LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x78 = UINT8_MAX;
	int8_t x79 = INT8_MAX;
	uint16_t x80 = 74U;
	static volatile uint32_t t17 = 1620U;

	t17 = (((x77/x78)^x79)-x80);

	if (t17 != 53U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = INT64_MIN;
	int16_t x82 = INT16_MAX;
	uint64_t t18 = 9LLU;

	t18 = (((x81/x82)^x83)-x84);

	if (t18 != 9223090553287868409LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x86 = -184646;
	uint64_t x87 = UINT64_MAX;
	int8_t x88 = 6;
	uint64_t t19 = 12LLU;

	t19 = (((x85/x86)^x87)-x88);

	if (t19 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x90 = INT8_MIN;
	uint8_t x91 = UINT8_MAX;
	volatile int64_t x92 = -1LL;

	t20 = (((x89/x90)^x91)-x92);

	if (t20 != 256LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = INT32_MAX;
	static int8_t x94 = 1;
	int32_t x95 = INT32_MAX;
	static uint8_t x96 = 1U;
	int32_t t21 = -12104;

	t21 = (((x93/x94)^x95)-x96);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = -276;
	int32_t x98 = INT32_MIN;
	uint8_t x99 = UINT8_MAX;
	int8_t x100 = -1;

	t22 = (((x97/x98)^x99)-x100);

	if (t22 != 256) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x102 = INT64_MIN;
	int8_t x103 = INT8_MAX;
	int8_t x104 = INT8_MAX;
	int64_t t23 = -787321145546LL;

	t23 = (((x101/x102)^x103)-x104);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x106 = UINT16_MAX;
	static uint32_t x107 = 1981702116U;
	static volatile uint32_t x108 = 1783051U;
	volatile int64_t t24 = 250101902LL;

	t24 = (((x105/x106)^x107)-x108);

	if (t24 != -140741619307815LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x114 = INT64_MIN;
	volatile int16_t x115 = -5;
	volatile int32_t x116 = INT32_MIN;

	t25 = (((x113/x114)^x115)-x116);

	if (t25 != 2147483643LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x117 = 30098U;
	int8_t x118 = INT8_MAX;
	volatile int64_t x119 = -20665LL;
	static uint8_t x120 = 19U;
	volatile int64_t t26 = 6734LL;

	t26 = (((x117/x118)^x119)-x120);

	if (t26 != -20584LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = INT32_MAX;
	uint64_t x122 = 33536188890992652LLU;
	uint32_t x124 = UINT32_MAX;
	uint64_t t27 = 31LLU;

	t27 = (((x121/x122)^x123)-x124);

	if (t27 != 18446744069414584448LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x125 = INT64_MIN;
	int32_t x128 = 419327092;

	t28 = (((x125/x126)^x127)-x128);

	if (t28 != -188347816444825LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x129 = INT16_MIN;
	uint8_t x130 = UINT8_MAX;
	int64_t x132 = -8541827LL;

	t29 = (((x129/x130)^x131)-x132);

	if (t29 != 2156025347LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x133 = INT64_MIN;
	static int16_t x134 = -9133;
	uint64_t x135 = 4062LLU;
	static volatile int8_t x136 = INT8_MAX;
	volatile uint64_t t30 = 477597371722LLU;

	t30 = (((x133/x134)^x135)-x136);

	if (t30 != 1009895109694683LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x137 = -60;
	volatile uint64_t x138 = 23285LLU;
	volatile int64_t x140 = -1LL;

	t31 = (((x137/x138)^x139)-x140);

	if (t31 != 105189778819354267LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x141 = -189;
	volatile int32_t x142 = INT32_MAX;
	int8_t x143 = INT8_MAX;
	int8_t x144 = INT8_MIN;
	volatile int32_t t32 = -137679270;

	t32 = (((x141/x142)^x143)-x144);

	if (t32 != 255) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x145 = 1U;
	int16_t x146 = INT16_MIN;
	int64_t x147 = INT64_MIN;
	int64_t t33 = 19412782LL;

	t33 = (((x145/x146)^x147)-x148);

	if (t33 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x149 = -1;
	volatile int8_t x150 = 43;
	volatile int64_t x152 = 70326217LL;
	int64_t t34 = -27816785932013831LL;

	t34 = (((x149/x150)^x151)-x152);

	if (t34 != -70326192LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x153 = 873;
	int32_t x154 = INT32_MIN;
	uint64_t x155 = 34173017901233LLU;
	int8_t x156 = INT8_MAX;
	uint64_t t35 = 576443LLU;

	t35 = (((x153/x154)^x155)-x156);

	if (t35 != 34173017901106LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x158 = 258027645LL;
	int8_t x159 = INT8_MIN;
	int32_t x160 = 3899;
	int64_t t36 = 12361296LL;

	t36 = (((x157/x158)^x159)-x160);

	if (t36 != -4027LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x161 = INT64_MIN;
	int8_t x163 = -28;
	volatile int16_t x164 = 0;
	volatile int64_t t37 = 371511162663LL;

	t37 = (((x161/x162)^x163)-x164);

	if (t37 != -72057594037927964LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x166 = 10562LLU;
	uint16_t x167 = 3U;
	int64_t x168 = INT64_MIN;

	t38 = (((x165/x166)^x167)-x168);

	if (t38 != 9225118556839031591LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x169 = INT64_MAX;
	int16_t x170 = INT16_MIN;
	int64_t x171 = -1LL;
	uint8_t x172 = UINT8_MAX;

	t39 = (((x169/x170)^x171)-x172);

	if (t39 != 281474976710399LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x173 = INT64_MIN;
	static int32_t x174 = INT32_MIN;
	volatile int32_t x175 = -1;
	static int16_t x176 = -5121;
	int64_t t40 = -10679LL;

	t40 = (((x173/x174)^x175)-x176);

	if (t40 != -4294962176LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x178 = -1;
	static volatile int64_t x179 = -1407917338LL;
	int32_t x180 = -4212685;

	t41 = (((x177/x178)^x179)-x180);

	if (t41 != 1412129126LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x181 = 0U;
	int8_t x182 = 3;
	int16_t x183 = INT16_MAX;
	volatile int16_t x184 = INT16_MIN;

	t42 = (((x181/x182)^x183)-x184);

	if (t42 != 65535) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x185 = 40;
	int8_t x186 = 1;
	int64_t x187 = -2795124131706446LL;
	int16_t x188 = INT16_MIN;
	volatile int64_t t43 = -5775378925924164LL;

	t43 = (((x185/x186)^x187)-x188);

	if (t43 != -2795124131673702LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x190 = INT16_MIN;
	uint16_t x191 = 477U;
	volatile int8_t x192 = 0;
	volatile int32_t t44 = -4558;

	t44 = (((x189/x190)^x191)-x192);

	if (t44 != 477) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x195 = 104082;

	t45 = (((x193/x194)^x195)-x196);

	if (t45 != -92431697LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x197 = 0;
	volatile uint16_t x198 = 13U;
	static volatile int8_t x199 = INT8_MAX;
	volatile int32_t t46 = -1281690;

	t46 = (((x197/x198)^x199)-x200);

	if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x201 = INT64_MAX;
	uint64_t x204 = 18168879820435LLU;
	volatile uint64_t t47 = 612LLU;

	t47 = (((x201/x202)^x203)-x204);

	if (t47 != 18446725913419665770LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x206 = UINT32_MAX;
	uint16_t x207 = 3175U;
	uint32_t t48 = 177832776U;

	t48 = (((x205/x206)^x207)-x208);

	if (t48 != 3176U) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x217 = 2446U;
	volatile int32_t x218 = -28;
	static int32_t x219 = INT32_MAX;
	volatile int8_t x220 = INT8_MIN;
	volatile int32_t t49 = 1;

	t49 = (((x217/x218)^x219)-x220);

	if (t49 != -2147483434) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x221 = -4874173;
	int16_t x222 = 12;
	int32_t x223 = -1;
	int32_t t50 = -3188;

	t50 = (((x221/x222)^x223)-x224);

	if (t50 != 406178) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x225 = UINT64_MAX;
	uint8_t x226 = 21U;
	static int16_t x227 = INT16_MIN;
	int32_t x228 = 2687488;

	t51 = (((x225/x226)^x227)-x228);

	if (t51 != 17568327689244478000LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x233 = 81U;
	volatile uint64_t x234 = UINT64_MAX;
	int8_t x235 = -1;
	static volatile int64_t x236 = INT64_MIN;
	volatile uint64_t t52 = 3469710LLU;

	t52 = (((x233/x234)^x235)-x236);

	if (t52 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x241 = 54150973358LLU;
	volatile uint8_t x242 = 9U;
	uint64_t x243 = 88921LLU;
	uint16_t x244 = UINT16_MAX;
	uint64_t t53 = 210374LLU;

	t53 = (((x241/x242)^x243)-x244);

	if (t53 != 6016788985LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x245 = INT16_MIN;
	int8_t x246 = -1;
	static int16_t x247 = INT16_MIN;
	uint32_t x248 = 105U;
	volatile uint32_t t54 = 164U;

	t54 = (((x245/x246)^x247)-x248);

	if (t54 != 4294901655U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x250 = 11LLU;
	int64_t x251 = 42LL;
	uint64_t x252 = 127805088828LLU;

	t55 = (((x249/x250)^x251)-x252);

	if (t55 != 838488239181708934LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x254 = 37815036LL;
	static int8_t x255 = INT8_MIN;
	int64_t t56 = 337130960660453334LL;

	t56 = (((x253/x254)^x255)-x256);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x257 = -30517;
	int32_t x258 = -27013;
	static int8_t x259 = INT8_MIN;
	int32_t x260 = 1761219;
	static volatile int32_t t57 = -389358;

	t57 = (((x257/x258)^x259)-x260);

	if (t57 != -1761346) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x261 = 2734U;
	static int8_t x263 = INT8_MIN;
	int32_t t58 = -1;

	t58 = (((x261/x262)^x263)-x264);

	if (t58 != -200) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x265 = INT16_MIN;
	int32_t x267 = -54614;
	static uint32_t x268 = 2152743U;

	t59 = (((x265/x266)^x267)-x268);

	if (t59 != 4292858243U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x270 = INT16_MAX;
	volatile int16_t x271 = INT16_MAX;
	uint16_t x272 = 1U;
	uint64_t t60 = 1975002214LLU;

	t60 = (((x269/x270)^x271)-x272);

	if (t60 != 562967133847534LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x273 = 209739175LLU;
	static int8_t x274 = INT8_MIN;
	uint16_t x276 = 223U;
	static uint64_t t61 = 32829952614861205LLU;

	t61 = (((x273/x274)^x275)-x276);

	if (t61 != 9223372036854775585LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x277 = INT16_MAX;
	int64_t x278 = -1LL;
	int16_t x279 = INT16_MIN;
	int8_t x280 = INT8_MAX;

	t62 = (((x277/x278)^x279)-x280);

	if (t62 != -126LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x283 = 633U;
	int16_t x284 = INT16_MIN;
	volatile uint64_t t63 = 16515LLU;

	t63 = (((x281/x282)^x283)-x284);

	if (t63 != 33401LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x285 = INT8_MIN;
	int16_t x288 = 16;
	int64_t t64 = -14265331244270LL;

	t64 = (((x285/x286)^x287)-x288);

	if (t64 != 45LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x289 = 11936035U;
	int64_t x290 = -1LL;
	int8_t x291 = 6;
	volatile uint32_t x292 = 633129595U;
	volatile int64_t t65 = -69099LL;

	t65 = (((x289/x290)^x291)-x292);

	if (t65 != -645065632LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x294 = 71153;
	static int32_t x295 = 51536;
	volatile int8_t x296 = INT8_MAX;
	static int64_t t66 = 961630846076LL;

	t66 = (((x293/x294)^x295)-x296);

	if (t66 != 6479210LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x298 = 2U;
	int64_t x299 = -1LL;
	uint64_t x300 = 4618965419LLU;
	uint64_t t67 = 212987759323330LLU;

	t67 = (((x297/x298)^x299)-x300);

	if (t67 != 18446744069090586260LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x301 = INT32_MIN;
	volatile uint16_t x302 = UINT16_MAX;
	volatile int8_t x303 = INT8_MIN;

	t68 = (((x301/x302)^x303)-x304);

	if (t68 != 65408) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x309 = INT32_MIN;
	volatile int16_t x310 = INT16_MIN;
	int16_t x311 = -1;
	uint8_t x312 = 1U;
	static int32_t t69 = 1;

	t69 = (((x309/x310)^x311)-x312);

	if (t69 != -65538) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x313 = -1;
	int8_t x314 = -15;
	static int16_t x316 = INT16_MIN;
	static volatile int32_t t70 = -9334008;

	t70 = (((x313/x314)^x315)-x316);

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x318 = INT64_MAX;
	int32_t x319 = 1;
	int64_t x320 = INT64_MAX;
	int64_t t71 = -555516LL;

	t71 = (((x317/x318)^x319)-x320);

	if (t71 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x326 = INT16_MIN;
	int32_t x327 = INT32_MIN;
	uint32_t t72 = 1174U;

	t72 = (((x325/x326)^x327)-x328);

	if (t72 != 2U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x329 = UINT8_MAX;
	int32_t x330 = -2;
	uint16_t x331 = 1U;
	volatile int32_t x332 = INT32_MIN;

	t73 = (((x329/x330)^x331)-x332);

	if (t73 != 2147483520) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x333 = UINT64_MAX;
	static int32_t x334 = -1;
	volatile uint32_t x335 = 1492760880U;
	int64_t x336 = INT64_MIN;

	t74 = (((x333/x334)^x335)-x336);

	if (t74 != 9223372038347536689LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x338 = -1LL;
	int32_t x339 = INT32_MAX;
	static volatile uint8_t x340 = 16U;
	volatile int64_t t75 = -220896LL;

	t75 = (((x337/x338)^x339)-x340);

	if (t75 != -8049412821LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x341 = INT8_MAX;
	int16_t x342 = INT16_MIN;
	int16_t x344 = 4;
	volatile int32_t t76 = -1;

	t76 = (((x341/x342)^x343)-x344);

	if (t76 != 114) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x345 = 2;
	uint32_t x348 = 71305003U;

	t77 = (((x345/x346)^x347)-x348);

	if (t77 != 4223662294U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x349 = -1;
	int64_t x350 = INT64_MIN;
	int32_t x351 = -1;
	int64_t t78 = 295LL;

	t78 = (((x349/x350)^x351)-x352);

	if (t78 != 2147483647LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x353 = 6848U;
	static uint16_t x354 = UINT16_MAX;
	uint32_t x355 = 38121U;
	volatile int8_t x356 = INT8_MAX;
	uint32_t t79 = 787488861U;

	t79 = (((x353/x354)^x355)-x356);

	if (t79 != 37994U) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x357 = INT32_MIN;
	int8_t x359 = INT8_MIN;
	int64_t x360 = INT64_MAX;

	t80 = (((x357/x358)^x359)-x360);

	if (t80 != -9223372036854701883LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x361 = 3U;
	static uint16_t x363 = UINT16_MAX;
	int32_t x364 = -4841;
	int32_t t81 = -26291;

	t81 = (((x361/x362)^x363)-x364);

	if (t81 != 70376) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x365 = UINT32_MAX;
	uint64_t x366 = 51981109399299LLU;
	volatile uint8_t x367 = 80U;
	uint8_t x368 = UINT8_MAX;
	uint64_t t82 = 669768940LLU;

	t82 = (((x365/x366)^x367)-x368);

	if (t82 != 18446744073709551441LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x369 = INT32_MIN;
	int8_t x371 = 10;
	volatile uint8_t x372 = 7U;
	volatile uint64_t t83 = 2777LLU;

	t83 = (((x369/x370)^x371)-x372);

	if (t83 != 3LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x373 = 4LL;
	uint32_t x374 = UINT32_MAX;
	int64_t x376 = INT64_MIN;

	t84 = (((x373/x374)^x375)-x376);

	if (t84 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x379 = 130986573U;
	static int16_t x380 = 7;
	volatile uint32_t t85 = 8045263U;

	t85 = (((x377/x378)^x379)-x380);

	if (t85 != 130986566U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x382 = -382791961;
	volatile int64_t x383 = -1LL;
	uint8_t x384 = UINT8_MAX;
	static int64_t t86 = 51122660387LL;

	t86 = (((x381/x382)^x383)-x384);

	if (t86 != -260LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x385 = UINT16_MAX;
	volatile uint64_t x386 = UINT64_MAX;
	int64_t x387 = INT64_MAX;
	int64_t x388 = INT64_MIN;

	t87 = (((x385/x386)^x387)-x388);

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x389 = 850694200963929LLU;
	int8_t x390 = -1;
	uint32_t x391 = 86854U;
	uint64_t x392 = 3971912306720424930LLU;
	volatile uint64_t t88 = 55002359623LLU;

	t88 = (((x389/x390)^x391)-x392);

	if (t88 != 14474831766989213540LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x393 = 2U;
	volatile int16_t x394 = -110;
	static uint64_t t89 = 8523234070170908063LLU;

	t89 = (((x393/x394)^x395)-x396);

	if (t89 != 32768LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x397 = INT16_MIN;
	int8_t x398 = INT8_MAX;
	static volatile uint16_t x399 = UINT16_MAX;
	int32_t t90 = 6572835;

	t90 = (((x397/x398)^x399)-x400);

	if (t90 != -32511) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x402 = -1;
	int32_t x403 = INT32_MIN;
	int8_t x404 = -1;
	int64_t t91 = 50425LL;

	t91 = (((x401/x402)^x403)-x404);

	if (t91 != 9223372034707292162LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x405 = -15579;
	int32_t x406 = -1;
	int8_t x407 = -1;
	uint64_t x408 = 27859960634973LLU;
	static volatile uint64_t t92 = 4318491164421632991LLU;

	t92 = (((x405/x406)^x407)-x408);

	if (t92 != 18446716213748901063LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x409 = 1U;
	int8_t x410 = 2;
	uint8_t x411 = 44U;

	t93 = (((x409/x410)^x411)-x412);

	if (t93 != 18446744073353271251LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x414 = INT8_MIN;
	int32_t x415 = INT32_MIN;
	int16_t x416 = -2;
	int64_t t94 = 85861989289985LL;

	t94 = (((x413/x414)^x415)-x416);

	if (t94 != -72057596185411582LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x417 = -1;
	int16_t x418 = 99;
	static int32_t x419 = INT32_MIN;
	int32_t t95 = -993;

	t95 = (((x417/x418)^x419)-x420);

	if (t95 != -2147483647) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x421 = 50;
	int8_t x422 = -1;
	int8_t x423 = INT8_MIN;
	uint16_t x424 = 9U;
	int32_t t96 = -1;

	t96 = (((x421/x422)^x423)-x424);

	if (t96 != 69) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x429 = 148U;
	int16_t x430 = INT16_MIN;
	int16_t x431 = -3849;
	volatile int32_t x432 = INT32_MIN;
	int32_t t97 = 42542902;

	t97 = (((x429/x430)^x431)-x432);

	if (t97 != 2147479799) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x434 = INT16_MIN;
	int16_t x435 = INT16_MIN;
	int32_t x436 = 1;
	int32_t t98 = -129174;

	t98 = (((x433/x434)^x435)-x436);

	if (t98 != 32768) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x437 = INT8_MAX;
	int32_t x438 = INT32_MIN;
	int8_t x439 = INT8_MAX;
	static int64_t x440 = INT64_MAX;
	int64_t t99 = 3937648LL;

	t99 = (((x437/x438)^x439)-x440);

	if (t99 != -9223372036854775680LL) { NG(); } else { ; }
	
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

