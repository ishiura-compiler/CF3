#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MAX;
int16_t x2 = INT16_MIN;
int64_t x10 = INT64_MAX;
static volatile int64_t x12 = INT64_MIN;
int16_t x26 = -1;
static uint64_t x30 = 15861550909814225LLU;
int32_t x37 = 48670;
volatile int32_t x40 = INT32_MAX;
int16_t x42 = 3;
static int8_t x45 = -1;
uint16_t x59 = 6595U;
volatile int64_t x60 = -16242LL;
static int32_t t13 = -5177205;
uint32_t t14 = 80U;
volatile int16_t x71 = INT16_MAX;
int64_t x72 = -13527LL;
int64_t t15 = 4LL;
int64_t x79 = INT64_MIN;
volatile int64_t t17 = 229875074440LL;
int64_t x82 = -489465029LL;
volatile int16_t x97 = 1;
int32_t t23 = -1;
uint64_t x107 = 2152635291415LLU;
int32_t x111 = INT32_MAX;
int64_t x114 = INT64_MIN;
int16_t x118 = INT16_MAX;
volatile uint32_t t28 = 3590U;
volatile int8_t x129 = -9;
static uint32_t x136 = 30542U;
int16_t x137 = INT16_MIN;
volatile int16_t x142 = INT16_MAX;
static int64_t x155 = 1LL;
int16_t x156 = 12357;
int64_t x163 = INT64_MAX;
volatile int8_t x164 = INT8_MIN;
static int64_t t37 = -3LL;
uint32_t x168 = 353U;
int64_t t38 = -165227427126LL;
uint8_t x169 = 32U;
volatile uint32_t x178 = 4366U;
static int64_t x180 = 72LL;
int64_t t43 = 580185LL;
static uint16_t x196 = 18865U;
static int64_t t45 = -206285384302LL;
volatile int16_t x210 = -1;
int16_t x211 = INT16_MIN;
volatile int16_t x212 = INT16_MIN;
static int16_t x220 = 33;
static int16_t x221 = INT16_MIN;
volatile int8_t x223 = -1;
int8_t x225 = INT8_MAX;
static uint8_t x232 = UINT8_MAX;
int64_t x234 = 28822LL;
static int32_t x235 = INT32_MIN;
uint64_t x236 = UINT64_MAX;
static volatile int64_t x241 = INT64_MAX;
uint16_t x244 = 0U;
volatile uint64_t x247 = 122591110715LLU;
int16_t x248 = 7;
static volatile int8_t x249 = -36;
static uint32_t x252 = 3498U;
uint8_t x259 = 0U;
static int16_t x260 = -1;
static int8_t x269 = INT8_MIN;
volatile uint32_t x270 = 370U;
int16_t x271 = 2;
uint8_t x274 = 17U;
static uint8_t x276 = UINT8_MAX;
volatile int64_t t62 = 605535030325807210LL;
volatile int16_t x280 = INT16_MAX;
uint8_t x287 = UINT8_MAX;
uint16_t x300 = 11U;
uint16_t x305 = 955U;
uint32_t x306 = UINT32_MAX;
volatile uint32_t t70 = 590U;
int16_t x312 = -1;
volatile int64_t t71 = 25727LL;
volatile uint64_t x320 = UINT64_MAX;
uint8_t x324 = UINT8_MAX;
int32_t t74 = 6495;
int8_t x328 = INT8_MAX;
static int32_t x332 = -1;
volatile uint64_t t78 = 9161038709176LLU;
volatile uint8_t x351 = 2U;
volatile int32_t t80 = 261768;
int16_t x363 = INT16_MAX;
static int32_t x365 = -1;
static uint32_t x371 = 127U;
volatile int64_t t84 = 63307322153LL;
uint8_t x373 = UINT8_MAX;
static int8_t x375 = -1;
int8_t x377 = INT8_MIN;
int8_t x378 = 1;
volatile int16_t x379 = INT16_MIN;
static int32_t t86 = 10682;
int32_t x394 = 23;
int32_t x396 = -5880594;
uint8_t x397 = 40U;
int32_t x399 = -1;
uint16_t x402 = 3U;
uint8_t x403 = UINT8_MAX;
int32_t t91 = 1481751;
uint8_t x410 = 16U;
volatile int64_t x412 = INT64_MIN;
static int8_t x418 = INT8_MIN;
volatile uint32_t x421 = 22306023U;
int8_t x427 = INT8_MIN;


