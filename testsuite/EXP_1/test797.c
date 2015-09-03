#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = 2U;
uint8_t x5 = UINT8_MAX;
volatile int16_t x16 = 10;
int32_t x23 = INT32_MIN;
static int32_t t5 = -18;
uint8_t x25 = 58U;
volatile uint16_t x28 = 670U;
int16_t x35 = -3;
volatile int64_t x38 = INT64_MIN;
static volatile uint8_t x40 = 2U;
int64_t x44 = 148713LL;
int8_t x46 = -1;
int64_t x53 = 928LL;
static uint8_t x55 = 19U;
int64_t x56 = 77LL;
int16_t x66 = -1;
volatile uint8_t x67 = 15U;
int8_t x69 = -26;
uint64_t x71 = UINT64_MAX;
uint64_t x75 = 64237310870585LLU;
int16_t x78 = 1;
volatile int32_t t19 = -5;
volatile uint32_t x82 = UINT32_MAX;
uint64_t x84 = 33450876934807397LLU;
volatile int32_t x86 = -1;
int8_t x99 = 1;
volatile int32_t t25 = 0;
static uint32_t x113 = 26350484U;
volatile uint64_t t28 = 46278356301854389LLU;
volatile uint64_t x121 = UINT64_MAX;
uint16_t x127 = 81U;
int8_t x133 = 3;
int32_t x135 = -1;
volatile int32_t x140 = -1;
uint16_t x142 = UINT16_MAX;
uint64_t x145 = 6586165616LLU;
int16_t x147 = 380;
int32_t t38 = 3984;
static uint8_t x167 = UINT8_MAX;
static int64_t t40 = -1LL;
volatile int16_t x169 = INT16_MAX;
int16_t x183 = INT16_MAX;
uint32_t x195 = 7U;
int64_t x204 = INT64_MIN;
volatile int64_t t47 = -53LL;
int8_t x207 = 0;
int64_t x210 = INT64_MIN;
int32_t x212 = -295347577;
int32_t t51 = 5012541;
static uint64_t x221 = 25324883806105LLU;
int32_t t52 = 587;
volatile uint64_t x228 = 1724136381187LLU;
static volatile uint64_t x230 = 26978905483612LLU;
volatile int32_t t55 = -165683;
volatile int64_t x244 = INT64_MIN;
volatile int32_t t58 = 1;
int8_t x250 = 1;
int32_t x255 = INT32_MIN;
int64_t t61 = -48611LL;
int32_t x265 = INT32_MAX;
static int64_t x266 = INT64_MIN;
int32_t t64 = -243378;
int16_t x274 = INT16_MIN;
volatile uint64_t t65 = 270519535945527LLU;
int16_t x277 = INT16_MIN;
int16_t x281 = INT16_MIN;
uint32_t t67 = 0U;
uint8_t x288 = 62U;
uint64_t x294 = UINT64_MAX;
uint64_t x295 = 146LLU;
uint64_t x299 = UINT64_MAX;
int32_t x307 = 65;
volatile uint8_t x309 = 2U;
int16_t x310 = INT16_MIN;
int16_t x313 = -530;
volatile uint16_t x316 = 1U;
int32_t t74 = -47;
static volatile int32_t t78 = -7664815;
int32_t x340 = -109;
int64_t x342 = 1002357LL;
volatile uint32_t x344 = 3636765U;
uint32_t x345 = UINT32_MAX;
static int16_t x347 = -1;
int32_t x356 = -1;
volatile int32_t t85 = 512177;
uint32_t t86 = 12U;
int64_t x382 = INT64_MAX;
static int8_t x384 = -23;
static volatile int32_t t90 = -16614175;
uint32_t x386 = 1825577942U;
uint16_t x393 = UINT16_MAX;
static int8_t x396 = INT8_MIN;
int64_t t94 = 36LL;
static volatile int32_t t95 = -14995;
uint32_t x413 = UINT32_MAX;


