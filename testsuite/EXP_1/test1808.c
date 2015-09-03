#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x4 = 54U;
int16_t x8 = INT16_MIN;
int8_t x10 = -1;
static int8_t x12 = INT8_MAX;
static uint8_t x13 = 0U;
static int16_t x14 = INT16_MAX;
int8_t x15 = -1;
int32_t x17 = INT32_MIN;
int64_t x20 = -1LL;
uint32_t t5 = 37U;
int64_t x31 = -1LL;
uint32_t x33 = 142774399U;
uint32_t x34 = 1295U;
int8_t x38 = INT8_MIN;
uint16_t x49 = 1U;
volatile int32_t t13 = -7501;
volatile uint64_t t14 = 189602LLU;
static int64_t t15 = 71973220LL;
static int16_t x69 = 132;
volatile int64_t x73 = -1LL;
static uint8_t x83 = 3U;
static uint8_t x84 = UINT8_MAX;
static volatile int32_t t21 = 925839698;
int8_t x92 = INT8_MIN;
volatile int32_t x99 = INT32_MIN;
int32_t x113 = INT32_MAX;
uint64_t x120 = 13515815199264790LLU;
uint32_t t30 = 9194288U;
static int16_t x126 = 3223;
static int64_t x135 = INT64_MAX;
uint16_t x139 = UINT16_MAX;
static int32_t t35 = -980549;
volatile int64_t t37 = INT64_MIN;
uint32_t x155 = UINT32_MAX;
int64_t x162 = -1LL;
int32_t x163 = -1;
int32_t t40 = -583674;
int32_t t41 = 1040;
static uint8_t x171 = 73U;
volatile uint64_t x179 = UINT64_MAX;
uint16_t x180 = UINT16_MAX;
int32_t t45 = -159;
int16_t x186 = -1;
int16_t x187 = -1;
int64_t t46 = 497153375637LL;
int8_t x193 = -56;
uint32_t x195 = 958U;
uint32_t x196 = 11U;
uint32_t t48 = 149484U;
int32_t x200 = INT32_MIN;
static int32_t t49 = 918508;
static int32_t x201 = -1;
int8_t x202 = INT8_MIN;
int64_t x204 = -140937348808LL;
uint64_t x216 = UINT64_MAX;
int8_t x218 = INT8_MIN;
volatile uint64_t t54 = 3826285LLU;
volatile int16_t x223 = INT16_MAX;
static int8_t x226 = -50;
volatile int64_t x227 = INT64_MIN;
int8_t x235 = INT8_MIN;
int16_t x239 = INT16_MIN;
int32_t t59 = -57193;
static volatile int16_t x259 = -1;
uint16_t x260 = UINT16_MAX;
volatile int8_t x265 = INT8_MIN;
static volatile uint64_t x269 = UINT64_MAX;
volatile int32_t x273 = -1;
static int64_t x278 = 15LL;
uint64_t x280 = UINT64_MAX;
static int32_t x283 = 328;
uint8_t x286 = 100U;
int16_t x287 = 15283;
int32_t t69 = 614733874;
volatile int8_t x291 = -22;
int32_t x292 = -1;
int32_t x293 = INT32_MIN;
int8_t x294 = INT8_MIN;
static int64_t x295 = -1LL;
uint64_t t71 = 6874040514139LLU;
volatile int32_t t72 = 80496;
static int64_t x308 = INT64_MIN;
int8_t x315 = INT8_MAX;
int32_t x321 = -1;
int32_t x326 = -435284;
int16_t x331 = -1;
int8_t x347 = -3;
uint8_t x350 = 2U;
int8_t x351 = 5;
static int32_t x362 = 440080384;
uint16_t x368 = 1599U;
static uint8_t x370 = 12U;
int16_t x372 = INT16_MIN;
static int32_t x374 = -1;
static uint32_t x382 = UINT32_MAX;
int32_t t93 = 1;
static int64_t x389 = INT64_MIN;
static volatile int16_t x392 = INT16_MIN;
volatile uint32_t x393 = 1442U;
static volatile uint32_t x394 = UINT32_MAX;
int8_t x401 = -14;
int32_t t97 = -27396;
static volatile int32_t t98 = -13346316;
int32_t x409 = -508097;


