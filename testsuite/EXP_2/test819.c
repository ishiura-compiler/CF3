#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -1LL;
static uint64_t t1 = 0LLU;
uint8_t x12 = 4U;
static volatile uint32_t t2 = 482800U;
volatile int16_t x14 = -642;
int16_t x19 = INT16_MIN;
uint8_t x20 = 3U;
volatile int32_t x25 = -1;
int32_t x26 = INT32_MIN;
int32_t x30 = INT32_MIN;
int32_t x36 = INT32_MIN;
volatile int32_t t8 = 56009895;
volatile int8_t x40 = INT8_MIN;
volatile int8_t x48 = 5;
static int8_t x50 = 5;
int32_t x53 = INT32_MIN;
int8_t x56 = 1;
uint64_t x59 = 1948327502688472LLU;
uint64_t t14 = 2002548LLU;
static int32_t x63 = INT32_MAX;
int16_t x71 = -1;
int64_t x77 = 29289320542LL;
int64_t x85 = INT64_MAX;
static int16_t x93 = INT16_MAX;
int16_t x97 = INT16_MIN;
int64_t t29 = -893656092081707856LL;
int32_t x124 = -9763359;
int32_t t30 = -3029;
static int16_t x135 = -5;
int32_t t33 = 88;
static int8_t x137 = -2;
static int64_t x139 = INT64_MIN;
int64_t x144 = INT64_MIN;
int16_t x150 = INT16_MIN;
int64_t x168 = 184089876005LL;
int8_t x171 = INT8_MIN;
volatile int32_t x174 = INT32_MIN;
int8_t x175 = INT8_MIN;
int8_t x178 = 4;
int64_t x184 = INT64_MIN;
static uint32_t x193 = 702902U;
int32_t x194 = 29546;
int16_t x202 = INT16_MAX;
int64_t x205 = -1LL;
int16_t x210 = -5;
int64_t x213 = INT64_MAX;
int32_t x220 = -6172625;
volatile int16_t x226 = INT16_MIN;
int8_t x231 = INT8_MIN;
int32_t x234 = -1;
static int32_t t58 = -258755167;
uint32_t x238 = UINT32_MAX;
int64_t x245 = -8705345461409LL;
static uint32_t x246 = UINT32_MAX;
volatile int64_t t60 = 873862546955558682LL;
int64_t x258 = INT64_MAX;
volatile int64_t x264 = 25073326786LL;
volatile int64_t x279 = INT64_MIN;
int16_t x281 = 96;
int16_t x284 = -105;
static int32_t x287 = INT32_MIN;
int64_t x298 = INT64_MIN;
volatile int16_t x300 = INT16_MIN;
int16_t x301 = 15;
uint64_t t75 = 32126LLU;
uint32_t x310 = UINT32_MAX;
int8_t x315 = 1;
volatile uint16_t x324 = UINT16_MAX;
static volatile int8_t x326 = -7;
int8_t x328 = -1;
int32_t x329 = 39413768;
int16_t x333 = INT16_MIN;
volatile int64_t x337 = 11684954998122LL;
static int8_t x339 = -1;
static uint8_t x344 = UINT8_MAX;
int32_t x347 = INT32_MIN;
int32_t t85 = 1;
int32_t x351 = -1;
int32_t x352 = -27015033;
volatile int32_t t86 = -388022386;
uint8_t x357 = 3U;
static int64_t x362 = -1LL;
static uint64_t x368 = UINT64_MAX;
static uint64_t t90 = 125633556LLU;
volatile uint32_t x373 = UINT32_MAX;
static int8_t x376 = INT8_MIN;
volatile int64_t t92 = 1017071482443LL;
static int16_t x377 = INT16_MIN;
int8_t x398 = 13;
static int64_t x401 = 84992LL;