void f0(void) {
	uint32_t x3 = 667U;
	int8_t x4 = INT8_MIN;
	uint32_t t0 = 5578494U;

	t0 = (((x1/x2)|x3)+x4);

	if (t0 != 4294902299U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	uint16_t x6 = 55U;
	int32_t x7 = INT32_MAX;
	uint64_t x8 = 1023LLU;
	uint64_t t1 = 3779849LLU;

	t1 = (((x5/x6)|x7)+x8);

	if (t1 != 2147484670LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = -1;
	uint64_t x11 = 2LLU;
	static uint64_t t2 = 1726LLU;

	t2 = (((x9/x10)|x11)+x12);

	if (t2 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 16524377185LLU;
	int16_t x14 = -1;
	volatile int32_t x15 = 958;
	uint32_t x16 = UINT32_MAX;
	uint64_t t3 = 29178203351228LLU;

	t3 = (((x13/x14)|x15)+x16);

	if (t3 != 4294968253LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = 1307U;
	uint64_t x22 = 37976710789783554LLU;
	int16_t x23 = INT16_MIN;
	uint16_t x24 = UINT16_MAX;
	volatile uint64_t t4 = 6LLU;

	t4 = (((x21/x22)|x23)+x24);

	if (t4 != 32767LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = 0U;
	int8_t x27 = -6;
	int16_t x28 = INT16_MIN;
	int32_t t5 = 7;

	t5 = (((x25/x26)|x27)+x28);

	if (t5 != -32774) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MIN;
	int64_t x31 = 5133LL;
	volatile int16_t x32 = 711;
	uint64_t t6 = 339981198251LLU;

	t6 = (((x29/x30)|x31)+x32);

	if (t6 != 5974LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = 1110LLU;
	volatile int32_t x34 = 103758;
	int8_t x35 = 12;
	int8_t x36 = -10;
	static uint64_t t7 = 15LLU;

	t7 = (((x33/x34)|x35)+x36);

	if (t7 != 2LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x38 = -6872;
	int32_t x39 = INT32_MAX;
	int32_t t8 = 10;

	t8 = (((x37/x38)|x39)+x40);

	if (t8 != 2147483646) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = INT64_MIN;
	static int64_t x43 = 223LL;
	static volatile int32_t x44 = INT32_MIN;
	volatile int64_t t9 = 0LL;

	t9 = (((x41/x42)|x43)+x44);

	if (t9 != -3074457347765742113LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x46 = INT32_MIN;
	int32_t x47 = INT32_MIN;
	static volatile uint8_t x48 = UINT8_MAX;
	static int32_t t10 = -1824540;

	t10 = (((x45/x46)|x47)+x48);

	if (t10 != -2147483393) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x53 = -1;
	uint64_t x54 = 29666395051771LLU;
	int16_t x55 = INT16_MIN;
	int64_t x56 = INT64_MIN;
	volatile uint64_t t11 = 9LLU;

	t11 = (((x53/x54)|x55)+x56);

	if (t11 != 9223372036854775022LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = INT16_MIN;
	static int16_t x58 = -22;
	int64_t t12 = 24538LL;

	t12 = (((x57/x58)|x59)+x60);

	if (t12 != -8607LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x61 = UINT8_MAX;
	static int32_t x62 = 217889933;
	int8_t x63 = 0;
	int8_t x64 = -1;

	t13 = (((x61/x62)|x63)+x64);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = 11;
	static uint32_t x66 = UINT32_MAX;
	uint32_t x67 = 11U;
	volatile int16_t x68 = INT16_MIN;

	t14 = (((x65/x66)|x67)+x68);

	if (t14 != 4294934539U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x69 = 136U;
	int32_t x70 = -31048;

	t15 = (((x69/x70)|x71)+x72);

	if (t15 != 19240LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = INT8_MIN;
	int16_t x74 = INT16_MIN;
	int16_t x75 = -1;
	int16_t x76 = INT16_MIN;
	volatile int32_t t16 = 710;

	t16 = (((x73/x74)|x75)+x76);

	if (t16 != -32769) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x77 = -1;
	int8_t x78 = INT8_MAX;
	uint32_t x80 = 1974332U;

	t17 = (((x77/x78)|x79)+x80);

	if (t17 != -9223372036852801476LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x81 = 766;
	int8_t x83 = 46;
	static uint32_t x84 = 13915U;
	static volatile int64_t t18 = -506LL;

	t18 = (((x81/x82)|x83)+x84);

	if (t18 != 13961LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x85 = UINT16_MAX;
	int16_t x86 = -1;
	int64_t x87 = -1LL;
	volatile uint32_t x88 = 8008U;
	static int64_t t19 = 599531777866043LL;

	t19 = (((x85/x86)|x87)+x88);

	if (t19 != 8007LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x89 = 368686330024504LL;
	static uint16_t x90 = UINT16_MAX;
	uint64_t x91 = 171412881781277LLU;
	int8_t x92 = INT8_MAX;
	volatile uint64_t t20 = 74307528524LLU;

	t20 = (((x89/x90)|x91)+x92);

	if (t20 != 171418318797726LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = INT64_MIN;
	int32_t x94 = -1999786;
	int32_t x95 = INT32_MAX;
	int8_t x96 = INT8_MIN;
	volatile int64_t t21 = -8LL;

	t21 = (((x93/x94)|x95)+x96);

	if (t21 != 4612794875775LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x98 = INT16_MAX;
	uint16_t x99 = 504U;
	static int32_t x100 = -1;
	volatile int32_t t22 = 6;

	t22 = (((x97/x98)|x99)+x100);

	if (t22 != 503) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x101 = INT32_MIN;
	static uint8_t x102 = 7U;
	uint8_t x103 = 0U;
	int32_t x104 = -7;

	t23 = (((x101/x102)|x103)+x104);

	if (t23 != -306783385) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = INT8_MAX;
	int16_t x106 = INT16_MIN;
	volatile uint64_t x108 = 3907782661214216LLU;
	static uint64_t t24 = 7534962167605105469LLU;

	t24 = (((x105/x106)|x107)+x108);

	if (t24 != 3909935296505631LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x109 = INT16_MIN;
	uint32_t x110 = 397537U;
	volatile uint64_t x112 = 243783LLU;
	volatile uint64_t t25 = 526594715LLU;

	t25 = (((x109/x110)|x111)+x112);

	if (t25 != 2147727430LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x113 = 32314U;
	volatile int32_t x115 = 32784;
	int32_t x116 = 5762550;
	volatile int64_t t26 = -18LL;

	t26 = (((x113/x114)|x115)+x116);

	if (t26 != 5795334LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x117 = UINT64_MAX;
	int16_t x119 = INT16_MAX;
	uint64_t x120 = 522948607LLU;
	volatile uint64_t t27 = 36LLU;

	t27 = (((x117/x118)|x119)+x120);

	if (t27 != 562967656796158LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x121 = 49U;
	volatile uint32_t x122 = 10501U;
	volatile uint16_t x123 = 2U;
	uint16_t x124 = 12U;

	t28 = (((x121/x122)|x123)+x124);

	if (t28 != 14U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x130 = 7U;
	int8_t x131 = INT8_MIN;
	int32_t x132 = INT32_MAX;
	volatile uint32_t t29 = 65879774U;

	t29 = (((x129/x130)|x131)+x132);

	if (t29 != 2147483554U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x133 = -64000728;
	uint8_t x134 = 5U;
	int32_t x135 = -42028457;
	volatile uint32_t t30 = 1479409U;

	t30 = (((x133/x134)|x135)+x136);

	if (t30 != 4286527181U) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x138 = INT64_MIN;
	uint8_t x139 = 25U;
	uint32_t x140 = 104U;
	int64_t t31 = -51299291LL;

	t31 = (((x137/x138)|x139)+x140);

	if (t31 != 129LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x141 = INT16_MAX;
	int64_t x143 = INT64_MAX;
	int64_t x144 = INT64_MIN;
	volatile int64_t t32 = 66746LL;

	t32 = (((x141/x142)|x143)+x144);

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x145 = INT8_MIN;
	int64_t x146 = -272343LL;
	int64_t x147 = INT64_MIN;
	uint32_t x148 = 1U;
	volatile int64_t t33 = -929859202LL;

	t33 = (((x145/x146)|x147)+x148);

	if (t33 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x149 = 142U;
	uint16_t x150 = UINT16_MAX;
	int64_t x151 = -1LL;
	static volatile int8_t x152 = 1;
	int64_t t34 = 5LL;

	t34 = (((x149/x150)|x151)+x152);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x153 = 24439568044LLU;
	int32_t x154 = -110279;
	volatile uint64_t t35 = 26046570LLU;

	t35 = (((x153/x154)|x155)+x156);

	if (t35 != 12358LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x157 = 14U;
	int32_t x158 = INT32_MIN;
	uint32_t x159 = UINT32_MAX;
	uint16_t x160 = UINT16_MAX;
	static volatile uint32_t t36 = 4969898U;

	t36 = (((x157/x158)|x159)+x160);

	if (t36 != 65534U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x161 = UINT32_MAX;
	static int8_t x162 = INT8_MIN;

	t37 = (((x161/x162)|x163)+x164);

	if (t37 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x165 = INT64_MIN;
	static int32_t x166 = INT32_MIN;
	static int64_t x167 = 243982784LL;

	t38 = (((x165/x166)|x167)+x168);

	if (t38 != 4538950433LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x170 = 4U;
	uint64_t x171 = 7845LLU;
	uint64_t x172 = 1724LLU;
	volatile uint64_t t39 = 5904LLU;

	t39 = (((x169/x170)|x171)+x172);

	if (t39 != 9577LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x173 = -90LL;
	int32_t x174 = INT32_MAX;
	int16_t x175 = INT16_MIN;
	static int8_t x176 = INT8_MAX;
	int64_t t40 = 4451389316LL;

	t40 = (((x173/x174)|x175)+x176);

	if (t40 != -32641LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x177 = -1LL;
	static int16_t x179 = INT16_MAX;
	int64_t t41 = -123493LL;

	t41 = (((x177/x178)|x179)+x180);

	if (t41 != 32839LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x181 = INT64_MAX;
	volatile int32_t x182 = INT32_MIN;
	int64_t x183 = INT64_MIN;
	static int8_t x184 = INT8_MAX;
	int64_t t42 = 1255147950LL;

	t42 = (((x181/x182)|x183)+x184);

	if (t42 != -4294967168LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x189 = 1U;
	int64_t x190 = -47LL;
	int64_t x191 = INT64_MAX;
	int64_t x192 = INT64_MIN;

	t43 = (((x189/x190)|x191)+x192);

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x193 = INT16_MIN;
	volatile uint8_t x194 = UINT8_MAX;
	int32_t x195 = -981515;
	volatile int32_t t44 = -1;

	t44 = (((x193/x194)|x195)+x196);

	if (t44 != 18854) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x201 = INT32_MAX;
	volatile uint8_t x202 = 17U;
	uint16_t x203 = UINT16_MAX;
	int64_t x204 = -1LL;

	t45 = (((x201/x202)|x203)+x204);

	if (t45 != 126353406LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x205 = -60412019LL;
	uint8_t x206 = UINT8_MAX;
	uint32_t x207 = 264888359U;
	static volatile uint32_t x208 = 5U;
	volatile int64_t t46 = -242423LL;

	t46 = (((x205/x206)|x207)+x208);

	if (t46 != -138564LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x209 = 279064870507086350LL;
	int64_t t47 = -12272258551LL;

	t47 = (((x209/x210)|x211)+x212);

	if (t47 != -33294LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x217 = INT32_MAX;
	uint8_t x218 = UINT8_MAX;
	static int16_t x219 = INT16_MAX;
	int32_t t48 = -1;

	t48 = (((x217/x218)|x219)+x220);

	if (t48 != 8454176) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x222 = INT8_MAX;
	static uint64_t x224 = UINT64_MAX;
	volatile uint64_t t49 = 12161404265516811LLU;

	t49 = (((x221/x222)|x223)+x224);

	if (t49 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x226 = 1245270395497LLU;
	int64_t x227 = INT64_MIN;
	static int8_t x228 = -1;
	uint64_t t50 = 5312991493668554LLU;

	t50 = (((x225/x226)|x227)+x228);

	if (t50 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x229 = INT64_MIN;
	int32_t x230 = -7;
	uint16_t x231 = 11395U;
	static volatile int64_t t51 = 20833614180438LL;

	t51 = (((x229/x230)|x231)+x232);

	if (t51 != 1317624576693551050LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x233 = -71;
	uint64_t t52 = 1070247929842989LLU;

	t52 = (((x233/x234)|x235)+x236);

	if (t52 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x237 = -3987;
	static int32_t x238 = INT32_MIN;
	uint16_t x239 = 104U;
	int64_t x240 = -3LL;
	int64_t t53 = -564893676LL;

	t53 = (((x237/x238)|x239)+x240);

	if (t53 != 101LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x242 = 127LLU;
	uint8_t x243 = 101U;
	volatile uint64_t t54 = 74LLU;

	t54 = (((x241/x242)|x243)+x244);

	if (t54 != 72624976668147941LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x245 = 3632;
	static int8_t x246 = INT8_MIN;
	volatile uint64_t t55 = 165669LLU;

	t55 = (((x245/x246)|x247)+x248);

	if (t55 != 6LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x250 = UINT64_MAX;
	uint16_t x251 = 6907U;
	static uint64_t t56 = 2478550006416276006LLU;

	t56 = (((x249/x250)|x251)+x252);

	if (t56 != 10405LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x253 = -1LL;
	volatile int32_t x254 = INT32_MAX;
	static int8_t x255 = INT8_MAX;
	int16_t x256 = INT16_MIN;
	static int64_t t57 = -3LL;

	t57 = (((x253/x254)|x255)+x256);

	if (t57 != -32641LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x257 = 5U;
	static int8_t x258 = INT8_MIN;
	static volatile int32_t t58 = -6;

	t58 = (((x257/x258)|x259)+x260);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x261 = -1;
	uint8_t x262 = 27U;
	uint8_t x263 = UINT8_MAX;
	int64_t x264 = -1LL;
	static volatile int64_t t59 = 146898771514955061LL;

	t59 = (((x261/x262)|x263)+x264);

	if (t59 != 254LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x265 = -3800690;
	static int16_t x266 = -1;
	volatile int64_t x267 = INT64_MIN;
	int8_t x268 = INT8_MIN;
	volatile int64_t t60 = -812580119788321LL;

	t60 = (((x265/x266)|x267)+x268);

	if (t60 != -9223372036850975246LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x272 = -29;
	volatile uint32_t t61 = 109626U;

	t61 = (((x269/x270)|x271)+x272);

	if (t61 != 11607990U) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x273 = 0U;
	int64_t x275 = INT64_MIN;

	t62 = (((x273/x274)|x275)+x276);

	if (t62 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x277 = UINT64_MAX;
	uint64_t x278 = UINT64_MAX;
	int64_t x279 = INT64_MIN;
	uint64_t t63 = 6287824LLU;

	t63 = (((x277/x278)|x279)+x280);

	if (t63 != 9223372036854808576LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x281 = INT64_MIN;
	static int16_t x282 = -2;
	static int64_t x283 = 8011LL;
	volatile uint64_t x284 = UINT64_MAX;
	uint64_t t64 = 1062415826399676470LLU;

	t64 = (((x281/x282)|x283)+x284);

	if (t64 != 4611686018427395914LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x285 = 235288744LLU;
	int32_t x286 = INT32_MIN;
	int64_t x288 = INT64_MIN;
	volatile uint64_t t65 = 188327892482073007LLU;

	t65 = (((x285/x286)|x287)+x288);

	if (t65 != 9223372036854776063LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x289 = UINT16_MAX;
	uint32_t x290 = 1661997U;
	int16_t x291 = 0;
	uint32_t x292 = 88140354U;
	uint32_t t66 = 9U;

	t66 = (((x289/x290)|x291)+x292);

	if (t66 != 88140354U) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x293 = -137189514;
	uint64_t x294 = 179103LLU;
	uint64_t x295 = UINT64_MAX;
	int64_t x296 = INT64_MIN;
	static uint64_t t67 = 243134406LLU;

	t67 = (((x293/x294)|x295)+x296);

	if (t67 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x297 = INT16_MAX;
	uint64_t x298 = 1299641LLU;
	uint8_t x299 = 43U;
	static uint64_t t68 = 634992LLU;

	t68 = (((x297/x298)|x299)+x300);

	if (t68 != 54LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x301 = INT32_MIN;
	int8_t x302 = INT8_MIN;
	int16_t x303 = INT16_MIN;
	int16_t x304 = 54;
	volatile int32_t t69 = 129;

	t69 = (((x301/x302)|x303)+x304);

	if (t69 != -32714) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x307 = -117;
	static int16_t x308 = INT16_MIN;

	t70 = (((x305/x306)|x307)+x308);

	if (t70 != 4294934411U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x309 = -6LL;
	static int8_t x310 = -1;
	static volatile int16_t x311 = INT16_MIN;

	t71 = (((x309/x310)|x311)+x312);

	if (t71 != -32763LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x313 = -269;
	uint8_t x314 = 23U;
	static int32_t x315 = INT32_MIN;
	volatile int8_t x316 = INT8_MIN;
	int32_t t72 = 126;

	t72 = (((x313/x314)|x315)+x316);

	if (t72 != -139) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x317 = INT32_MIN;
	uint64_t x318 = UINT64_MAX;
	int64_t x319 = 3425483LL;
	uint64_t t73 = 2012805712349143LLU;

	t73 = (((x317/x318)|x319)+x320);

	if (t73 != 3425482LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x321 = 179636642;
	int8_t x322 = -1;
	int16_t x323 = 329;

	t74 = (((x321/x322)|x323)+x324);

	if (t74 != -179636130) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x325 = 7571365367339LLU;
	int16_t x326 = 2594;
	uint8_t x327 = 1U;
	volatile uint64_t t75 = 2997LLU;

	t75 = (((x325/x326)|x327)+x328);

	if (t75 != 2918799420LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x329 = -1;
	static int8_t x330 = INT8_MAX;
	int32_t x331 = 97055742;
	static volatile int32_t t76 = -631211;

	t76 = (((x329/x330)|x331)+x332);

	if (t76 != 97055741) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x337 = 274897;
	volatile int16_t x338 = -1;
	int16_t x339 = 1;
	int8_t x340 = INT8_MIN;
	volatile int32_t t77 = -1;

	t77 = (((x337/x338)|x339)+x340);

	if (t77 != -275025) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x341 = INT32_MIN;
	int8_t x342 = INT8_MIN;
	uint32_t x343 = 37U;
	uint64_t x344 = UINT64_MAX;

	t78 = (((x341/x342)|x343)+x344);

	if (t78 != 16777252LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x345 = INT16_MIN;
	int32_t x346 = -13;
	volatile int16_t x347 = -1;
	uint32_t x348 = 78U;
	volatile uint32_t t79 = 2985898U;

	t79 = (((x345/x346)|x347)+x348);

	if (t79 != 77U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x349 = INT8_MIN;
	int8_t x350 = -1;
	volatile int8_t x352 = INT8_MIN;

	t80 = (((x349/x350)|x351)+x352);

	if (t80 != 2) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x353 = 14U;
	uint32_t x354 = 11770U;
	int32_t x355 = INT32_MIN;
	volatile int32_t x356 = INT32_MIN;
	uint32_t t81 = 2U;

	t81 = (((x353/x354)|x355)+x356);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x361 = 199380305;
	uint32_t x362 = UINT32_MAX;
	static int8_t x364 = INT8_MIN;
	volatile uint32_t t82 = 2U;

	t82 = (((x361/x362)|x363)+x364);

	if (t82 != 32639U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x366 = UINT16_MAX;
	static uint32_t x367 = UINT32_MAX;
	volatile uint8_t x368 = 40U;
	volatile uint32_t t83 = 334369U;

	t83 = (((x365/x366)|x367)+x368);

	if (t83 != 39U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x369 = INT8_MIN;
	static int64_t x370 = 30878935151LL;
	static int32_t x372 = -1;

	t84 = (((x369/x370)|x371)+x372);

	if (t84 != 126LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x374 = INT16_MIN;
	uint32_t x376 = 260079159U;
	uint32_t t85 = 1480224U;

	t85 = (((x373/x374)|x375)+x376);

	if (t85 != 260079158U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x380 = 96U;

	t86 = (((x377/x378)|x379)+x380);

	if (t86 != -32) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x381 = -1LL;
	int8_t x382 = INT8_MIN;
	uint16_t x383 = 6U;
	int32_t x384 = INT32_MIN;
	volatile int64_t t87 = 0LL;

	t87 = (((x381/x382)|x383)+x384);

	if (t87 != -2147483642LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x389 = -1;
	static int16_t x390 = INT16_MIN;
	int16_t x391 = -1;
	uint32_t x392 = UINT32_MAX;
	uint32_t t88 = 749U;

	t88 = (((x389/x390)|x391)+x392);

	if (t88 != 4294967294U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x393 = -1LL;
	static int32_t x395 = -5;
	int64_t t89 = -87782500777815726LL;

	t89 = (((x393/x394)|x395)+x396);

	if (t89 != -5880599LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x398 = 35053U;
	uint32_t x400 = UINT32_MAX;
	volatile uint32_t t90 = 67658432U;

	t90 = (((x397/x398)|x399)+x400);

	if (t90 != 4294967294U) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x401 = -2;
	static int32_t x404 = -602041655;

	t91 = (((x401/x402)|x403)+x404);

	if (t91 != -602041400) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x405 = INT64_MIN;
	static int32_t x406 = INT32_MAX;
	static uint8_t x407 = 0U;
	static int8_t x408 = -1;
	volatile int64_t t92 = 82302000752757LL;

	t92 = (((x405/x406)|x407)+x408);

	if (t92 != -4294967299LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x409 = -566;
	uint64_t x411 = UINT64_MAX;
	volatile uint64_t t93 = 30429725829LLU;

	t93 = (((x409/x410)|x411)+x412);

	if (t93 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x413 = -1;
	int64_t x414 = INT64_MAX;
	int16_t x415 = INT16_MIN;
	int16_t x416 = 2347;
	volatile int64_t t94 = -33360825616LL;

	t94 = (((x413/x414)|x415)+x416);

	if (t94 != -30421LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x417 = 1;
	int64_t x419 = 66256567303555LL;
	volatile int8_t x420 = INT8_MIN;
	volatile int64_t t95 = -693368505232LL;

	t95 = (((x417/x418)|x419)+x420);

	if (t95 != 66256567303427LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x422 = 129195741720592LLU;
	int8_t x423 = INT8_MIN;
	static volatile int16_t x424 = INT16_MIN;
	uint64_t t96 = 7207493074LLU;

	t96 = (((x421/x422)|x423)+x424);

	if (t96 != 18446744073709518720LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x425 = 3442LLU;
	int32_t x426 = INT32_MIN;
	volatile int16_t x428 = INT16_MIN;
	uint64_t t97 = 1LLU;

	t97 = (((x425/x426)|x427)+x428);

	if (t97 != 18446744073709518720LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x429 = 95809U;
	volatile int32_t x430 = INT32_MAX;
	uint8_t x431 = 10U;
	int32_t x432 = INT32_MAX;
	static volatile uint32_t t98 = 40289780U;

	t98 = (((x429/x430)|x431)+x432);

	if (t98 != 2147483657U) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x433 = INT16_MIN;
	uint16_t x434 = UINT16_MAX;
	int16_t x435 = INT16_MIN;
	uint64_t x436 = UINT64_MAX;
	volatile uint64_t t99 = 55569LLU;

	t99 = (((x433/x434)|x435)+x436);

	if (t99 != 18446744073709518847LLU) { NG(); } else { ; }
	
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