void f0(void) {
	static int16_t x1 = -136;
	static int32_t x2 = -1;
	int64_t x3 = -77169225LL;
	int32_t t0 = 3533929;

	t0 = (((x1&x2)<=x3)+x4);

	if (t0 != 54) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = -116LL;
	uint32_t x6 = 7692299U;
	int64_t x7 = -719283059087LL;
	volatile int32_t t1 = -4563;

	t1 = (((x5&x6)<=x7)+x8);

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -26;
	int32_t x11 = -1;
	int32_t t2 = -6;

	t2 = (((x9&x10)<=x11)+x12);

	if (t2 != 128) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x16 = UINT8_MAX;
	volatile int32_t t3 = -2;

	t3 = (((x13&x14)<=x15)+x16);

	if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x18 = UINT8_MAX;
	volatile uint16_t x19 = 18141U;
	int64_t t4 = 21640672139582454LL;

	t4 = (((x17&x18)<=x19)+x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x21 = 13388U;
	int64_t x22 = -1LL;
	volatile int16_t x23 = -1;
	uint32_t x24 = 48U;

	t5 = (((x21&x22)<=x23)+x24);

	if (t5 != 48U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -5;
	static int32_t x26 = INT32_MIN;
	volatile int8_t x27 = 34;
	volatile uint32_t x28 = 2679579U;
	static uint32_t t6 = 11624U;

	t6 = (((x25&x26)<=x27)+x28);

	if (t6 != 2679580U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x29 = UINT32_MAX;
	static uint8_t x30 = UINT8_MAX;
	int8_t x32 = -1;
	int32_t t7 = 15891890;

	t7 = (((x29&x30)<=x31)+x32);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x35 = 0U;
	static uint8_t x36 = 55U;
	volatile int32_t t8 = 1;

	t8 = (((x33&x34)<=x35)+x36);

	if (t8 != 55) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x37 = 16543U;
	volatile int16_t x39 = INT16_MIN;
	int32_t x40 = -9;
	int32_t t9 = 12833;

	t9 = (((x37&x38)<=x39)+x40);

	if (t9 != -9) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = UINT16_MAX;
	int16_t x42 = -1;
	static uint64_t x43 = 653106500980366LLU;
	int8_t x44 = -4;
	int32_t t10 = -425612906;

	t10 = (((x41&x42)<=x43)+x44);

	if (t10 != -3) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	int16_t x46 = INT16_MIN;
	int8_t x47 = -1;
	int16_t x48 = INT16_MIN;
	volatile int32_t t11 = -13178196;

	t11 = (((x45&x46)<=x47)+x48);

	if (t11 != -32767) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = 58153;
	int64_t x51 = 1175297364075013LL;
	int16_t x52 = INT16_MIN;
	volatile int32_t t12 = 1;

	t12 = (((x49&x50)<=x51)+x52);

	if (t12 != -32767) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 7U;
	int64_t x54 = INT64_MIN;
	int16_t x55 = INT16_MIN;
	static int16_t x56 = INT16_MIN;

	t13 = (((x53&x54)<=x55)+x56);

	if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -16067677LL;
	static uint16_t x58 = 7779U;
	static int16_t x59 = -1;
	uint64_t x60 = 171948076LLU;

	t14 = (((x57&x58)<=x59)+x60);

	if (t14 != 171948076LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = INT8_MAX;
	static volatile int64_t x62 = INT64_MIN;
	uint8_t x63 = 11U;
	static int64_t x64 = -1LL;

	t15 = (((x61&x62)<=x63)+x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 39U;
	int64_t x66 = 431LL;
	uint16_t x67 = 7U;
	int32_t x68 = INT32_MIN;
	int32_t t16 = INT32_MIN;

	t16 = (((x65&x66)<=x67)+x68);

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x70 = 4522622U;
	static int8_t x71 = INT8_MIN;
	int8_t x72 = -6;
	volatile int32_t t17 = -15582;

	t17 = (((x69&x70)<=x71)+x72);

	if (t17 != -5) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint16_t x74 = UINT16_MAX;
	volatile int8_t x75 = INT8_MIN;
	int16_t x76 = INT16_MIN;
	volatile int32_t t18 = 25515;

	t18 = (((x73&x74)<=x75)+x76);

	if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MAX;
	uint32_t x78 = 6U;
	volatile int8_t x79 = -1;
	int16_t x80 = -23;
	int32_t t19 = 39613;

	t19 = (((x77&x78)<=x79)+x80);

	if (t19 != -22) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x81 = 1U;
	int8_t x82 = -3;
	volatile int32_t t20 = -386525611;

	t20 = (((x81&x82)<=x83)+x84);

	if (t20 != 256) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 1U;
	static uint64_t x86 = UINT64_MAX;
	uint8_t x87 = 17U;
	int32_t x88 = -1;

	t21 = (((x85&x86)<=x87)+x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = 7411LL;
	volatile int16_t x90 = -1;
	int16_t x91 = INT16_MAX;
	static int32_t t22 = -14228308;

	t22 = (((x89&x90)<=x91)+x92);

	if (t22 != -127) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x93 = -1;
	static uint32_t x94 = 3147522U;
	uint32_t x95 = 278409U;
	int8_t x96 = 0;
	int32_t t23 = 5;

	t23 = (((x93&x94)<=x95)+x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 53U;
	uint64_t x98 = UINT64_MAX;
	static int16_t x100 = 34;
	volatile int32_t t24 = 128884;

	t24 = (((x97&x98)<=x99)+x100);

	if (t24 != 35) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = 1;
	uint8_t x102 = UINT8_MAX;
	int64_t x103 = INT64_MIN;
	int16_t x104 = -1;
	volatile int32_t t25 = -2;

	t25 = (((x101&x102)<=x103)+x104);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	uint8_t x106 = 0U;
	int64_t x107 = INT64_MIN;
	volatile int8_t x108 = INT8_MIN;
	static int32_t t26 = 105511;

	t26 = (((x105&x106)<=x107)+x108);

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = 1575259180697LL;
	uint64_t x110 = UINT64_MAX;
	uint8_t x111 = 12U;
	static int8_t x112 = INT8_MIN;
	int32_t t27 = 0;

	t27 = (((x109&x110)<=x111)+x112);

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x114 = INT16_MIN;
	int16_t x115 = -11;
	static int8_t x116 = -1;
	static int32_t t28 = 166226;

	t28 = (((x113&x114)<=x115)+x116);

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = 55LLU;
	int32_t x118 = INT32_MIN;
	static int64_t x119 = -1LL;
	uint64_t t29 = 1766100179568LLU;

	t29 = (((x117&x118)<=x119)+x120);

	if (t29 != 13515815199264791LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x121 = 130790894LLU;
	uint64_t x122 = 9425626164LLU;
	static uint16_t x123 = UINT16_MAX;
	volatile uint32_t x124 = 2084U;

	t30 = (((x121&x122)<=x123)+x124);

	if (t30 != 2084U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	static uint64_t x127 = UINT64_MAX;
	static volatile int64_t x128 = INT64_MIN;
	static int64_t t31 = -73LL;

	t31 = (((x125&x126)<=x127)+x128);

	if (t31 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = -1;
	uint16_t x130 = 1U;
	int8_t x131 = INT8_MAX;
	uint32_t x132 = UINT32_MAX;
	uint32_t t32 = 410U;

	t32 = (((x129&x130)<=x131)+x132);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x133 = INT64_MIN;
	int32_t x134 = INT32_MIN;
	int64_t x136 = -1LL;
	volatile int64_t t33 = 23843978063LL;

	t33 = (((x133&x134)<=x135)+x136);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x137 = INT64_MIN;
	int64_t x138 = INT64_MAX;
	static uint16_t x140 = 7U;
	volatile int32_t t34 = -1;

	t34 = (((x137&x138)<=x139)+x140);

	if (t34 != 8) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -1;
	uint64_t x142 = 1142016122049LLU;
	uint32_t x143 = 16128U;
	static uint8_t x144 = UINT8_MAX;

	t35 = (((x141&x142)<=x143)+x144);

	if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = 14804694LL;
	int16_t x146 = 584;
	volatile int16_t x147 = INT16_MIN;
	static int32_t x148 = -1;
	volatile int32_t t36 = -11;

	t36 = (((x145&x146)<=x147)+x148);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = -1LL;
	int32_t x150 = -1;
	uint64_t x151 = 2003515LLU;
	static volatile int64_t x152 = INT64_MIN;

	t37 = (((x149&x150)<=x151)+x152);

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MIN;
	int16_t x154 = INT16_MIN;
	int64_t x156 = 291888LL;
	volatile int64_t t38 = -162067116325937LL;

	t38 = (((x153&x154)<=x155)+x156);

	if (t38 != 291889LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MIN;
	int8_t x158 = INT8_MAX;
	volatile int64_t x159 = -1LL;
	uint32_t x160 = 271U;
	static uint32_t t39 = 2856529U;

	t39 = (((x157&x158)<=x159)+x160);

	if (t39 != 271U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -462;
	static int32_t x164 = 2047235;

	t40 = (((x161&x162)<=x163)+x164);

	if (t40 != 2047236) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = UINT8_MAX;
	static int16_t x166 = INT16_MIN;
	int16_t x167 = INT16_MAX;
	int16_t x168 = -3787;

	t41 = (((x165&x166)<=x167)+x168);

	if (t41 != -3786) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 320LLU;
	static int16_t x170 = -388;
	volatile int8_t x172 = INT8_MIN;
	volatile int32_t t42 = 1010630;

	t42 = (((x169&x170)<=x171)+x172);

	if (t42 != -127) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = UINT8_MAX;
	uint64_t x174 = 190407293LLU;
	int32_t x175 = -1;
	volatile uint8_t x176 = UINT8_MAX;
	volatile int32_t t43 = -1;

	t43 = (((x173&x174)<=x175)+x176);

	if (t43 != 256) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x177 = -1;
	int32_t x178 = INT32_MAX;
	int32_t t44 = 92;

	t44 = (((x177&x178)<=x179)+x180);

	if (t44 != 65536) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x181 = 193623U;
	static int16_t x182 = 776;
	volatile int32_t x183 = 22684;
	static int8_t x184 = INT8_MIN;

	t45 = (((x181&x182)<=x183)+x184);

	if (t45 != -127) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -20784LL;
	volatile int64_t x188 = INT64_MIN;

	t46 = (((x185&x186)<=x187)+x188);

	if (t46 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MAX;
	uint16_t x190 = UINT16_MAX;
	volatile int8_t x191 = INT8_MIN;
	int32_t x192 = INT32_MAX;
	volatile int32_t t47 = INT32_MAX;

	t47 = (((x189&x190)<=x191)+x192);

	if (t47 != INT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x194 = -1LL;

	t48 = (((x193&x194)<=x195)+x196);

	if (t48 != 12U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 48727231226062LLU;
	int8_t x198 = 44;
	volatile int16_t x199 = -21;

	t49 = (((x197&x198)<=x199)+x200);

	if (t49 != -2147483647) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x203 = -1;
	volatile int64_t t50 = 67387LL;

	t50 = (((x201&x202)<=x203)+x204);

	if (t50 != -140937348807LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = UINT16_MAX;
	int8_t x206 = INT8_MAX;
	int64_t x207 = INT64_MIN;
	uint64_t x208 = 2001354187LLU;
	static uint64_t t51 = 648798628LLU;

	t51 = (((x205&x206)<=x207)+x208);

	if (t51 != 2001354187LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x209 = INT32_MAX;
	static volatile int32_t x210 = 0;
	int64_t x211 = INT64_MIN;
	uint8_t x212 = UINT8_MAX;
	static int32_t t52 = 1;

	t52 = (((x209&x210)<=x211)+x212);

	if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 482860134834004LLU;
	static int64_t x214 = INT64_MAX;
	int16_t x215 = INT16_MAX;
	volatile uint64_t t53 = UINT64_MAX;

	t53 = (((x213&x214)<=x215)+x216);

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = 37002185420397759LLU;
	static uint16_t x219 = 21U;
	uint64_t x220 = 8777342938480LLU;

	t54 = (((x217&x218)<=x219)+x220);

	if (t54 != 8777342938480LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = 18797434251792377LLU;
	volatile uint8_t x222 = 7U;
	uint64_t x224 = UINT64_MAX;
	uint64_t t55 = 2LLU;

	t55 = (((x221&x222)<=x223)+x224);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x225 = -1;
	static volatile uint8_t x228 = 1U;
	int32_t t56 = -11979;

	t56 = (((x225&x226)<=x227)+x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x229 = INT16_MIN;
	static uint64_t x230 = UINT64_MAX;
	int8_t x231 = INT8_MAX;
	static uint32_t x232 = UINT32_MAX;
	uint32_t t57 = UINT32_MAX;

	t57 = (((x229&x230)<=x231)+x232);

	if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = UINT32_MAX;
	volatile uint32_t x234 = 45126U;
	int32_t x236 = -1;
	volatile int32_t t58 = 27;

	t58 = (((x233&x234)<=x235)+x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x237 = INT64_MIN;
	int32_t x238 = INT32_MIN;
	int8_t x240 = INT8_MIN;

	t59 = (((x237&x238)<=x239)+x240);

	if (t59 != -127) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = 2;
	volatile int16_t x242 = 933;
	static int8_t x243 = INT8_MIN;
	uint16_t x244 = 7451U;
	int32_t t60 = 14;

	t60 = (((x241&x242)<=x243)+x244);

	if (t60 != 7451) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x253 = 20147U;
	int8_t x254 = 0;
	static int8_t x255 = 1;
	int16_t x256 = INT16_MAX;
	volatile int32_t t61 = 5012971;

	t61 = (((x253&x254)<=x255)+x256);

	if (t61 != 32768) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x257 = 57;
	int16_t x258 = INT16_MIN;
	static int32_t t62 = -22;

	t62 = (((x257&x258)<=x259)+x260);

	if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x261 = -5;
	int16_t x262 = -1;
	volatile uint32_t x263 = 82908004U;
	static uint8_t x264 = UINT8_MAX;
	int32_t t63 = 13378955;

	t63 = (((x261&x262)<=x263)+x264);

	if (t63 != 255) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x266 = INT32_MIN;
	volatile int64_t x267 = INT64_MIN;
	int32_t x268 = -2556458;
	static volatile int32_t t64 = -107;

	t64 = (((x265&x266)<=x267)+x268);

	if (t64 != -2556458) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x270 = 0;
	uint16_t x271 = UINT16_MAX;
	uint64_t x272 = 249712452965320LLU;
	uint64_t t65 = 809291893836124LLU;

	t65 = (((x269&x270)<=x271)+x272);

	if (t65 != 249712452965321LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x274 = 1288341887511LLU;
	static int64_t x275 = INT64_MAX;
	int16_t x276 = -6112;
	static int32_t t66 = 0;

	t66 = (((x273&x274)<=x275)+x276);

	if (t66 != -6111) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x277 = INT32_MIN;
	uint16_t x279 = UINT16_MAX;
	volatile uint64_t t67 = 4064178LLU;

	t67 = (((x277&x278)<=x279)+x280);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x281 = -380;
	uint32_t x282 = 50988913U;
	int32_t x284 = -1;
	static volatile int32_t t68 = -84052912;

	t68 = (((x281&x282)<=x283)+x284);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x285 = -50601180685232LL;
	int16_t x288 = INT16_MIN;

	t69 = (((x285&x286)<=x287)+x288);

	if (t69 != -32767) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x289 = INT64_MIN;
	volatile int8_t x290 = INT8_MAX;
	int32_t t70 = 12;

	t70 = (((x289&x290)<=x291)+x292);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x296 = UINT64_MAX;

	t71 = (((x293&x294)<=x295)+x296);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x301 = 25U;
	int8_t x302 = 0;
	uint16_t x303 = 508U;
	int32_t x304 = -1;

	t72 = (((x301&x302)<=x303)+x304);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x305 = UINT32_MAX;
	int8_t x306 = -1;
	int16_t x307 = INT16_MIN;
	volatile int64_t t73 = INT64_MIN;

	t73 = (((x305&x306)<=x307)+x308);

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x309 = -1;
	uint16_t x310 = UINT16_MAX;
	volatile int16_t x311 = INT16_MIN;
	int64_t x312 = INT64_MIN;
	volatile int64_t t74 = INT64_MIN;

	t74 = (((x309&x310)<=x311)+x312);

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x313 = -1913;
	uint8_t x314 = UINT8_MAX;
	int16_t x316 = INT16_MIN;
	int32_t t75 = -5727;

	t75 = (((x313&x314)<=x315)+x316);

	if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x317 = INT32_MIN;
	static uint32_t x318 = 2669U;
	uint8_t x319 = UINT8_MAX;
	int32_t x320 = INT32_MIN;
	volatile int32_t t76 = 1;

	t76 = (((x317&x318)<=x319)+x320);

	if (t76 != -2147483647) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x322 = 11957373458LLU;
	int16_t x323 = INT16_MIN;
	int32_t x324 = INT32_MIN;
	volatile int32_t t77 = -55889304;

	t77 = (((x321&x322)<=x323)+x324);

	if (t77 != -2147483647) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x325 = INT16_MIN;
	static int8_t x327 = 0;
	uint8_t x328 = 4U;
	volatile int32_t t78 = -2042;

	t78 = (((x325&x326)<=x327)+x328);

	if (t78 != 5) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x329 = -1;
	int32_t x330 = INT32_MIN;
	int8_t x332 = -1;
	int32_t t79 = 8231;

	t79 = (((x329&x330)<=x331)+x332);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x333 = INT16_MAX;
	uint32_t x334 = 7882U;
	static uint8_t x335 = UINT8_MAX;
	uint32_t x336 = 336312U;
	static volatile uint32_t t80 = 105U;

	t80 = (((x333&x334)<=x335)+x336);

	if (t80 != 336312U) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x337 = -1;
	static volatile uint64_t x338 = 8626921917817LLU;
	uint64_t x339 = 3176268897988397350LLU;
	int16_t x340 = -1;
	static volatile int32_t t81 = -15906;

	t81 = (((x337&x338)<=x339)+x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x341 = INT16_MIN;
	int16_t x342 = INT16_MAX;
	int32_t x343 = -10940012;
	static int16_t x344 = INT16_MIN;
	volatile int32_t t82 = -1;

	t82 = (((x341&x342)<=x343)+x344);

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x345 = INT8_MIN;
	uint8_t x346 = 20U;
	int64_t x348 = INT64_MIN;
	volatile int64_t t83 = INT64_MIN;

	t83 = (((x345&x346)<=x347)+x348);

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x349 = -1LL;
	int16_t x352 = -3;
	int32_t t84 = 118202738;

	t84 = (((x349&x350)<=x351)+x352);

	if (t84 != -2) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x353 = 7U;
	volatile int8_t x354 = INT8_MAX;
	uint8_t x355 = UINT8_MAX;
	uint32_t x356 = UINT32_MAX;
	volatile uint32_t t85 = 229206257U;

	t85 = (((x353&x354)<=x355)+x356);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x357 = INT8_MIN;
	int64_t x358 = -1LL;
	volatile uint16_t x359 = UINT16_MAX;
	int8_t x360 = -1;
	volatile int32_t t86 = -65795;

	t86 = (((x357&x358)<=x359)+x360);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x361 = INT8_MAX;
	int16_t x363 = INT16_MAX;
	volatile int32_t x364 = INT32_MIN;
	int32_t t87 = -106704;

	t87 = (((x361&x362)<=x363)+x364);

	if (t87 != -2147483647) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x365 = 870468U;
	uint32_t x366 = 360054U;
	int32_t x367 = -14550837;
	int32_t t88 = 21709998;

	t88 = (((x365&x366)<=x367)+x368);

	if (t88 != 1600) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x369 = INT64_MIN;
	static int16_t x371 = INT16_MIN;
	volatile int32_t t89 = -6717;

	t89 = (((x369&x370)<=x371)+x372);

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x373 = -3;
	uint64_t x375 = 3107764379235LLU;
	int32_t x376 = 1817;
	int32_t t90 = 733;

	t90 = (((x373&x374)<=x375)+x376);

	if (t90 != 1817) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x377 = 7669U;
	volatile uint8_t x378 = 12U;
	int16_t x379 = INT16_MAX;
	int32_t x380 = -812875;
	volatile int32_t t91 = -2901;

	t91 = (((x377&x378)<=x379)+x380);

	if (t91 != -812874) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x381 = 23937254U;
	uint64_t x383 = 1884929769691807628LLU;
	uint32_t x384 = UINT32_MAX;
	volatile uint32_t t92 = 12900442U;

	t92 = (((x381&x382)<=x383)+x384);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x385 = 11662U;
	int8_t x386 = -1;
	static volatile int8_t x387 = INT8_MAX;
	static int32_t x388 = 230676;

	t93 = (((x385&x386)<=x387)+x388);

	if (t93 != 230676) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x390 = INT8_MIN;
	uint8_t x391 = 22U;
	int32_t t94 = -7591;

	t94 = (((x389&x390)<=x391)+x392);

	if (t94 != -32767) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x395 = INT8_MIN;
	int32_t x396 = -57;
	int32_t t95 = 12775631;

	t95 = (((x393&x394)<=x395)+x396);

	if (t95 != -56) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x397 = -1;
	static volatile int32_t x398 = -1;
	int16_t x399 = -1;
	int16_t x400 = 0;
	volatile int32_t t96 = -729556715;

	t96 = (((x397&x398)<=x399)+x400);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x402 = 1617LL;
	volatile int32_t x403 = INT32_MIN;
	int8_t x404 = INT8_MIN;

	t97 = (((x401&x402)<=x403)+x404);

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x405 = -1LL;
	uint32_t x406 = 0U;
	uint64_t x407 = 1266333LLU;
	volatile int8_t x408 = INT8_MIN;

	t98 = (((x405&x406)<=x407)+x408);

	if (t98 != -127) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x410 = INT8_MIN;
	uint8_t x411 = 0U;
	volatile uint32_t x412 = 24U;
	volatile uint32_t t99 = 188U;

	t99 = (((x409&x410)<=x411)+x412);

	if (t99 != 25U) { NG(); } else { ; }
	
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

