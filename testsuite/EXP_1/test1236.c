#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x1 = INT16_MAX;
volatile int32_t t0 = 24010;
volatile uint32_t x6 = UINT32_MAX;
int32_t x11 = INT32_MAX;
volatile uint64_t x16 = 8015377LLU;
uint64_t x22 = 11736450627779LLU;
int32_t t5 = -209328592;
int16_t x27 = -1;
static int16_t x29 = 0;
uint64_t t7 = 24756225714959112LLU;
int16_t x34 = INT16_MIN;
static uint8_t x41 = 122U;
uint8_t x42 = 1U;
uint32_t x44 = 1278U;
volatile uint32_t x49 = UINT32_MAX;
static uint64_t x50 = UINT64_MAX;
volatile int16_t x52 = INT16_MAX;
static uint8_t x57 = 11U;
int16_t x71 = INT16_MIN;
volatile int32_t t17 = -19810914;
volatile int64_t x76 = INT64_MAX;
int32_t t19 = -824;
volatile uint16_t x81 = 1934U;
volatile int16_t x88 = -1;
static uint32_t x92 = UINT32_MAX;
volatile int64_t x96 = 634853624LL;
int16_t x100 = INT16_MIN;
int8_t x101 = INT8_MIN;
static volatile int64_t t26 = -15874801180242827LL;
volatile int16_t x113 = INT16_MIN;
volatile int64_t x116 = -1LL;
uint8_t x119 = UINT8_MAX;
int32_t x124 = INT32_MAX;
volatile int8_t x127 = -7;
static int64_t t31 = -4626312LL;
volatile int32_t x129 = 54;
int32_t x132 = -1;
static volatile uint64_t t32 = UINT64_MAX;
int16_t x135 = INT16_MIN;
uint64_t x136 = 3643761928764LLU;
uint64_t t33 = 1601391LLU;
int16_t x137 = INT16_MIN;
uint16_t x142 = 4U;
static uint32_t x144 = 2067704U;
int8_t x146 = 1;
uint8_t x148 = 20U;
int8_t x154 = -1;
volatile uint8_t x161 = 45U;
uint8_t x165 = 15U;
uint32_t x168 = 21063U;
int16_t x171 = -1;
static int16_t x179 = INT16_MAX;
uint32_t x182 = UINT32_MAX;
static uint8_t x190 = UINT8_MAX;
volatile int16_t x193 = INT16_MIN;
int32_t t50 = 459410140;
int32_t x208 = INT32_MAX;
int16_t x212 = 8798;
static int16_t x214 = INT16_MIN;
uint16_t x216 = UINT16_MAX;
volatile uint32_t x220 = UINT32_MAX;
int64_t x221 = 23494102674812LL;
uint64_t x222 = 3435663853LLU;
uint32_t x224 = UINT32_MAX;
volatile int32_t x230 = 149129;
static int64_t x233 = INT64_MAX;
volatile int32_t t61 = -189416;
volatile uint8_t x253 = 79U;
int32_t x254 = 5392;
int64_t x259 = -1LL;
static int8_t x265 = -1;
volatile int64_t t65 = 300648979LL;
volatile int8_t x272 = INT8_MAX;
static int32_t t66 = 19489;
static uint64_t x275 = 390637970859234LLU;
int64_t x277 = INT64_MIN;
int32_t t68 = -179860;
static volatile uint64_t t69 = 796415024049LLU;
uint64_t x289 = 1161219131261658939LLU;
int32_t t71 = 69841;
volatile int32_t t72 = 235925286;
int32_t t73 = -1076927;
static int32_t x306 = INT32_MIN;
uint32_t x308 = 1342008975U;
uint16_t x313 = 5U;
int16_t x317 = INT16_MIN;
uint8_t x320 = UINT8_MAX;
static volatile int32_t t78 = 301632;
static int16_t x330 = 59;
uint32_t t80 = 46496175U;
static int32_t x333 = INT32_MIN;
static int8_t x336 = -16;
uint8_t x339 = 15U;
uint64_t t82 = 272963441289LLU;
int64_t x346 = INT64_MIN;
uint64_t x349 = 1582096888094796018LLU;
uint64_t t86 = 125LLU;
int32_t x357 = 180;
int32_t t87 = -234;
int64_t x362 = INT64_MAX;
volatile uint32_t x364 = UINT32_MAX;
volatile uint16_t x370 = 3749U;
int64_t x373 = INT64_MIN;
uint64_t x376 = 56LLU;
int8_t x381 = -24;
int64_t t93 = INT64_MAX;
static volatile uint32_t t94 = 196186U;
uint64_t t95 = UINT64_MAX;
static int8_t x394 = INT8_MAX;
int16_t x396 = INT16_MIN;
int8_t x400 = 2;
int64_t x401 = -1LL;
int8_t x403 = -1;
uint32_t t98 = 679236965U;
uint64_t x405 = 894624185LLU;
int32_t x406 = INT32_MAX;


