#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x4 = INT8_MAX;
static int32_t x14 = -1;
int32_t x16 = INT32_MAX;
uint16_t x17 = UINT16_MAX;
uint32_t x24 = 636U;
volatile int32_t t8 = 1705410;
uint8_t x53 = 17U;
int32_t x56 = INT32_MIN;
uint8_t x65 = 103U;
int64_t x67 = INT64_MAX;
volatile int32_t t16 = -498655492;
int32_t x69 = -1;
uint64_t x72 = 3486933015876LLU;
int8_t x73 = -1;
int32_t t18 = -13;
volatile int32_t t19 = 11;
uint64_t x85 = 109011LLU;
uint64_t x89 = 7816643966LLU;
uint32_t x100 = 0U;
static int32_t t24 = 1;
uint16_t x103 = UINT16_MAX;
static int16_t x106 = -1;
int32_t x107 = -1;
int32_t t26 = 18;
uint64_t x109 = UINT64_MAX;
int64_t x110 = INT64_MIN;
int16_t x111 = INT16_MIN;
volatile int8_t x112 = 20;
int32_t t27 = -1127;
int16_t x117 = INT16_MAX;
static uint8_t x120 = UINT8_MAX;
int64_t x121 = -1LL;
static volatile int32_t t31 = -6;
static int8_t x144 = INT8_MIN;
uint16_t x145 = 1U;
uint32_t x153 = 6795U;
int32_t x154 = 26028118;
volatile int32_t x156 = INT32_MIN;
static int32_t x157 = INT32_MIN;
int16_t x161 = 510;
volatile int64_t x162 = INT64_MIN;
int32_t x178 = INT32_MAX;
volatile uint8_t x181 = 72U;
int64_t x184 = 43789861469LL;
int32_t t44 = 327638644;
static volatile int32_t x199 = INT32_MIN;
uint64_t x207 = 2257385738325282439LLU;
volatile int32_t t49 = 3808657;
static int32_t x214 = INT32_MIN;
int8_t x225 = INT8_MIN;
volatile int64_t x228 = INT64_MIN;
int32_t t53 = 85600;
uint8_t x235 = 14U;
int16_t x237 = -1;
static volatile int32_t t55 = 253;
int16_t x243 = -1;
int16_t x247 = INT16_MIN;
static int64_t x259 = -1LL;
uint32_t x260 = 3U;
uint16_t x262 = UINT16_MAX;
int32_t x272 = INT32_MAX;
int8_t x279 = INT8_MAX;
uint64_t x300 = 44604237LLU;
static uint16_t x302 = 50U;
uint8_t x303 = UINT8_MAX;
int32_t x304 = -1;
uint16_t x306 = 1700U;
int32_t x317 = -1;
int32_t x323 = INT32_MAX;
volatile int32_t t75 = -5;
int32_t t76 = -1203;
volatile int32_t t77 = 98;
uint16_t x337 = UINT16_MAX;
int8_t x339 = -31;
int64_t x341 = -1LL;
int32_t t81 = -70650;
uint8_t x359 = UINT8_MAX;
volatile int32_t x360 = INT32_MAX;
static int32_t x364 = INT32_MAX;
volatile int32_t t84 = -3;
static volatile int64_t x371 = -348570144664LL;
int8_t x372 = INT8_MIN;
volatile int32_t t86 = 5002286;
volatile int32_t t87 = -34;
int16_t x377 = -13933;
uint16_t x386 = UINT16_MAX;
static volatile int16_t x387 = INT16_MAX;
uint32_t x388 = 84U;
int32_t x390 = INT32_MIN;
int32_t t91 = -7921;
int32_t x394 = INT32_MIN;
volatile int32_t t93 = -611;
uint32_t x403 = 14U;
static int8_t x406 = INT8_MIN;