void f0(void) {
	static uint32_t x1 = UINT32_MAX;
	int32_t x3 = INT32_MAX;
	uint16_t x4 = UINT16_MAX;
	static int32_t t0 = -135;

	t0 = (((x1%x2)<=x3)/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = 1747755;
	static int32_t x7 = INT32_MAX;
	static uint8_t x8 = 46U;
	static int32_t t1 = 356386238;

	t1 = (((x5%x6)<=x7)/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	int64_t x10 = INT64_MAX;
	int8_t x11 = 1;
	int16_t x12 = INT16_MAX;
	volatile int32_t t2 = 3353;

	t2 = (((x9%x10)<=x11)/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = INT32_MIN;
	int8_t x14 = -15;
	volatile int16_t x15 = INT16_MIN;
	int32_t t3 = -41738562;

	t3 = (((x13%x14)<=x15)/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	uint8_t x18 = 61U;
	int32_t x19 = INT32_MAX;
	static volatile int64_t x20 = -337LL;
	volatile int64_t t4 = -26208492736LL;

	t4 = (((x17%x18)<=x19)/x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	volatile int8_t x22 = -1;
	int32_t x24 = INT32_MIN;

	t5 = (((x21%x22)<=x23)/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x26 = UINT32_MAX;
	uint8_t x27 = 58U;
	int32_t t6 = 245031061;

	t6 = (((x25%x26)<=x27)/x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = -1;
	volatile uint32_t x30 = 227U;
	uint16_t x31 = 7U;
	static int32_t x32 = INT32_MIN;
	volatile int32_t t7 = 7577565;

	t7 = (((x29%x30)<=x31)/x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 3U;
	static volatile uint16_t x34 = 32066U;
	static int32_t x36 = 16;
	volatile int32_t t8 = 31478;

	t8 = (((x33%x34)<=x35)/x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	uint64_t x39 = 5LLU;
	static volatile int32_t t9 = -54;

	t9 = (((x37%x38)<=x39)/x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x41 = 2U;
	int64_t x42 = -2LL;
	uint16_t x43 = UINT16_MAX;
	volatile int64_t t10 = 55252688LL;

	t10 = (((x41%x42)<=x43)/x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	uint16_t x47 = UINT16_MAX;
	int8_t x48 = -1;
	volatile int32_t t11 = 121708926;

	t11 = (((x45%x46)<=x47)/x48);

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = 6;
	static volatile int16_t x50 = INT16_MAX;
	uint8_t x51 = 7U;
	int16_t x52 = -1;
	volatile int32_t t12 = 17;

	t12 = (((x49%x50)<=x51)/x52);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x54 = UINT64_MAX;
	static int64_t t13 = -3768277969948LL;

	t13 = (((x53%x54)<=x55)/x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = -1;
	int32_t x58 = -3;
	int8_t x59 = 0;
	int8_t x60 = INT8_MAX;
	int32_t t14 = 0;

	t14 = (((x57%x58)<=x59)/x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = UINT8_MAX;
	int64_t x62 = -1LL;
	int8_t x63 = 7;
	int8_t x64 = -1;
	static volatile int32_t t15 = 1999;

	t15 = (((x61%x62)<=x63)/x64);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 10512887U;
	int16_t x68 = INT16_MAX;
	int32_t t16 = -5;

	t16 = (((x65%x66)<=x67)/x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x70 = -2;
	volatile int8_t x72 = -7;
	int32_t t17 = -440;

	t17 = (((x69%x70)<=x71)/x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MAX;
	uint64_t x74 = 524638517488155LLU;
	int16_t x76 = 61;
	static volatile int32_t t18 = -18;

	t18 = (((x73%x74)<=x75)/x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	uint32_t x79 = UINT32_MAX;
	uint8_t x80 = 13U;

	t19 = (((x77%x78)<=x79)/x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = UINT8_MAX;
	int16_t x83 = -1;
	static volatile uint64_t t20 = 13138209778482501LLU;

	t20 = (((x81%x82)<=x83)/x84);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = -1;
	static int64_t x87 = INT64_MIN;
	int64_t x88 = -163LL;
	volatile int64_t t21 = -15LL;

	t21 = (((x85%x86)<=x87)/x88);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x89 = INT16_MIN;
	int32_t x90 = INT32_MIN;
	static int8_t x91 = -61;
	static uint32_t x92 = UINT32_MAX;
	uint32_t t22 = 180098886U;

	t22 = (((x89%x90)<=x91)/x92);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x93 = INT32_MIN;
	static uint32_t x94 = 3894965U;
	int16_t x95 = INT16_MAX;
	int32_t x96 = -1;
	int32_t t23 = 23579;

	t23 = (((x93%x94)<=x95)/x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x97 = INT32_MIN;
	int16_t x98 = INT16_MAX;
	int16_t x100 = 2;
	volatile int32_t t24 = 30854;

	t24 = (((x97%x98)<=x99)/x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 1U;
	int32_t x102 = -14;
	uint64_t x103 = 678295082547646LLU;
	static int32_t x104 = INT32_MIN;

	t25 = (((x101%x102)<=x103)/x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MAX;
	int16_t x106 = 1;
	int32_t x107 = -8956;
	static int32_t x108 = 1577187;
	volatile int32_t t26 = -14828;

	t26 = (((x105%x106)<=x107)/x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	int64_t x110 = INT64_MIN;
	static volatile int64_t x111 = -1LL;
	static int16_t x112 = -71;
	volatile int32_t t27 = 1;

	t27 = (((x109%x110)<=x111)/x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x114 = UINT64_MAX;
	int64_t x115 = 2988518447311816LL;
	uint64_t x116 = 24043671LLU;

	t28 = (((x113%x114)<=x115)/x116);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x117 = 597822U;
	int32_t x118 = INT32_MAX;
	volatile uint32_t x119 = 168U;
	int16_t x120 = INT16_MIN;
	int32_t t29 = -613735;

	t29 = (((x117%x118)<=x119)/x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x122 = UINT16_MAX;
	int8_t x123 = -2;
	uint8_t x124 = 30U;
	int32_t t30 = 7755989;

	t30 = (((x121%x122)<=x123)/x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x125 = 1767858118450207LL;
	volatile int8_t x126 = INT8_MIN;
	int32_t x128 = -116465;
	int32_t t31 = 51604220;

	t31 = (((x125%x126)<=x127)/x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint8_t x129 = 15U;
	int16_t x130 = INT16_MAX;
	int64_t x131 = INT64_MIN;
	static volatile int32_t x132 = -781146758;
	int32_t t32 = 3318;

	t32 = (((x129%x130)<=x131)/x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x134 = UINT16_MAX;
	volatile uint64_t x136 = UINT64_MAX;
	volatile uint64_t t33 = 748LLU;

	t33 = (((x133%x134)<=x135)/x136);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x137 = -17;
	int32_t x138 = INT32_MIN;
	uint32_t x139 = 6439U;
	volatile int32_t t34 = 2;

	t34 = (((x137%x138)<=x139)/x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x141 = -1;
	static int16_t x143 = INT16_MIN;
	int64_t x144 = INT64_MAX;
	volatile int64_t t35 = 17LL;

	t35 = (((x141%x142)<=x143)/x144);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x146 = INT32_MIN;
	static uint64_t x148 = 25LLU;
	uint64_t t36 = 1102776LLU;

	t36 = (((x145%x146)<=x147)/x148);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MAX;
	volatile int16_t x150 = INT16_MAX;
	int32_t x151 = INT32_MAX;
	volatile uint8_t x152 = UINT8_MAX;
	int32_t t37 = 17194;

	t37 = (((x149%x150)<=x151)/x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x153 = -6;
	int64_t x154 = INT64_MAX;
	uint8_t x155 = 4U;
	static volatile int32_t x156 = INT32_MIN;

	t38 = (((x153%x154)<=x155)/x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = UINT16_MAX;
	uint8_t x158 = UINT8_MAX;
	static int64_t x159 = INT64_MAX;
	uint8_t x160 = UINT8_MAX;
	static int32_t t39 = 22596;

	t39 = (((x157%x158)<=x159)/x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x165 = INT64_MAX;
	int32_t x166 = 915422904;
	int64_t x168 = 341364494203679962LL;

	t40 = (((x165%x166)<=x167)/x168);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x170 = INT64_MIN;
	int8_t x171 = 0;
	uint16_t x172 = 6U;
	int32_t t41 = -776436069;

	t41 = (((x169%x170)<=x171)/x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x181 = -9901013LL;
	uint8_t x182 = 58U;
	int8_t x184 = -1;
	int32_t t42 = 283291096;

	t42 = (((x181%x182)<=x183)/x184);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x185 = -65800458650LL;
	static int16_t x186 = INT16_MIN;
	int64_t x187 = INT64_MIN;
	static volatile int8_t x188 = INT8_MIN;
	volatile int32_t t43 = -14483942;

	t43 = (((x185%x186)<=x187)/x188);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x189 = 26;
	uint8_t x190 = 23U;
	int32_t x191 = INT32_MIN;
	static int64_t x192 = -4343950258LL;
	volatile int64_t t44 = -1011270627LL;

	t44 = (((x189%x190)<=x191)/x192);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x193 = 1672U;
	int8_t x194 = -3;
	int16_t x196 = INT16_MIN;
	int32_t t45 = -6969372;

	t45 = (((x193%x194)<=x195)/x196);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x197 = 34;
	int8_t x198 = INT8_MIN;
	uint16_t x199 = 1U;
	uint64_t x200 = 1061906LLU;
	static uint64_t t46 = 139083673886083924LLU;

	t46 = (((x197%x198)<=x199)/x200);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x201 = 1;
	uint8_t x202 = UINT8_MAX;
	static uint32_t x203 = UINT32_MAX;

	t47 = (((x201%x202)<=x203)/x204);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x205 = -248LL;
	static uint8_t x206 = 4U;
	int16_t x208 = -4;
	int32_t t48 = -24597317;

	t48 = (((x205%x206)<=x207)/x208);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x209 = INT16_MAX;
	int8_t x211 = -1;
	volatile int32_t t49 = -1190582;

	t49 = (((x209%x210)<=x211)/x212);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x213 = -1;
	uint8_t x214 = 116U;
	uint16_t x215 = 3U;
	int32_t x216 = -1;
	int32_t t50 = -638;

	t50 = (((x213%x214)<=x215)/x216);

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x217 = 14324U;
	volatile uint16_t x218 = 893U;
	volatile int16_t x219 = -31;
	int32_t x220 = -1;

	t51 = (((x217%x218)<=x219)/x220);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint32_t x222 = 96U;
	static uint64_t x223 = 1838599204346LLU;
	int32_t x224 = 15880;

	t52 = (((x221%x222)<=x223)/x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x225 = INT64_MAX;
	uint8_t x226 = 33U;
	int16_t x227 = INT16_MAX;
	volatile uint64_t t53 = 1061115517LLU;

	t53 = (((x225%x226)<=x227)/x228);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x229 = INT8_MIN;
	int64_t x231 = INT64_MIN;
	static int16_t x232 = INT16_MIN;
	static volatile int32_t t54 = 66316969;

	t54 = (((x229%x230)<=x231)/x232);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x233 = -1;
	int64_t x234 = INT64_MIN;
	uint64_t x235 = 372919878LLU;
	uint8_t x236 = 57U;

	t55 = (((x233%x234)<=x235)/x236);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x237 = INT32_MIN;
	static uint32_t x238 = 12872264U;
	volatile int8_t x239 = -11;
	int16_t x240 = 489;
	volatile int32_t t56 = -482113;

	t56 = (((x237%x238)<=x239)/x240);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x241 = INT8_MIN;
	int64_t x242 = INT64_MAX;
	int16_t x243 = INT16_MIN;
	volatile int64_t t57 = 406685607LL;

	t57 = (((x241%x242)<=x243)/x244);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x245 = 8U;
	volatile int8_t x246 = -44;
	int16_t x247 = INT16_MIN;
	uint16_t x248 = UINT16_MAX;

	t58 = (((x245%x246)<=x247)/x248);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x249 = INT32_MIN;
	int64_t x251 = -272911LL;
	uint8_t x252 = UINT8_MAX;
	int32_t t59 = -867732;

	t59 = (((x249%x250)<=x251)/x252);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x253 = INT16_MIN;
	int32_t x254 = INT32_MIN;
	int16_t x256 = -1035;
	static int32_t t60 = -7444132;

	t60 = (((x253%x254)<=x255)/x256);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x257 = -1;
	int16_t x258 = INT16_MIN;
	int32_t x259 = -1;
	int64_t x260 = -1LL;

	t61 = (((x257%x258)<=x259)/x260);

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x261 = UINT32_MAX;
	static uint8_t x262 = 31U;
	static int16_t x263 = -11;
	int16_t x264 = INT16_MIN;
	volatile int32_t t62 = 55;

	t62 = (((x261%x262)<=x263)/x264);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x267 = INT16_MIN;
	volatile uint32_t x268 = 89928U;
	volatile uint32_t t63 = 2671U;

	t63 = (((x265%x266)<=x267)/x268);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x269 = INT16_MIN;
	volatile int32_t x270 = INT32_MAX;
	volatile int64_t x271 = INT64_MAX;
	int32_t x272 = INT32_MAX;

	t64 = (((x269%x270)<=x271)/x272);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x273 = INT32_MAX;
	static int32_t x275 = 0;
	uint64_t x276 = 66957265763LLU;

	t65 = (((x273%x274)<=x275)/x276);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x278 = INT64_MAX;
	int32_t x279 = -10;
	static int16_t x280 = 4;
	volatile int32_t t66 = 13155559;

	t66 = (((x277%x278)<=x279)/x280);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x282 = INT32_MIN;
	volatile int64_t x283 = INT64_MIN;
	uint32_t x284 = 40130317U;

	t67 = (((x281%x282)<=x283)/x284);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x285 = -252;
	static int32_t x286 = -173;
	uint8_t x287 = UINT8_MAX;
	volatile int32_t t68 = 12;

	t68 = (((x285%x286)<=x287)/x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x293 = -1;
	int32_t x296 = 480;
	volatile int32_t t69 = -102;

	t69 = (((x293%x294)<=x295)/x296);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x297 = INT8_MAX;
	int16_t x298 = INT16_MIN;
	uint32_t x300 = UINT32_MAX;
	volatile uint32_t t70 = 2343579U;

	t70 = (((x297%x298)<=x299)/x300);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x301 = -5;
	int16_t x302 = -1;
	int32_t x303 = -313250982;
	int8_t x304 = INT8_MIN;
	int32_t t71 = 282365720;

	t71 = (((x301%x302)<=x303)/x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x305 = UINT8_MAX;
	static int8_t x306 = -17;
	int8_t x308 = -1;
	int32_t t72 = 5974;

	t72 = (((x305%x306)<=x307)/x308);

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x311 = INT32_MAX;
	volatile uint64_t x312 = UINT64_MAX;
	uint64_t t73 = 11LLU;

	t73 = (((x309%x310)<=x311)/x312);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x314 = INT32_MAX;
	int16_t x315 = -1;

	t74 = (((x313%x314)<=x315)/x316);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x317 = 18U;
	uint32_t x318 = UINT32_MAX;
	int32_t x319 = INT32_MAX;
	int64_t x320 = INT64_MAX;
	static volatile int64_t t75 = 138531178023909768LL;

	t75 = (((x317%x318)<=x319)/x320);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int64_t x325 = INT64_MAX;
	static uint8_t x326 = 17U;
	volatile uint16_t x327 = UINT16_MAX;
	int32_t x328 = -1;
	int32_t t76 = -5071987;

	t76 = (((x325%x326)<=x327)/x328);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x329 = -27;
	int64_t x330 = INT64_MAX;
	uint32_t x331 = 3729U;
	static volatile int32_t x332 = 96378306;
	int32_t t77 = 69;

	t77 = (((x329%x330)<=x331)/x332);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x333 = 32071577704LLU;
	uint8_t x334 = UINT8_MAX;
	uint8_t x335 = UINT8_MAX;
	int32_t x336 = -1;

	t78 = (((x333%x334)<=x335)/x336);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x337 = 10U;
	int8_t x338 = 4;
	uint32_t x339 = 105432U;
	volatile int32_t t79 = 4;

	t79 = (((x337%x338)<=x339)/x340);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x341 = INT16_MIN;
	int16_t x343 = INT16_MAX;
	uint32_t t80 = 55004U;

	t80 = (((x341%x342)<=x343)/x344);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x346 = UINT64_MAX;
	uint16_t x348 = 3400U;
	static volatile int32_t t81 = -29891250;

	t81 = (((x345%x346)<=x347)/x348);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x349 = 227;
	int32_t x350 = -1;
	int64_t x351 = -2101290285946644LL;
	uint16_t x352 = UINT16_MAX;
	volatile int32_t t82 = 246;

	t82 = (((x349%x350)<=x351)/x352);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x353 = -1;
	int16_t x354 = 443;
	int32_t x355 = 1880614;
	int32_t t83 = 1260078;

	t83 = (((x353%x354)<=x355)/x356);

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x357 = INT16_MIN;
	uint16_t x358 = 10U;
	volatile uint8_t x359 = 23U;
	int32_t x360 = INT32_MIN;
	int32_t t84 = 1004355629;

	t84 = (((x357%x358)<=x359)/x360);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x361 = 427971018713011237LLU;
	uint32_t x362 = UINT32_MAX;
	uint16_t x363 = 19810U;
	uint16_t x364 = 90U;

	t85 = (((x361%x362)<=x363)/x364);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x365 = 1;
	int64_t x366 = -1LL;
	volatile uint32_t x367 = UINT32_MAX;
	static uint32_t x368 = 1U;

	t86 = (((x365%x366)<=x367)/x368);

	if (t86 != 1U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x369 = INT32_MIN;
	uint64_t x370 = UINT64_MAX;
	static int32_t x371 = -1;
	int16_t x372 = INT16_MIN;
	int32_t t87 = 4;

	t87 = (((x369%x370)<=x371)/x372);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x373 = -1;
	int64_t x374 = -1LL;
	uint8_t x375 = 73U;
	int16_t x376 = INT16_MAX;
	static int32_t t88 = 28627115;

	t88 = (((x373%x374)<=x375)/x376);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x377 = 2U;
	static volatile int32_t x378 = INT32_MIN;
	volatile int32_t x379 = INT32_MAX;
	volatile int32_t x380 = INT32_MIN;
	static volatile int32_t t89 = 1121;

	t89 = (((x377%x378)<=x379)/x380);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x381 = -1;
	volatile int16_t x383 = INT16_MAX;

	t90 = (((x381%x382)<=x383)/x384);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x385 = INT16_MAX;
	static volatile int32_t x387 = INT32_MAX;
	static int64_t x388 = 212405LL;
	int64_t t91 = -164730303498441LL;

	t91 = (((x385%x386)<=x387)/x388);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x389 = 9;
	static uint64_t x390 = UINT64_MAX;
	volatile int32_t x391 = INT32_MIN;
	uint16_t x392 = 232U;
	int32_t t92 = 34;

	t92 = (((x389%x390)<=x391)/x392);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x394 = INT8_MIN;
	volatile int32_t x395 = 45;
	static volatile int32_t t93 = 4;

	t93 = (((x393%x394)<=x395)/x396);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x397 = -436;
	int32_t x398 = 6964585;
	static uint8_t x399 = UINT8_MAX;
	int64_t x400 = INT64_MIN;

	t94 = (((x397%x398)<=x399)/x400);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x401 = 2U;
	int8_t x402 = 2;
	int32_t x403 = -6;
	int8_t x404 = INT8_MAX;

	t95 = (((x401%x402)<=x403)/x404);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x405 = 4920;
	uint64_t x406 = UINT64_MAX;
	static int64_t x407 = -52739828931757LL;
	static uint64_t x408 = 7695426144202753LLU;
	volatile uint64_t t96 = 601156979879147LLU;

	t96 = (((x405%x406)<=x407)/x408);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x409 = 3U;
	volatile int32_t x410 = INT32_MIN;
	static uint16_t x411 = 12992U;
	int16_t x412 = -1;
	int32_t t97 = -2001;

	t97 = (((x409%x410)<=x411)/x412);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x414 = INT64_MIN;
	int64_t x415 = INT64_MIN;
	int32_t x416 = 1003189;
	static int32_t t98 = -1;

	t98 = (((x413%x414)<=x415)/x416);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x417 = UINT32_MAX;
	int64_t x418 = INT64_MIN;
	uint8_t x419 = 71U;
	uint16_t x420 = 378U;
	static volatile int32_t t99 = 2655;

	t99 = (((x417%x418)<=x419)/x420);

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