void f0(void) {
	int16_t x2 = INT16_MIN;
	volatile int8_t x3 = INT8_MIN;
	int16_t x4 = -1;

	t0 = (((x1==x2)%x3)+x4);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	int8_t x7 = -1;
	volatile int32_t x8 = -1;
	static int32_t t1 = 2248776;

	t1 = (((x5==x6)%x7)+x8);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 754U;
	int8_t x10 = -1;
	static int16_t x12 = INT16_MIN;
	static int32_t t2 = 10238;

	t2 = (((x9==x10)%x11)+x12);

	if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = INT8_MIN;
	int16_t x14 = 0;
	volatile int8_t x15 = -1;
	static volatile uint64_t t3 = 214656926LLU;

	t3 = (((x13==x14)%x15)+x16);

	if (t3 != 8015377LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 1U;
	static int16_t x18 = 85;
	int64_t x19 = -8408090021565LL;
	uint32_t x20 = 29U;
	int64_t t4 = -36006120LL;

	t4 = (((x17==x18)%x19)+x20);

	if (t4 != 29LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 0U;
	int8_t x23 = 47;
	volatile int8_t x24 = 60;

	t5 = (((x21==x22)%x23)+x24);

	if (t5 != 60) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	uint64_t x26 = 17303494893829LLU;
	volatile uint64_t x28 = UINT64_MAX;
	uint64_t t6 = UINT64_MAX;

	t6 = (((x25==x26)%x27)+x28);

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = INT8_MIN;
	volatile uint64_t x31 = 614437011273485LLU;
	static volatile int16_t x32 = INT16_MIN;

	t7 = (((x29==x30)%x31)+x32);

	if (t7 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	int16_t x35 = INT16_MAX;
	volatile int8_t x36 = -1;
	volatile int32_t t8 = -161;

	t8 = (((x33==x34)%x35)+x36);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = -1LL;
	int8_t x38 = INT8_MIN;
	volatile uint8_t x39 = 3U;
	volatile int8_t x40 = INT8_MAX;
	static int32_t t9 = -1209977;

	t9 = (((x37==x38)%x39)+x40);

	if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x43 = -1;
	static uint32_t t10 = 6532020U;

	t10 = (((x41==x42)%x43)+x44);

	if (t10 != 1278U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -474730777055399LL;
	static uint8_t x46 = 0U;
	int8_t x47 = INT8_MAX;
	volatile int8_t x48 = INT8_MAX;
	int32_t t11 = -7297;

	t11 = (((x45==x46)%x47)+x48);

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x51 = INT8_MAX;
	volatile int32_t t12 = -22880;

	t12 = (((x49==x50)%x51)+x52);

	if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = 24996LL;
	int8_t x54 = 41;
	uint8_t x55 = UINT8_MAX;
	int8_t x56 = 4;
	volatile int32_t t13 = 60743;

	t13 = (((x53==x54)%x55)+x56);

	if (t13 != 4) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = -1;
	volatile int16_t x59 = -1;
	int32_t x60 = -999;
	volatile int32_t t14 = -4840;

	t14 = (((x57==x58)%x59)+x60);

	if (t14 != -999) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = -25;
	int32_t x62 = -89;
	int8_t x63 = INT8_MIN;
	int16_t x64 = INT16_MIN;
	volatile int32_t t15 = -58;

	t15 = (((x61==x62)%x63)+x64);

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = UINT16_MAX;
	int16_t x66 = INT16_MAX;
	int32_t x67 = 64328251;
	int32_t x68 = INT32_MIN;
	volatile int32_t t16 = INT32_MIN;

	t16 = (((x65==x66)%x67)+x68);

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -1;
	static volatile uint8_t x70 = 24U;
	volatile uint16_t x72 = 30U;

	t17 = (((x69==x70)%x71)+x72);

	if (t17 != 30) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = UINT16_MAX;
	volatile int32_t x74 = 12694;
	static volatile int64_t x75 = INT64_MAX;
	volatile int64_t t18 = INT64_MAX;

	t18 = (((x73==x74)%x75)+x76);

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -1;
	int32_t x78 = INT32_MIN;
	uint8_t x79 = UINT8_MAX;
	volatile uint8_t x80 = 4U;

	t19 = (((x77==x78)%x79)+x80);

	if (t19 != 4) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x82 = 1U;
	static int16_t x83 = INT16_MIN;
	int32_t x84 = -742781;
	volatile int32_t t20 = 27781013;

	t20 = (((x81==x82)%x83)+x84);

	if (t20 != -742781) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = -17354204;
	volatile int16_t x86 = 1269;
	uint16_t x87 = 4U;
	static int32_t t21 = -14952;

	t21 = (((x85==x86)%x87)+x88);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 4U;
	volatile int16_t x90 = 0;
	uint64_t x91 = 1480LLU;
	volatile uint64_t t22 = 20285397548533548LLU;

	t22 = (((x89==x90)%x91)+x92);

	if (t22 != 4294967295LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = 26;
	int16_t x94 = INT16_MAX;
	static int64_t x95 = INT64_MIN;
	volatile int64_t t23 = -60966LL;

	t23 = (((x93==x94)%x95)+x96);

	if (t23 != 634853624LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -436;
	volatile int32_t x98 = -47899;
	int8_t x99 = 6;
	volatile int32_t t24 = 195511683;

	t24 = (((x97==x98)%x99)+x100);

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x102 = 14568U;
	volatile uint16_t x103 = 10083U;
	int32_t x104 = -95;
	static int32_t t25 = -218;

	t25 = (((x101==x102)%x103)+x104);

	if (t25 != -95) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x105 = 1;
	int16_t x106 = -1;
	int16_t x107 = 1;
	int64_t x108 = -1LL;

	t26 = (((x105==x106)%x107)+x108);

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 6632233206040550LLU;
	int64_t x110 = INT64_MIN;
	int8_t x111 = -8;
	static int64_t x112 = -140332031315352LL;
	static volatile int64_t t27 = 1644299236373LL;

	t27 = (((x109==x110)%x111)+x112);

	if (t27 != -140332031315352LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x114 = -1LL;
	uint16_t x115 = 421U;
	static int64_t t28 = 1LL;

	t28 = (((x113==x114)%x115)+x116);

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = 58;
	int32_t x118 = -26198403;
	volatile int32_t x120 = 10500;
	int32_t t29 = -6896497;

	t29 = (((x117==x118)%x119)+x120);

	if (t29 != 10500) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x121 = 983U;
	uint16_t x122 = 76U;
	uint64_t x123 = UINT64_MAX;
	volatile uint64_t t30 = 41737702671290761LLU;

	t30 = (((x121==x122)%x123)+x124);

	if (t30 != 2147483647LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	volatile int8_t x126 = -1;
	int64_t x128 = -1LL;

	t31 = (((x125==x126)%x127)+x128);

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x130 = 20830LL;
	uint64_t x131 = 433473121795900315LLU;

	t32 = (((x129==x130)%x131)+x132);

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x133 = -12;
	static int8_t x134 = -1;

	t33 = (((x133==x134)%x135)+x136);

	if (t33 != 3643761928764LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x138 = UINT64_MAX;
	int32_t x139 = 7;
	int8_t x140 = -1;
	volatile int32_t t34 = -18874765;

	t34 = (((x137==x138)%x139)+x140);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	volatile uint64_t x143 = 330499103459624858LLU;
	uint64_t t35 = 1LLU;

	t35 = (((x141==x142)%x143)+x144);

	if (t35 != 2067704LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -1LL;
	int32_t x147 = 16275027;
	volatile int32_t t36 = 1;

	t36 = (((x145==x146)%x147)+x148);

	if (t36 != 20) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = -2340278;
	uint32_t x150 = 62U;
	uint16_t x151 = 312U;
	int8_t x152 = INT8_MIN;
	static int32_t t37 = 7034;

	t37 = (((x149==x150)%x151)+x152);

	if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 43U;
	uint64_t x155 = UINT64_MAX;
	int64_t x156 = 11010441957511429LL;
	uint64_t t38 = 8683877163559584LLU;

	t38 = (((x153==x154)%x155)+x156);

	if (t38 != 11010441957511429LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = UINT32_MAX;
	int8_t x158 = 48;
	static volatile int64_t x159 = -1LL;
	int16_t x160 = INT16_MAX;
	int64_t t39 = 591770332362885LL;

	t39 = (((x157==x158)%x159)+x160);

	if (t39 != 32767LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x162 = 0;
	int8_t x163 = -14;
	volatile int8_t x164 = -29;
	int32_t t40 = -872301;

	t40 = (((x161==x162)%x163)+x164);

	if (t40 != -29) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x166 = UINT32_MAX;
	uint32_t x167 = 1059077266U;
	static uint32_t t41 = 252744U;

	t41 = (((x165==x166)%x167)+x168);

	if (t41 != 21063U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = 82791;
	int64_t x170 = INT64_MIN;
	static int64_t x172 = -12702766234LL;
	static volatile int64_t t42 = 1LL;

	t42 = (((x169==x170)%x171)+x172);

	if (t42 != -12702766234LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = UINT64_MAX;
	static int32_t x174 = INT32_MIN;
	volatile uint8_t x175 = UINT8_MAX;
	static uint32_t x176 = UINT32_MAX;
	static uint32_t t43 = UINT32_MAX;

	t43 = (((x173==x174)%x175)+x176);

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x177 = INT64_MIN;
	int16_t x178 = INT16_MIN;
	static volatile uint16_t x180 = UINT16_MAX;
	volatile int32_t t44 = -866;

	t44 = (((x177==x178)%x179)+x180);

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 101LLU;
	static volatile int32_t x183 = INT32_MAX;
	uint8_t x184 = 2U;
	int32_t t45 = 11320400;

	t45 = (((x181==x182)%x183)+x184);

	if (t45 != 2) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = UINT16_MAX;
	static int8_t x186 = INT8_MIN;
	int64_t x187 = INT64_MIN;
	int64_t x188 = INT64_MIN;
	int64_t t46 = INT64_MIN;

	t46 = (((x185==x186)%x187)+x188);

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x189 = -1;
	int16_t x191 = -13613;
	int64_t x192 = INT64_MIN;
	volatile int64_t t47 = INT64_MIN;

	t47 = (((x189==x190)%x191)+x192);

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x194 = -1;
	int16_t x195 = 22;
	volatile int32_t x196 = 76;
	static volatile int32_t t48 = 2;

	t48 = (((x193==x194)%x195)+x196);

	if (t48 != 76) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -1LL;
	volatile int8_t x198 = 57;
	uint16_t x199 = 1900U;
	int32_t x200 = 1798545;
	static int32_t t49 = 1042964;

	t49 = (((x197==x198)%x199)+x200);

	if (t49 != 1798545) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x201 = INT32_MAX;
	int8_t x202 = 1;
	int16_t x203 = INT16_MAX;
	volatile int16_t x204 = 0;

	t50 = (((x201==x202)%x203)+x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x205 = 5LLU;
	int64_t x206 = -1LL;
	uint32_t x207 = UINT32_MAX;
	static volatile uint32_t t51 = 2242363U;

	t51 = (((x205==x206)%x207)+x208);

	if (t51 != 2147483647U) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x209 = INT32_MIN;
	static uint8_t x210 = 0U;
	static uint8_t x211 = 19U;
	int32_t t52 = -5258207;

	t52 = (((x209==x210)%x211)+x212);

	if (t52 != 8798) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 1U;
	int8_t x215 = INT8_MIN;
	int32_t t53 = 0;

	t53 = (((x213==x214)%x215)+x216);

	if (t53 != 65535) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MAX;
	int16_t x218 = INT16_MIN;
	int8_t x219 = 3;
	volatile uint32_t t54 = UINT32_MAX;

	t54 = (((x217==x218)%x219)+x220);

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x223 = INT16_MIN;
	uint32_t t55 = UINT32_MAX;

	t55 = (((x221==x222)%x223)+x224);

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x225 = UINT16_MAX;
	int64_t x226 = INT64_MAX;
	static int8_t x227 = INT8_MIN;
	int32_t x228 = INT32_MIN;
	int32_t t56 = INT32_MIN;

	t56 = (((x225==x226)%x227)+x228);

	if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = -22;
	static volatile uint64_t x231 = 1748651430544490279LLU;
	int32_t x232 = -58027150;
	volatile uint64_t t57 = 34399LLU;

	t57 = (((x229==x230)%x231)+x232);

	if (t57 != 18446744073651524466LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x234 = UINT32_MAX;
	volatile int16_t x235 = -1219;
	static uint64_t x236 = UINT64_MAX;
	uint64_t t58 = UINT64_MAX;

	t58 = (((x233==x234)%x235)+x236);

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -1;
	uint32_t x238 = 19056327U;
	int64_t x239 = INT64_MIN;
	int16_t x240 = 3;
	volatile int64_t t59 = -24038LL;

	t59 = (((x237==x238)%x239)+x240);

	if (t59 != 3LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = -51;
	volatile int8_t x242 = 13;
	volatile int16_t x243 = INT16_MIN;
	uint8_t x244 = UINT8_MAX;
	int32_t t60 = -195729665;

	t60 = (((x241==x242)%x243)+x244);

	if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MAX;
	uint64_t x246 = 133LLU;
	int8_t x247 = 1;
	static int32_t x248 = -337440908;

	t61 = (((x245==x246)%x247)+x248);

	if (t61 != -337440908) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = 16U;
	uint32_t x250 = 0U;
	int16_t x251 = INT16_MIN;
	int64_t x252 = 129007982005LL;
	static int64_t t62 = -96195638197188LL;

	t62 = (((x249==x250)%x251)+x252);

	if (t62 != 129007982005LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x255 = UINT16_MAX;
	volatile uint32_t x256 = UINT32_MAX;
	volatile uint32_t t63 = UINT32_MAX;

	t63 = (((x253==x254)%x255)+x256);

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = -1;
	static int16_t x258 = INT16_MIN;
	static uint32_t x260 = 52U;
	static volatile int64_t t64 = 441103792568LL;

	t64 = (((x257==x258)%x259)+x260);

	if (t64 != 52LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x266 = INT8_MIN;
	int64_t x267 = 43543072LL;
	uint8_t x268 = 25U;

	t65 = (((x265==x266)%x267)+x268);

	if (t65 != 25LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x269 = INT8_MIN;
	static int32_t x270 = INT32_MIN;
	int8_t x271 = INT8_MAX;

	t66 = (((x269==x270)%x271)+x272);

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x273 = INT16_MIN;
	uint32_t x274 = UINT32_MAX;
	static uint64_t x276 = 145373LLU;
	volatile uint64_t t67 = 7279LLU;

	t67 = (((x273==x274)%x275)+x276);

	if (t67 != 145373LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x278 = 70887537871LLU;
	uint8_t x279 = 23U;
	static uint8_t x280 = UINT8_MAX;

	t68 = (((x277==x278)%x279)+x280);

	if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x281 = INT8_MIN;
	uint8_t x282 = UINT8_MAX;
	static int16_t x283 = 1;
	volatile uint64_t x284 = 101LLU;

	t69 = (((x281==x282)%x283)+x284);

	if (t69 != 101LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x285 = 29U;
	static int8_t x286 = INT8_MIN;
	int32_t x287 = -1;
	int16_t x288 = INT16_MIN;
	int32_t t70 = -18682;

	t70 = (((x285==x286)%x287)+x288);

	if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x290 = -1;
	uint16_t x291 = 13U;
	int8_t x292 = INT8_MIN;

	t71 = (((x289==x290)%x291)+x292);

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x297 = 445U;
	uint16_t x298 = 841U;
	int8_t x299 = 1;
	int32_t x300 = 6896928;

	t72 = (((x297==x298)%x299)+x300);

	if (t72 != 6896928) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x301 = INT64_MAX;
	static volatile uint32_t x302 = 138385501U;
	volatile int16_t x303 = -1;
	uint8_t x304 = 3U;

	t73 = (((x301==x302)%x303)+x304);

	if (t73 != 3) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x305 = INT8_MIN;
	int8_t x307 = INT8_MAX;
	volatile uint32_t t74 = 1879949990U;

	t74 = (((x305==x306)%x307)+x308);

	if (t74 != 1342008975U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x309 = INT64_MIN;
	volatile int8_t x310 = INT8_MIN;
	int8_t x311 = 22;
	uint32_t x312 = 119U;
	volatile uint32_t t75 = 947639897U;

	t75 = (((x309==x310)%x311)+x312);

	if (t75 != 119U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x314 = 12638071LLU;
	int16_t x315 = 2925;
	static int64_t x316 = -1LL;
	volatile int64_t t76 = 778546924LL;

	t76 = (((x313==x314)%x315)+x316);

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x318 = INT16_MIN;
	volatile uint8_t x319 = UINT8_MAX;
	int32_t t77 = -5398;

	t77 = (((x317==x318)%x319)+x320);

	if (t77 != 256) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x321 = 59U;
	int64_t x322 = INT64_MIN;
	int32_t x323 = INT32_MIN;
	volatile uint8_t x324 = 10U;

	t78 = (((x321==x322)%x323)+x324);

	if (t78 != 10) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x325 = -1;
	uint8_t x326 = 1U;
	int8_t x327 = INT8_MIN;
	static volatile uint8_t x328 = UINT8_MAX;
	static volatile int32_t t79 = 31489;

	t79 = (((x325==x326)%x327)+x328);

	if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x329 = -1;
	volatile int16_t x331 = -1;
	static uint32_t x332 = 226U;

	t80 = (((x329==x330)%x331)+x332);

	if (t80 != 226U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x334 = INT8_MIN;
	uint16_t x335 = 13U;
	volatile int32_t t81 = 1024819;

	t81 = (((x333==x334)%x335)+x336);

	if (t81 != -16) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x337 = INT32_MAX;
	int16_t x338 = -5392;
	volatile uint64_t x340 = 2747360548LLU;

	t82 = (((x337==x338)%x339)+x340);

	if (t82 != 2747360548LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x341 = INT16_MIN;
	volatile uint16_t x342 = UINT16_MAX;
	static uint32_t x343 = 963U;
	int32_t x344 = INT32_MAX;
	static volatile uint32_t t83 = 63U;

	t83 = (((x341==x342)%x343)+x344);

	if (t83 != 2147483647U) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x345 = UINT32_MAX;
	volatile int64_t x347 = INT64_MAX;
	int32_t x348 = -2;
	volatile int64_t t84 = 199043LL;

	t84 = (((x345==x346)%x347)+x348);

	if (t84 != -2LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x350 = INT16_MIN;
	int64_t x351 = INT64_MIN;
	int16_t x352 = INT16_MAX;
	int64_t t85 = 4039696478556574LL;

	t85 = (((x349==x350)%x351)+x352);

	if (t85 != 32767LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x353 = -3164160411466765LL;
	int64_t x354 = 6412905253846294LL;
	uint64_t x355 = 1278558306705LLU;
	static volatile uint16_t x356 = 9U;

	t86 = (((x353==x354)%x355)+x356);

	if (t86 != 9LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x358 = 1U;
	static volatile int8_t x359 = -1;
	int16_t x360 = INT16_MIN;

	t87 = (((x357==x358)%x359)+x360);

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x361 = -137851650729490177LL;
	int16_t x363 = INT16_MAX;
	volatile uint32_t t88 = UINT32_MAX;

	t88 = (((x361==x362)%x363)+x364);

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x365 = INT32_MIN;
	int32_t x366 = 247852551;
	volatile uint16_t x367 = 3U;
	uint32_t x368 = 16487201U;
	uint32_t t89 = 1082890U;

	t89 = (((x365==x366)%x367)+x368);

	if (t89 != 16487201U) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x369 = 68U;
	uint16_t x371 = UINT16_MAX;
	volatile int32_t x372 = 8;
	volatile int32_t t90 = 195;

	t90 = (((x369==x370)%x371)+x372);

	if (t90 != 8) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x374 = -1LL;
	uint16_t x375 = 1U;
	uint64_t t91 = 838LLU;

	t91 = (((x373==x374)%x375)+x376);

	if (t91 != 56LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x377 = -4905;
	int64_t x378 = INT64_MAX;
	static uint32_t x379 = 921U;
	volatile int16_t x380 = 15457;
	uint32_t t92 = 384298111U;

	t92 = (((x377==x378)%x379)+x380);

	if (t92 != 15457U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x382 = 6218U;
	uint16_t x383 = 1U;
	int64_t x384 = INT64_MAX;

	t93 = (((x381==x382)%x383)+x384);

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x385 = INT16_MIN;
	static int64_t x386 = INT64_MIN;
	static int16_t x387 = INT16_MAX;
	uint32_t x388 = 159046U;

	t94 = (((x385==x386)%x387)+x388);

	if (t94 != 159046U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x389 = INT8_MAX;
	uint64_t x390 = UINT64_MAX;
	int64_t x391 = 2932256496635845411LL;
	uint64_t x392 = UINT64_MAX;

	t95 = (((x389==x390)%x391)+x392);

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x393 = INT16_MAX;
	int16_t x395 = -7;
	volatile int32_t t96 = -1475272;

	t96 = (((x393==x394)%x395)+x396);

	if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x397 = INT64_MAX;
	int16_t x398 = INT16_MIN;
	int16_t x399 = INT16_MIN;
	static volatile int32_t t97 = 12923850;

	t97 = (((x397==x398)%x399)+x400);

	if (t97 != 2) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x402 = INT16_MIN;
	static volatile uint32_t x404 = 0U;

	t98 = (((x401==x402)%x403)+x404);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x407 = 55U;
	int32_t x408 = -3674618;
	uint32_t t99 = 9U;

	t99 = (((x405==x406)%x407)+x408);

	if (t99 != 4291292678U) { NG(); } else { ; }
	
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