void f0(void) {
	volatile int32_t x1 = INT32_MIN;
	volatile uint16_t x2 = UINT16_MAX;
	int64_t x3 = -1LL;
	static int32_t t0 = 0;

	t0 = (((x1/x2)/x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x5 = INT16_MIN;
	int16_t x6 = -1;
	uint8_t x7 = 1U;
	int32_t x8 = INT32_MIN;
	int32_t t1 = -1;

	t1 = (((x5/x6)/x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MAX;
	static volatile int32_t x10 = 38597;
	int64_t x11 = -91037LL;
	static int64_t x12 = INT64_MIN;
	static volatile int32_t t2 = -34195;

	t2 = (((x9/x10)/x11)<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 9429U;
	uint32_t x15 = 13219817U;
	volatile int32_t t3 = 9;

	t3 = (((x13/x14)/x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = INT8_MIN;
	static uint32_t x19 = 6518U;
	int32_t x20 = 334088;
	int32_t t4 = 58;

	t4 = (((x17/x18)/x19)<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -19136;
	static uint32_t x22 = 1U;
	volatile uint64_t x23 = 529537176791088659LLU;
	int32_t t5 = -13247468;

	t5 = (((x21/x22)/x23)<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	uint16_t x26 = 14U;
	volatile int32_t x27 = -1;
	int64_t x28 = 32612041LL;
	static volatile int32_t t6 = -1;

	t6 = (((x25/x26)/x27)<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 15395169U;
	int16_t x30 = INT16_MIN;
	int8_t x31 = -1;
	int16_t x32 = INT16_MIN;
	int32_t t7 = -867573;

	t7 = (((x29/x30)/x31)<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = INT64_MIN;
	int8_t x34 = INT8_MIN;
	uint32_t x35 = 3U;
	int32_t x36 = 32207;

	t8 = (((x33/x34)/x35)<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = INT64_MIN;
	volatile int64_t x38 = INT64_MAX;
	volatile int64_t x39 = 1753446355732837311LL;
	int64_t x40 = INT64_MIN;
	static int32_t t9 = 198;

	t9 = (((x37/x38)/x39)<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = -230321088397222044LL;
	volatile uint32_t x42 = UINT32_MAX;
	volatile int16_t x43 = 1;
	volatile int8_t x44 = INT8_MIN;
	int32_t t10 = 1;

	t10 = (((x41/x42)/x43)<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint32_t x45 = UINT32_MAX;
	int32_t x46 = -628;
	volatile int16_t x47 = -1;
	uint32_t x48 = 24058U;
	int32_t t11 = 10;

	t11 = (((x45/x46)/x47)<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	int32_t x50 = INT32_MIN;
	uint32_t x51 = 81U;
	volatile uint64_t x52 = 4LLU;
	int32_t t12 = 0;

	t12 = (((x49/x50)/x51)<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = 11091;
	int16_t x55 = -3112;
	volatile int32_t t13 = -83723;

	t13 = (((x53/x54)/x55)<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 977U;
	int64_t x58 = -8331528LL;
	int64_t x59 = INT64_MIN;
	int32_t x60 = INT32_MAX;
	int32_t t14 = 1;

	t14 = (((x57/x58)/x59)<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -7293;
	static uint8_t x62 = UINT8_MAX;
	uint8_t x63 = 28U;
	static volatile int16_t x64 = INT16_MAX;
	int32_t t15 = 24177386;

	t15 = (((x61/x62)/x63)<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = INT16_MIN;
	int16_t x68 = INT16_MAX;

	t16 = (((x65/x66)/x67)<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = -140434;
	volatile uint16_t x71 = 2U;
	volatile int32_t t17 = 3506560;

	t17 = (((x69/x70)/x71)<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x74 = INT8_MAX;
	int16_t x75 = -1;
	volatile int64_t x76 = INT64_MIN;

	t18 = (((x73/x74)/x75)<=x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x77 = UINT64_MAX;
	int64_t x78 = INT64_MAX;
	int16_t x79 = INT16_MIN;
	uint32_t x80 = UINT32_MAX;

	t19 = (((x77/x78)/x79)<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -1LL;
	static uint16_t x82 = 1186U;
	int32_t x83 = INT32_MIN;
	int64_t x84 = INT64_MIN;
	int32_t t20 = 571083168;

	t20 = (((x81/x82)/x83)<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x86 = INT16_MAX;
	int32_t x87 = INT32_MAX;
	uint16_t x88 = 2984U;
	volatile int32_t t21 = -6;

	t21 = (((x85/x86)/x87)<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x90 = -1;
	int64_t x91 = INT64_MAX;
	uint16_t x92 = 580U;
	int32_t t22 = 5;

	t22 = (((x89/x90)/x91)<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	volatile int16_t x94 = INT16_MAX;
	int16_t x95 = INT16_MIN;
	static int32_t x96 = 15054;
	volatile int32_t t23 = -62960;

	t23 = (((x93/x94)/x95)<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = 48LL;
	uint32_t x98 = 2063309U;
	int64_t x99 = INT64_MIN;

	t24 = (((x97/x98)/x99)<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = UINT64_MAX;
	static int32_t x102 = INT32_MIN;
	volatile uint32_t x104 = UINT32_MAX;
	volatile int32_t t25 = 152043318;

	t25 = (((x101/x102)/x103)<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = INT8_MIN;
	int64_t x108 = 233LL;

	t26 = (((x105/x106)/x107)<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {


	t27 = (((x109/x110)/x111)<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = 632943516278623LLU;
	int16_t x114 = INT16_MIN;
	int64_t x115 = INT64_MAX;
	int8_t x116 = INT8_MIN;
	int32_t t28 = 5550;

	t28 = (((x113/x114)/x115)<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x118 = INT64_MAX;
	int8_t x119 = 1;
	int32_t t29 = 297775126;

	t29 = (((x117/x118)/x119)<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x122 = -1;
	static int16_t x123 = -1;
	int16_t x124 = -2720;
	int32_t t30 = -3515;

	t30 = (((x121/x122)/x123)<=x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x129 = INT64_MIN;
	int8_t x130 = INT8_MIN;
	static volatile uint16_t x131 = UINT16_MAX;
	int16_t x132 = -1;

	t31 = (((x129/x130)/x131)<=x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = -1LL;
	static int64_t x134 = -100368237553940766LL;
	static volatile uint64_t x135 = 66471LLU;
	int16_t x136 = -850;
	int32_t t32 = 216861;

	t32 = (((x133/x134)/x135)<=x136);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = INT8_MIN;
	volatile int64_t x138 = INT64_MAX;
	uint64_t x139 = UINT64_MAX;
	int64_t x140 = -7884LL;
	int32_t t33 = 76188883;

	t33 = (((x137/x138)/x139)<=x140);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = -1;
	int16_t x142 = 12;
	int64_t x143 = 10486270935889LL;
	int32_t t34 = 6;

	t34 = (((x141/x142)/x143)<=x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x146 = UINT64_MAX;
	int32_t x147 = INT32_MIN;
	volatile int64_t x148 = -45698042954589802LL;
	static int32_t t35 = 2;

	t35 = (((x145/x146)/x147)<=x148);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = INT64_MAX;
	int64_t x150 = -447799LL;
	uint32_t x151 = UINT32_MAX;
	static volatile int32_t x152 = INT32_MAX;
	int32_t t36 = 0;

	t36 = (((x149/x150)/x151)<=x152);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x155 = 14LLU;
	volatile int32_t t37 = -3;

	t37 = (((x153/x154)/x155)<=x156);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x158 = -1LL;
	int16_t x159 = INT16_MIN;
	int64_t x160 = -8539719369LL;
	int32_t t38 = -1;

	t38 = (((x157/x158)/x159)<=x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x163 = UINT16_MAX;
	static int32_t x164 = INT32_MAX;
	int32_t t39 = -126222961;

	t39 = (((x161/x162)/x163)<=x164);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x165 = INT8_MIN;
	uint16_t x166 = UINT16_MAX;
	int32_t x167 = -1;
	int16_t x168 = INT16_MIN;
	volatile int32_t t40 = 10;

	t40 = (((x165/x166)/x167)<=x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x169 = -1;
	volatile int64_t x170 = -1LL;
	uint64_t x171 = 7LLU;
	uint64_t x172 = 74LLU;
	int32_t t41 = -465064343;

	t41 = (((x169/x170)/x171)<=x172);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x177 = -22;
	static int64_t x179 = 1617LL;
	uint32_t x180 = 226U;
	int32_t t42 = 235;

	t42 = (((x177/x178)/x179)<=x180);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x182 = INT8_MIN;
	uint8_t x183 = 70U;
	volatile int32_t t43 = -38;

	t43 = (((x181/x182)/x183)<=x184);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x189 = 15440261LLU;
	static int8_t x190 = -33;
	int8_t x191 = INT8_MIN;
	int8_t x192 = INT8_MAX;

	t44 = (((x189/x190)/x191)<=x192);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x193 = 4934;
	int32_t x194 = INT32_MIN;
	int32_t x195 = 31832;
	int32_t x196 = INT32_MIN;
	int32_t t45 = 291;

	t45 = (((x193/x194)/x195)<=x196);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x197 = INT32_MAX;
	uint16_t x198 = 1U;
	uint32_t x200 = UINT32_MAX;
	int32_t t46 = 16201;

	t46 = (((x197/x198)/x199)<=x200);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x201 = 26846431U;
	static int64_t x202 = INT64_MAX;
	static int64_t x203 = -17759159074336344LL;
	uint32_t x204 = 2115487415U;
	int32_t t47 = -2;

	t47 = (((x201/x202)/x203)<=x204);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x205 = 10U;
	int8_t x206 = INT8_MIN;
	uint8_t x208 = 7U;
	int32_t t48 = -648219344;

	t48 = (((x205/x206)/x207)<=x208);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x209 = 0;
	int32_t x210 = INT32_MIN;
	uint64_t x211 = 6962865755LLU;
	static int64_t x212 = INT64_MAX;

	t49 = (((x209/x210)/x211)<=x212);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x213 = 7544099356LLU;
	int32_t x215 = -41606;
	volatile int8_t x216 = -1;
	volatile int32_t t50 = -223930063;

	t50 = (((x213/x214)/x215)<=x216);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x221 = -1;
	int64_t x222 = -26LL;
	volatile int8_t x223 = -1;
	int16_t x224 = INT16_MIN;
	volatile int32_t t51 = 3607289;

	t51 = (((x221/x222)/x223)<=x224);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x226 = INT64_MIN;
	static int8_t x227 = 28;
	int32_t t52 = -691871;

	t52 = (((x225/x226)/x227)<=x228);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x229 = -1;
	int32_t x230 = 29;
	volatile uint32_t x231 = 215604U;
	uint32_t x232 = 493361822U;

	t53 = (((x229/x230)/x231)<=x232);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x233 = -1;
	volatile int32_t x234 = -1;
	static uint16_t x236 = 1U;
	volatile int32_t t54 = -343949;

	t54 = (((x233/x234)/x235)<=x236);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x238 = INT16_MIN;
	volatile int64_t x239 = -1LL;
	static volatile uint16_t x240 = 3846U;

	t55 = (((x237/x238)/x239)<=x240);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x241 = INT32_MAX;
	static int32_t x242 = INT32_MAX;
	int8_t x244 = INT8_MIN;
	volatile int32_t t56 = -135443047;

	t56 = (((x241/x242)/x243)<=x244);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x245 = 67901196930335194LL;
	uint16_t x246 = 8U;
	uint16_t x248 = 1220U;
	static int32_t t57 = -22;

	t57 = (((x245/x246)/x247)<=x248);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x253 = UINT16_MAX;
	int16_t x254 = INT16_MIN;
	uint64_t x255 = 452829051646514022LLU;
	static int64_t x256 = INT64_MIN;
	volatile int32_t t58 = -47803;

	t58 = (((x253/x254)/x255)<=x256);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x257 = 69542LLU;
	int16_t x258 = INT16_MAX;
	int32_t t59 = -453875772;

	t59 = (((x257/x258)/x259)<=x260);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x261 = INT32_MIN;
	int16_t x263 = 500;
	static uint64_t x264 = UINT64_MAX;
	static int32_t t60 = -268761;

	t60 = (((x261/x262)/x263)<=x264);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x265 = -1;
	uint16_t x266 = 1281U;
	static int8_t x267 = -1;
	static int8_t x268 = INT8_MIN;
	static volatile int32_t t61 = 2621269;

	t61 = (((x265/x266)/x267)<=x268);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x269 = INT16_MAX;
	uint16_t x270 = UINT16_MAX;
	uint32_t x271 = UINT32_MAX;
	volatile int32_t t62 = 14358270;

	t62 = (((x269/x270)/x271)<=x272);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x273 = -1;
	uint16_t x274 = 13545U;
	int8_t x275 = -1;
	int16_t x276 = INT16_MIN;
	volatile int32_t t63 = 245;

	t63 = (((x273/x274)/x275)<=x276);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x277 = 0;
	uint8_t x278 = UINT8_MAX;
	int16_t x280 = -1;
	int32_t t64 = -3135;

	t64 = (((x277/x278)/x279)<=x280);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x281 = UINT32_MAX;
	int64_t x282 = INT64_MIN;
	uint8_t x283 = 3U;
	int8_t x284 = INT8_MIN;
	int32_t t65 = -460;

	t65 = (((x281/x282)/x283)<=x284);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x285 = 87149415U;
	int16_t x286 = 395;
	static volatile uint16_t x287 = 20U;
	uint32_t x288 = 317684771U;
	static int32_t t66 = -1392;

	t66 = (((x285/x286)/x287)<=x288);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x289 = INT16_MAX;
	int32_t x290 = -1;
	static int64_t x291 = INT64_MIN;
	static volatile uint32_t x292 = 1132U;
	int32_t t67 = -62;

	t67 = (((x289/x290)/x291)<=x292);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x297 = INT64_MIN;
	int64_t x298 = -683145052LL;
	uint64_t x299 = 5LLU;
	volatile int32_t t68 = 9;

	t68 = (((x297/x298)/x299)<=x300);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x301 = -1;
	volatile int32_t t69 = -55;

	t69 = (((x301/x302)/x303)<=x304);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x305 = -370959LL;
	int64_t x307 = 5817160045862LL;
	int16_t x308 = -1;
	volatile int32_t t70 = -9;

	t70 = (((x305/x306)/x307)<=x308);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x309 = UINT16_MAX;
	int16_t x310 = INT16_MAX;
	uint16_t x311 = 113U;
	int64_t x312 = -1LL;
	int32_t t71 = 1;

	t71 = (((x309/x310)/x311)<=x312);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x313 = -1;
	int16_t x314 = INT16_MIN;
	int16_t x315 = -1;
	int16_t x316 = 0;
	static volatile int32_t t72 = 882781;

	t72 = (((x313/x314)/x315)<=x316);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x318 = 1;
	int32_t x319 = 32204;
	uint64_t x320 = UINT64_MAX;
	volatile int32_t t73 = 152;

	t73 = (((x317/x318)/x319)<=x320);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x321 = -150989;
	uint8_t x322 = UINT8_MAX;
	uint16_t x324 = 3078U;
	int32_t t74 = 3393979;

	t74 = (((x321/x322)/x323)<=x324);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x325 = INT64_MAX;
	int8_t x326 = -1;
	int64_t x327 = INT64_MAX;
	static volatile uint64_t x328 = 157171681351496LLU;

	t75 = (((x325/x326)/x327)<=x328);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x329 = -1;
	int16_t x330 = INT16_MAX;
	static int64_t x331 = -29019177820006LL;
	static int16_t x332 = -1;

	t76 = (((x329/x330)/x331)<=x332);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x333 = UINT16_MAX;
	int8_t x334 = -1;
	uint64_t x335 = UINT64_MAX;
	static int16_t x336 = 0;

	t77 = (((x333/x334)/x335)<=x336);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x338 = 29U;
	int8_t x340 = 1;
	volatile int32_t t78 = -1342833;

	t78 = (((x337/x338)/x339)<=x340);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x342 = -99LL;
	uint16_t x343 = 11606U;
	uint16_t x344 = 78U;
	volatile int32_t t79 = -8341;

	t79 = (((x341/x342)/x343)<=x344);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x345 = -15213080138848280LL;
	static int32_t x346 = -1;
	uint64_t x347 = 14552594000237LLU;
	int64_t x348 = -1LL;
	int32_t t80 = 387;

	t80 = (((x345/x346)/x347)<=x348);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x349 = 5U;
	static int8_t x350 = INT8_MIN;
	int64_t x351 = 27406607214040850LL;
	int8_t x352 = -1;

	t81 = (((x349/x350)/x351)<=x352);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x353 = 1964203LLU;
	uint64_t x354 = 2528459586LLU;
	static int8_t x355 = INT8_MAX;
	uint32_t x356 = 18U;
	static volatile int32_t t82 = 195559;

	t82 = (((x353/x354)/x355)<=x356);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x357 = 39U;
	static int64_t x358 = 1LL;
	int32_t t83 = 16295707;

	t83 = (((x357/x358)/x359)<=x360);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x361 = -561601101LL;
	int64_t x362 = INT64_MIN;
	int32_t x363 = 368043250;

	t84 = (((x361/x362)/x363)<=x364);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x365 = INT16_MAX;
	volatile int16_t x366 = 4955;
	int8_t x367 = INT8_MIN;
	static volatile int32_t x368 = INT32_MIN;
	volatile int32_t t85 = 376860895;

	t85 = (((x365/x366)/x367)<=x368);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x369 = INT32_MIN;
	int32_t x370 = INT32_MIN;

	t86 = (((x369/x370)/x371)<=x372);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x373 = INT8_MIN;
	volatile uint16_t x374 = 9122U;
	volatile uint8_t x375 = UINT8_MAX;
	uint64_t x376 = 43010557607LLU;

	t87 = (((x373/x374)/x375)<=x376);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x378 = -1;
	uint32_t x379 = UINT32_MAX;
	uint16_t x380 = 3419U;
	static int32_t t88 = 1;

	t88 = (((x377/x378)/x379)<=x380);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x381 = -1;
	volatile uint64_t x382 = 1LLU;
	volatile int16_t x383 = INT16_MAX;
	uint8_t x384 = 3U;
	int32_t t89 = 52317442;

	t89 = (((x381/x382)/x383)<=x384);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x385 = UINT32_MAX;
	int32_t t90 = -10563517;

	t90 = (((x385/x386)/x387)<=x388);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x389 = UINT32_MAX;
	static uint8_t x391 = UINT8_MAX;
	uint64_t x392 = 11229013LLU;

	t91 = (((x389/x390)/x391)<=x392);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x393 = INT8_MIN;
	int32_t x395 = 14;
	int32_t x396 = INT32_MIN;
	static volatile int32_t t92 = 197606;

	t92 = (((x393/x394)/x395)<=x396);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x397 = -1;
	static int8_t x398 = -1;
	int32_t x399 = -45;
	uint64_t x400 = 849422832842501338LLU;

	t93 = (((x397/x398)/x399)<=x400);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x401 = INT64_MIN;
	static uint8_t x402 = UINT8_MAX;
	int64_t x404 = INT64_MAX;
	volatile int32_t t94 = -5961698;

	t94 = (((x401/x402)/x403)<=x404);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x405 = 2U;
	static int8_t x407 = -5;
	uint64_t x408 = 426LLU;
	volatile int32_t t95 = -8;

	t95 = (((x405/x406)/x407)<=x408);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x409 = UINT16_MAX;
	static int64_t x410 = -18956318037130812LL;
	int16_t x411 = INT16_MIN;
	static int64_t x412 = INT64_MIN;
	int32_t t96 = 0;

	t96 = (((x409/x410)/x411)<=x412);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x413 = INT8_MAX;
	uint32_t x414 = 2126749871U;
	uint32_t x415 = UINT32_MAX;
	static int8_t x416 = 0;
	volatile int32_t t97 = -13974;

	t97 = (((x413/x414)/x415)<=x416);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x417 = INT16_MIN;
	volatile int8_t x418 = INT8_MIN;
	volatile uint16_t x419 = 2U;
	int8_t x420 = INT8_MAX;
	int32_t t98 = -1;

	t98 = (((x417/x418)/x419)<=x420);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x421 = -1;
	int32_t x422 = INT32_MIN;
	static uint64_t x423 = 168LLU;
	int8_t x424 = 6;
	int32_t t99 = 173895;

	t99 = (((x421/x422)/x423)<=x424);

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