void f0(void) {
	uint64_t x1 = 16384623266732LLU;
	static uint16_t x3 = UINT16_MAX;
	uint32_t x4 = 53606542U;
	volatile uint64_t t0 = 30385816032096LLU;

	t0 = ((x1&(x2%x3))^x4);

	if (t0 != 16384571978530LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = 1948U;
	static uint64_t x6 = 12407LLU;
	int8_t x7 = INT8_MIN;
	int8_t x8 = -1;

	t1 = ((x5&(x6%x7))^x8);

	if (t1 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -62769439;
	uint32_t x10 = UINT32_MAX;
	volatile uint8_t x11 = UINT8_MAX;

	t2 = ((x9&(x10%x11))^x12);

	if (t2 != 4U) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x13 = INT8_MIN;
	int64_t x15 = -1LL;
	int64_t x16 = INT64_MIN;
	int64_t t3 = INT64_MIN;

	t3 = ((x13&(x14%x15))^x16);

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	int32_t x18 = INT32_MIN;
	volatile int64_t t4 = -6604330802609LL;

	t4 = ((x17&(x18%x19))^x20);

	if (t4 != 3LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	int32_t x22 = INT32_MIN;
	int8_t x23 = INT8_MIN;
	volatile int8_t x24 = INT8_MIN;
	volatile int64_t t5 = -1156930LL;

	t5 = ((x21&(x22%x23))^x24);

	if (t5 != -128LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x27 = INT64_MIN;
	static int8_t x28 = -1;
	volatile int64_t t6 = -1589121LL;

	t6 = ((x25&(x26%x27))^x28);

	if (t6 != 2147483647LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = -1;
	uint16_t x31 = 36U;
	volatile int16_t x32 = INT16_MIN;
	volatile int32_t t7 = 0;

	t7 = ((x29&(x30%x31))^x32);

	if (t7 != 32748) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	int32_t x34 = -908022;
	uint16_t x35 = 1824U;

	t8 = ((x33&(x34%x35))^x36);

	if (t8 != 2147450880) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	int8_t x38 = INT8_MIN;
	uint8_t x39 = UINT8_MAX;
	static volatile int32_t t9 = 3;

	t9 = ((x37&(x38%x39))^x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 14U;
	volatile int64_t x42 = 228LL;
	uint16_t x43 = UINT16_MAX;
	static int8_t x44 = INT8_MIN;
	static int64_t t10 = 1LL;

	t10 = ((x41&(x42%x43))^x44);

	if (t10 != -124LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	int64_t x46 = INT64_MAX;
	volatile int8_t x47 = -1;
	volatile int64_t t11 = -5568282239LL;

	t11 = ((x45&(x46%x47))^x48);

	if (t11 != 5LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 249822486U;
	int64_t x51 = INT64_MIN;
	int16_t x52 = INT16_MAX;
	static int64_t t12 = -376624390988135LL;

	t12 = ((x49&(x50%x51))^x52);

	if (t12 != 32763LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x54 = 1;
	int64_t x55 = INT64_MAX;
	int64_t t13 = 57LL;

	t13 = ((x53&(x54%x55))^x56);

	if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	volatile int32_t x58 = INT32_MAX;
	uint32_t x60 = UINT32_MAX;

	t14 = ((x57&(x58%x59))^x60);

	if (t14 != 4294967295LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	static int16_t x62 = -2;
	static int8_t x64 = INT8_MAX;
	static volatile int32_t t15 = -3402;

	t15 = ((x61&(x62%x63))^x64);

	if (t15 != -127) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -1;
	uint8_t x66 = 1U;
	uint16_t x67 = 30U;
	int8_t x68 = 0;
	static int32_t t16 = 7239;

	t16 = ((x65&(x66%x67))^x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = INT32_MAX;
	uint8_t x70 = 1U;
	uint8_t x72 = 90U;
	int32_t t17 = 742515154;

	t17 = ((x69&(x70%x71))^x72);

	if (t17 != 90) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x73 = 30839287LLU;
	static int64_t x74 = 31465602399792LL;
	static volatile int16_t x75 = INT16_MAX;
	int64_t x76 = INT64_MIN;
	uint64_t t18 = 57683982637274LLU;

	t18 = ((x73&(x74%x75))^x76);

	if (t18 != 9223372036854776005LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x78 = INT64_MIN;
	volatile int16_t x79 = 880;
	int32_t x80 = -1;
	volatile int64_t t19 = -23747987565139LL;

	t19 = ((x77&(x78%x79))^x80);

	if (t19 != -29289320513LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = 1;
	volatile int64_t x82 = INT64_MIN;
	int8_t x83 = INT8_MIN;
	static uint64_t x84 = 14276925944114LLU;
	volatile uint64_t t20 = 15LLU;

	t20 = ((x81&(x82%x83))^x84);

	if (t20 != 14276925944114LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x86 = INT8_MIN;
	uint16_t x87 = 1617U;
	int16_t x88 = INT16_MAX;
	static volatile int64_t t21 = -58949443449929LL;

	t21 = ((x85&(x86%x87))^x88);

	if (t21 != 9223372036854743167LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x89 = INT64_MAX;
	volatile int32_t x90 = -1;
	uint8_t x91 = 2U;
	uint32_t x92 = UINT32_MAX;
	static int64_t t22 = -130LL;

	t22 = ((x89&(x90%x91))^x92);

	if (t22 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x94 = -1LL;
	int32_t x95 = -177;
	volatile int32_t x96 = -925904265;
	int64_t t23 = -11375076944LL;

	t23 = ((x93&(x94%x95))^x96);

	if (t23 != -925913720LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x98 = 61;
	int8_t x99 = -2;
	int32_t x100 = 0;
	static int32_t t24 = 19781980;

	t24 = ((x97&(x98%x99))^x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -1;
	int16_t x102 = -21;
	static int16_t x103 = -59;
	uint32_t x104 = UINT32_MAX;
	volatile uint32_t t25 = 937U;

	t25 = ((x101&(x102%x103))^x104);

	if (t25 != 20U) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = -1LL;
	int64_t x106 = 6359LL;
	int32_t x107 = 8840;
	int32_t x108 = INT32_MAX;
	int64_t t26 = 4108157875325360LL;

	t26 = ((x105&(x106%x107))^x108);

	if (t26 != 2147477288LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = UINT16_MAX;
	int32_t x110 = -1;
	volatile uint8_t x111 = UINT8_MAX;
	uint16_t x112 = UINT16_MAX;
	volatile int32_t t27 = -146;

	t27 = ((x109&(x110%x111))^x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x113 = INT64_MIN;
	static int32_t x114 = INT32_MIN;
	uint32_t x115 = 824U;
	int64_t x116 = -1LL;
	static volatile int64_t t28 = -6264780616230LL;

	t28 = ((x113&(x114%x115))^x116);

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = -1LL;
	uint16_t x118 = 4410U;
	int16_t x119 = INT16_MIN;
	volatile int64_t x120 = INT64_MIN;

	t29 = ((x117&(x118%x119))^x120);

	if (t29 != -9223372036854771398LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -52;
	static uint16_t x122 = 15914U;
	int8_t x123 = -1;

	t30 = ((x121&(x122%x123))^x124);

	if (t30 != -9763359) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x125 = INT32_MAX;
	uint32_t x126 = 478U;
	static int8_t x127 = -27;
	int32_t x128 = INT32_MAX;
	volatile uint32_t t31 = 1410915U;

	t31 = ((x125&(x126%x127))^x128);

	if (t31 != 2147483169U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = INT32_MIN;
	int32_t x130 = INT32_MAX;
	int16_t x131 = -2628;
	static int64_t x132 = INT64_MIN;
	int64_t t32 = INT64_MIN;

	t32 = ((x129&(x130%x131))^x132);

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = 10317U;
	volatile int8_t x134 = 1;
	static int32_t x136 = -1;

	t33 = ((x133&(x134%x135))^x136);

	if (t33 != -2) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x138 = 3U;
	int16_t x140 = -1;
	volatile int64_t t34 = 290651132436134LL;

	t34 = ((x137&(x138%x139))^x140);

	if (t34 != -3LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x141 = UINT32_MAX;
	uint16_t x142 = 12U;
	static int64_t x143 = -1LL;
	volatile int64_t t35 = INT64_MIN;

	t35 = ((x141&(x142%x143))^x144);

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -1;
	static uint16_t x146 = 1007U;
	static int8_t x147 = INT8_MAX;
	int64_t x148 = INT64_MAX;
	int64_t t36 = -43675294539LL;

	t36 = ((x145&(x146%x147))^x148);

	if (t36 != 9223372036854775689LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 26U;
	static int32_t x151 = -1;
	uint64_t x152 = 105LLU;
	volatile uint64_t t37 = 21190718136031053LLU;

	t37 = ((x149&(x150%x151))^x152);

	if (t37 != 105LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int8_t x153 = -27;
	uint8_t x154 = UINT8_MAX;
	int32_t x155 = 1019353330;
	int16_t x156 = -454;
	int32_t t38 = -126;

	t38 = ((x153&(x154%x155))^x156);

	if (t38 != -289) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	int16_t x158 = 3;
	uint64_t x159 = 984LLU;
	uint8_t x160 = UINT8_MAX;
	uint64_t t39 = 93069767515146354LLU;

	t39 = ((x157&(x158%x159))^x160);

	if (t39 != 255LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	static uint64_t x162 = 150056LLU;
	int8_t x163 = 63;
	static uint8_t x164 = 9U;
	volatile uint64_t t40 = 389647647182231LLU;

	t40 = ((x161&(x162%x163))^x164);

	if (t40 != 9LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = -1;
	uint16_t x166 = 175U;
	int32_t x167 = 1;
	static volatile int64_t t41 = -358659235412934LL;

	t41 = ((x165&(x166%x167))^x168);

	if (t41 != 184089876005LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = UINT32_MAX;
	int16_t x170 = 125;
	volatile int16_t x172 = 2437;
	static volatile uint32_t t42 = 6U;

	t42 = ((x169&(x170%x171))^x172);

	if (t42 != 2552U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x173 = 23U;
	static volatile int16_t x176 = INT16_MAX;
	volatile int32_t t43 = 1786;

	t43 = ((x173&(x174%x175))^x176);

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	uint8_t x179 = 19U;
	int64_t x180 = 9LL;
	static volatile int64_t t44 = -119687062LL;

	t44 = ((x177&(x178%x179))^x180);

	if (t44 != 9LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 15U;
	volatile int32_t x182 = -93;
	static uint8_t x183 = UINT8_MAX;
	int64_t t45 = -1018346LL;

	t45 = ((x181&(x182%x183))^x184);

	if (t45 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -1LL;
	int32_t x186 = 4065672;
	static volatile int64_t x187 = INT64_MIN;
	uint32_t x188 = UINT32_MAX;
	static volatile int64_t t46 = 101667059535741815LL;

	t46 = ((x185&(x186%x187))^x188);

	if (t46 != 4290901623LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -1LL;
	uint64_t x190 = 2899339313323363LLU;
	uint8_t x191 = 7U;
	static uint32_t x192 = 0U;
	uint64_t t47 = 27842441286879LLU;

	t47 = ((x189&(x190%x191))^x192);

	if (t47 != 1LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x195 = 4070LLU;
	int32_t x196 = INT32_MIN;
	static uint64_t t48 = 91204215683LLU;

	t48 = ((x193&(x194%x195))^x196);

	if (t48 != 18446744071562068000LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x197 = UINT64_MAX;
	static int64_t x198 = INT64_MIN;
	volatile int32_t x199 = -1;
	int32_t x200 = -6275;
	uint64_t t49 = 260005489095271529LLU;

	t49 = ((x197&(x198%x199))^x200);

	if (t49 != 18446744073709545341LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x201 = -1LL;
	volatile int64_t x203 = -1LL;
	int32_t x204 = -1;
	volatile int64_t t50 = -39LL;

	t50 = ((x201&(x202%x203))^x204);

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x206 = 29U;
	int64_t x207 = -21307579231LL;
	static volatile int32_t x208 = INT32_MIN;
	volatile int64_t t51 = 1316534LL;

	t51 = ((x205&(x206%x207))^x208);

	if (t51 != -2147483619LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x209 = -1;
	uint8_t x211 = UINT8_MAX;
	int8_t x212 = -1;
	int32_t t52 = -246;

	t52 = ((x209&(x210%x211))^x212);

	if (t52 != 4) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x214 = INT8_MIN;
	int64_t x215 = INT64_MIN;
	int8_t x216 = -1;
	volatile int64_t t53 = 29175980602LL;

	t53 = ((x213&(x214%x215))^x216);

	if (t53 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x217 = INT64_MIN;
	int8_t x218 = INT8_MIN;
	int8_t x219 = INT8_MIN;
	int64_t t54 = -169896201977340LL;

	t54 = ((x217&(x218%x219))^x220);

	if (t54 != -6172625LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x221 = 729439LLU;
	int8_t x222 = INT8_MAX;
	int8_t x223 = INT8_MIN;
	uint16_t x224 = 13675U;
	volatile uint64_t t55 = 1971LLU;

	t55 = ((x221&(x222%x223))^x224);

	if (t55 != 13620LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = 64622;
	uint64_t x227 = 3443LLU;
	int8_t x228 = INT8_MAX;
	volatile uint64_t t56 = 1362180768LLU;

	t56 = ((x225&(x226%x227))^x228);

	if (t56 != 1085LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = 9U;
	static uint64_t x230 = UINT64_MAX;
	int32_t x232 = -8896;
	volatile uint64_t t57 = 384360603033434544LLU;

	t57 = ((x229&(x230%x231))^x232);

	if (t57 != 18446744073709542729LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = UINT8_MAX;
	int8_t x235 = INT8_MIN;
	static int32_t x236 = INT32_MIN;

	t58 = ((x233&(x234%x235))^x236);

	if (t58 != -2147483393) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x237 = INT8_MIN;
	int64_t x239 = -1157LL;
	uint16_t x240 = UINT16_MAX;
	int64_t t59 = 10740LL;

	t59 = ((x237&(x238%x239))^x240);

	if (t59 != 65151LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x247 = INT64_MIN;
	uint32_t x248 = 1657705831U;

	t60 = ((x245&(x246%x247))^x248);

	if (t60 != 1110931000LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x249 = -291;
	int64_t x250 = -1LL;
	uint32_t x251 = 2144568772U;
	volatile int64_t x252 = -326977004165324LL;
	static int64_t t61 = 6969424265758709LL;

	t61 = ((x249&(x250%x251))^x252);

	if (t61 != 326977004165609LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x253 = UINT32_MAX;
	int8_t x254 = 1;
	int8_t x255 = INT8_MAX;
	uint64_t x256 = 65236039LLU;
	uint64_t t62 = 39003LLU;

	t62 = ((x253&(x254%x255))^x256);

	if (t62 != 65236038LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x257 = INT16_MIN;
	int64_t x259 = -399196110LL;
	uint32_t x260 = UINT32_MAX;
	volatile int64_t t63 = -8659LL;

	t63 = ((x257&(x258%x259))^x260);

	if (t63 != 3905257471LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x261 = 3U;
	static int32_t x262 = INT32_MAX;
	int8_t x263 = INT8_MIN;
	static volatile int64_t t64 = 1286142118829095961LL;

	t64 = ((x261&(x262%x263))^x264);

	if (t64 != 25073326785LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x265 = 7724;
	static int16_t x266 = 1814;
	uint64_t x267 = 26LLU;
	static int32_t x268 = 47783395;
	static volatile uint64_t t65 = 79LLU;

	t65 = ((x265&(x266%x267))^x268);

	if (t65 != 47783399LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x269 = INT32_MAX;
	static int32_t x270 = -93973683;
	int64_t x271 = INT64_MIN;
	uint64_t x272 = 587395LLU;
	volatile uint64_t t66 = 135110066413388LLU;

	t66 = ((x269&(x270%x271))^x272);

	if (t66 != 2054088142LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x273 = INT32_MIN;
	int64_t x274 = -39751772378833LL;
	static int64_t x275 = 64895LL;
	int32_t x276 = 21577;
	static volatile int64_t t67 = 29260LL;

	t67 = ((x273&(x274%x275))^x276);

	if (t67 != -2147462071LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x277 = INT16_MIN;
	int32_t x278 = INT32_MIN;
	int32_t x280 = 46;
	int64_t t68 = -13LL;

	t68 = ((x277&(x278%x279))^x280);

	if (t68 != -2147483602LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x282 = INT16_MIN;
	int64_t x283 = -490615LL;
	volatile int64_t t69 = 42966405LL;

	t69 = ((x281&(x282%x283))^x284);

	if (t69 != -105LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x285 = UINT32_MAX;
	int64_t x286 = INT64_MAX;
	volatile int64_t x288 = 6099969LL;
	volatile int64_t t70 = -88857911LL;

	t70 = ((x285&(x286%x287))^x288);

	if (t70 != 2141383678LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x289 = 5218U;
	uint32_t x290 = 433802176U;
	int32_t x291 = -7;
	int32_t x292 = INT32_MIN;
	uint32_t t71 = 53U;

	t71 = ((x289&(x290%x291))^x292);

	if (t71 != 2147483712U) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x293 = INT16_MAX;
	int64_t x294 = INT64_MAX;
	int16_t x295 = INT16_MIN;
	int64_t x296 = INT64_MAX;
	int64_t t72 = 916448LL;

	t72 = ((x293&(x294%x295))^x296);

	if (t72 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x297 = 644308053U;
	int64_t x299 = -1LL;
	volatile int64_t t73 = 144904LL;

	t73 = ((x297&(x298%x299))^x300);

	if (t73 != -32768LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x302 = 455692654U;
	volatile int8_t x303 = 1;
	int64_t x304 = -2498LL;
	int64_t t74 = 4086988561249LL;

	t74 = ((x301&(x302%x303))^x304);

	if (t74 != -2498LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x305 = UINT8_MAX;
	int8_t x306 = INT8_MIN;
	uint64_t x307 = UINT64_MAX;
	static uint8_t x308 = 16U;

	t75 = ((x305&(x306%x307))^x308);

	if (t75 != 144LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x309 = INT8_MIN;
	static volatile uint16_t x311 = UINT16_MAX;
	static volatile uint32_t x312 = 26U;
	volatile uint32_t t76 = 10U;

	t76 = ((x309&(x310%x311))^x312);

	if (t76 != 26U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x313 = -1LL;
	uint8_t x314 = 0U;
	static uint16_t x316 = 9786U;
	int64_t t77 = 12317751419LL;

	t77 = ((x313&(x314%x315))^x316);

	if (t77 != 9786LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x317 = INT16_MIN;
	volatile uint64_t x318 = 1176438587950LLU;
	int16_t x319 = -1;
	uint32_t x320 = 931U;
	static uint64_t t78 = 1087743295305LLU;

	t78 = ((x317&(x318%x319))^x320);

	if (t78 != 1176438571939LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x321 = 3513168085837802443LL;
	uint16_t x322 = UINT16_MAX;
	int8_t x323 = INT8_MAX;
	static volatile int64_t t79 = 7480124738LL;

	t79 = ((x321&(x322%x323))^x324);

	if (t79 != 65532LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x325 = 2050356427627LL;
	volatile uint8_t x327 = UINT8_MAX;
	volatile int64_t t80 = -895415096LL;

	t80 = ((x325&(x326%x327))^x328);

	if (t80 != -2050356427626LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x330 = UINT32_MAX;
	int8_t x331 = INT8_MAX;
	int32_t x332 = INT32_MIN;
	uint32_t t81 = 11U;

	t81 = ((x329&(x330%x331))^x332);

	if (t81 != 2147483656U) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x334 = INT16_MAX;
	int32_t x335 = INT32_MIN;
	static int16_t x336 = INT16_MIN;
	int32_t t82 = 335287;

	t82 = ((x333&(x334%x335))^x336);

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x338 = UINT32_MAX;
	static int64_t x340 = 2423009LL;
	static int64_t t83 = -522634895921486889LL;

	t83 = ((x337&(x338%x339))^x340);

	if (t83 != 2423009LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x341 = UINT32_MAX;
	volatile uint16_t x342 = 6U;
	int8_t x343 = 3;
	uint32_t t84 = 801U;

	t84 = ((x341&(x342%x343))^x344);

	if (t84 != 255U) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x345 = INT32_MIN;
	int16_t x346 = -38;
	int16_t x348 = INT16_MIN;

	t85 = ((x345&(x346%x347))^x348);

	if (t85 != 2147450880) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x349 = UINT16_MAX;
	uint8_t x350 = 91U;

	t86 = ((x349&(x350%x351))^x352);

	if (t86 != -27015033) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x353 = INT32_MIN;
	uint32_t x354 = UINT32_MAX;
	uint64_t x355 = UINT64_MAX;
	uint8_t x356 = 0U;
	uint64_t t87 = 50952756LLU;

	t87 = ((x353&(x354%x355))^x356);

	if (t87 != 2147483648LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x358 = INT32_MIN;
	int16_t x359 = INT16_MIN;
	static volatile uint32_t x360 = 4073349U;
	uint32_t t88 = 263615740U;

	t88 = ((x357&(x358%x359))^x360);

	if (t88 != 4073349U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x361 = INT8_MIN;
	uint64_t x363 = UINT64_MAX;
	volatile uint16_t x364 = 7U;
	uint64_t t89 = 71207586396161LLU;

	t89 = ((x361&(x362%x363))^x364);

	if (t89 != 7LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x365 = 21U;
	uint32_t x366 = 62558U;
	uint16_t x367 = UINT16_MAX;

	t90 = ((x365&(x366%x367))^x368);

	if (t90 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x369 = UINT16_MAX;
	volatile int8_t x370 = -1;
	static int64_t x371 = -3379LL;
	uint32_t x372 = 1058569232U;
	volatile int64_t t91 = -433503078449LL;

	t91 = ((x369&(x370%x371))^x372);

	if (t91 != 1058571247LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x374 = 860953722LL;
	int16_t x375 = -392;

	t92 = ((x373&(x374%x375))^x376);

	if (t92 != -182LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x378 = 49;
	volatile int8_t x379 = INT8_MIN;
	static uint16_t x380 = 6U;
	volatile int32_t t93 = 7435269;

	t93 = ((x377&(x378%x379))^x380);

	if (t93 != 6) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint32_t x381 = 345729U;
	uint64_t x382 = 45789LLU;
	int16_t x383 = INT16_MIN;
	volatile uint16_t x384 = UINT16_MAX;
	uint64_t t94 = 7301018122900102LLU;

	t94 = ((x381&(x382%x383))^x384);

	if (t94 != 64894LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x385 = INT16_MIN;
	volatile int32_t x386 = INT32_MIN;
	uint8_t x387 = 89U;
	uint64_t x388 = UINT64_MAX;
	volatile uint64_t t95 = 4465LLU;

	t95 = ((x385&(x386%x387))^x388);

	if (t95 != 32767LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x389 = INT8_MAX;
	volatile int64_t x390 = INT64_MAX;
	int8_t x391 = INT8_MIN;
	uint64_t x392 = UINT64_MAX;
	volatile uint64_t t96 = 18627LLU;

	t96 = ((x389&(x390%x391))^x392);

	if (t96 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x393 = -1;
	int16_t x394 = -11;
	int32_t x395 = -1;
	uint8_t x396 = 3U;
	int32_t t97 = -758;

	t97 = ((x393&(x394%x395))^x396);

	if (t97 != 3) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x397 = 9678799782747601LLU;
	volatile int64_t x399 = INT64_MIN;
	int16_t x400 = -124;
	volatile uint64_t t98 = 5LLU;

	t98 = ((x397&(x398%x399))^x400);

	if (t98 != 18446744073709551493LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x402 = INT32_MIN;
	static int32_t x403 = -1;
	int32_t x404 = INT32_MAX;
	volatile int64_t t99 = 7695LL;

	t99 = ((x401&(x402%x403))^x404);

	if (t99 != 2147483647LL) { NG(); } else { ; }
	
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

