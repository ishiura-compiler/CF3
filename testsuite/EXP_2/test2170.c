#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
volatile int16_t x9 = 419;
int64_t x14 = -8573LL;
int32_t x27 = -23;
static volatile int32_t t7 = 0;
volatile int64_t t9 = 1LL;
static volatile int64_t x43 = 6063139LL;
volatile uint64_t t11 = 3560561078260900474LLU;
static volatile int8_t x53 = -1;
int16_t x54 = INT16_MIN;
volatile int64_t t14 = 73LL;
static int64_t x63 = INT64_MAX;
volatile int64_t x64 = -1LL;
static int32_t x65 = -1;
static uint64_t x74 = 77LLU;
int32_t x82 = -1;
static uint8_t x87 = 5U;
uint64_t t21 = UINT64_MAX;
static int32_t x92 = INT32_MIN;
int64_t x97 = INT64_MIN;
int16_t x99 = INT16_MAX;
int64_t x101 = INT64_MAX;
int16_t x102 = 1180;
static int32_t x117 = INT32_MAX;
int16_t x118 = INT16_MAX;
int8_t x119 = -1;
uint64_t x120 = 451544356LLU;
int64_t x122 = INT64_MIN;
int32_t x126 = INT32_MIN;
int32_t t31 = -91;
volatile int32_t t32 = 0;
static int8_t x136 = INT8_MIN;
int64_t x139 = -1LL;
uint16_t x146 = 9U;
int32_t x152 = INT32_MIN;
static int8_t x153 = -1;
volatile uint16_t x158 = UINT16_MAX;
int16_t x170 = INT16_MAX;
int64_t x175 = -1LL;
volatile int32_t t44 = 1;
volatile int32_t x185 = INT32_MIN;
static int16_t x187 = INT16_MIN;
int8_t x190 = INT8_MIN;
static int32_t x192 = INT32_MIN;
int16_t x199 = 3;
int32_t x200 = -1;
static uint8_t x203 = 31U;
int64_t t51 = -2397649182LL;
volatile int16_t x211 = 1;
volatile uint16_t x213 = UINT16_MAX;
int32_t x217 = 1871;
static uint32_t x224 = 1U;
uint32_t t55 = 267431450U;
int64_t x226 = INT64_MAX;
static uint64_t x227 = 1785385LLU;
uint64_t x231 = 9961055850649586LLU;
static uint16_t x240 = UINT16_MAX;
uint64_t t59 = 3774718741LLU;
uint64_t x243 = 20913023LLU;
int64_t x244 = INT64_MIN;
volatile int64_t t61 = 3141465899148051LL;
volatile int8_t x255 = 0;
int32_t x260 = INT32_MIN;
volatile uint32_t t65 = 835U;
uint32_t x265 = UINT32_MAX;
static volatile uint64_t t68 = 4001LLU;
static uint32_t x283 = 45447U;
int64_t x287 = -1LL;
int64_t x288 = -1LL;
int16_t x291 = 4;
int64_t t74 = -1462935LL;
volatile int16_t x303 = -1;
int8_t x310 = -1;
int16_t x313 = 1591;
uint8_t x314 = 15U;
int64_t x315 = -1LL;
int16_t x316 = -88;
int32_t x323 = INT32_MAX;
int64_t t80 = 1016084LL;
int64_t x326 = -1LL;
static volatile uint64_t x332 = 961776646213828818LLU;
int32_t x333 = INT32_MIN;
static uint8_t x339 = 46U;
int32_t x348 = -1;
int32_t x350 = INT32_MAX;
volatile int64_t t87 = 3073403032LL;
static int16_t x354 = INT16_MIN;
uint64_t t89 = 3181381906795014280LLU;
static int16_t x362 = INT16_MAX;
int64_t x363 = INT64_MAX;
volatile uint64_t t91 = UINT64_MAX;
int64_t x371 = INT64_MIN;
int32_t x372 = -29;
static uint32_t x374 = 223525118U;
int64_t t93 = -393495709380990LL;
volatile uint8_t x380 = 96U;
int8_t x383 = INT8_MIN;
int16_t x386 = INT16_MIN;
int8_t x391 = INT8_MAX;
static int64_t x394 = INT64_MIN;


void f0(void) {
	int32_t x2 = -1;
	volatile int16_t x3 = -15;
	int64_t x4 = INT64_MIN;
	volatile int64_t t0 = INT64_MIN;

	t0 = ((x1&(x2^x3))|x4);

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MIN;
	volatile int64_t x6 = INT64_MAX;
	uint8_t x7 = UINT8_MAX;
	uint64_t x8 = UINT64_MAX;
	uint64_t t1 = UINT64_MAX;

	t1 = ((x5&(x6^x7))|x8);

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x10 = -1;
	uint16_t x11 = UINT16_MAX;
	static uint8_t x12 = 114U;
	static volatile int32_t t2 = 30124059;

	t2 = ((x9&(x10^x11))|x12);

	if (t2 != 114) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int64_t x15 = -8LL;
	uint64_t x16 = 831471542154824LLU;
	volatile uint64_t t3 = 4883928550LLU;

	t3 = ((x13&(x14^x15))|x16);

	if (t3 != 831471542154824LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 11U;
	int64_t x18 = INT64_MIN;
	int32_t x19 = -1;
	volatile int64_t x20 = -1LL;
	volatile int64_t t4 = 109978150LL;

	t4 = ((x17&(x18^x19))|x20);

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = UINT32_MAX;
	uint16_t x22 = 104U;
	int32_t x23 = INT32_MIN;
	uint8_t x24 = 17U;
	uint32_t t5 = 34612U;

	t5 = ((x21&(x22^x23))|x24);

	if (t5 != 2147483769U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	uint64_t x26 = UINT64_MAX;
	int64_t x28 = INT64_MIN;
	uint64_t t6 = 13085579899094131LLU;

	t6 = ((x25&(x26^x27))|x28);

	if (t6 != 9223372036854775830LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -548;
	uint8_t x30 = UINT8_MAX;
	volatile int32_t x31 = 6924;
	int16_t x32 = -1;

	t7 = ((x29&(x30^x31))|x32);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x33 = 37U;
	int64_t x34 = 47822LL;
	static int64_t x35 = INT64_MIN;
	volatile int16_t x36 = INT16_MAX;
	volatile int64_t t8 = 651200LL;

	t8 = ((x33&(x34^x35))|x36);

	if (t8 != 32767LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = INT16_MIN;
	static int16_t x38 = INT16_MAX;
	int64_t x39 = INT64_MIN;
	volatile int32_t x40 = INT32_MIN;

	t9 = ((x37&(x38^x39))|x40);

	if (t9 != -2147483648LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -3542;
	uint16_t x42 = UINT16_MAX;
	uint8_t x44 = 15U;
	volatile int64_t t10 = 0LL;

	t10 = ((x41&(x42^x43))|x44);

	if (t10 != 6058511LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = -1;
	int32_t x46 = -1;
	int32_t x47 = 146941;
	static uint64_t x48 = 241421642588LLU;

	t11 = ((x45&(x46^x47))|x48);

	if (t11 != 18446744073709415262LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = INT32_MIN;
	static int16_t x50 = -1;
	uint64_t x51 = UINT64_MAX;
	volatile int16_t x52 = 390;
	volatile uint64_t t12 = 26873048174350499LLU;

	t12 = ((x49&(x50^x51))|x52);

	if (t12 != 390LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x55 = UINT8_MAX;
	int64_t x56 = -1LL;
	volatile int64_t t13 = 30LL;

	t13 = ((x53&(x54^x55))|x56);

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = -12;
	int32_t x58 = INT32_MIN;
	static int16_t x59 = 1918;
	static int64_t x60 = INT64_MIN;

	t14 = ((x57&(x58^x59))|x60);

	if (t14 != -2147481740LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x61 = UINT32_MAX;
	uint16_t x62 = 41U;
	static volatile int64_t t15 = 1LL;

	t15 = ((x61&(x62^x63))|x64);

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x66 = 17308U;
	int16_t x67 = INT16_MIN;
	volatile int32_t x68 = INT32_MIN;
	static uint32_t t16 = 191661U;

	t16 = ((x65&(x66^x67))|x68);

	if (t16 != 4294951836U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -4;
	int64_t x70 = 560517209949LL;
	int64_t x71 = INT64_MIN;
	uint8_t x72 = 70U;
	volatile int64_t t17 = -88745042455621LL;

	t17 = ((x69&(x70^x71))|x72);

	if (t17 != -9223371476337565858LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MAX;
	int64_t x75 = INT64_MAX;
	int8_t x76 = 1;
	volatile uint64_t t18 = 2214623282546657LLU;

	t18 = ((x73&(x74^x75))|x76);

	if (t18 != 32691LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -69;
	uint8_t x78 = UINT8_MAX;
	int8_t x79 = INT8_MIN;
	static int32_t x80 = INT32_MAX;
	static volatile int32_t t19 = 4;

	t19 = ((x77&(x78^x79))|x80);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x81 = INT8_MAX;
	int8_t x83 = -15;
	uint32_t x84 = 534681115U;
	volatile uint32_t t20 = 1237613U;

	t20 = ((x81&(x82^x83))|x84);

	if (t20 != 534681119U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MAX;
	static int32_t x86 = INT32_MIN;
	static uint64_t x88 = UINT64_MAX;

	t21 = ((x85&(x86^x87))|x88);

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = 18LL;
	int8_t x90 = 1;
	int16_t x91 = -1;
	volatile int64_t t22 = 26447795076LL;

	t22 = ((x89&(x90^x91))|x92);

	if (t22 != -2147483630LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -1;
	uint32_t x94 = 1149U;
	static volatile uint8_t x95 = 17U;
	int16_t x96 = -1;
	uint32_t t23 = UINT32_MAX;

	t23 = ((x93&(x94^x95))|x96);

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x98 = INT32_MIN;
	static int16_t x100 = INT16_MIN;
	volatile int64_t t24 = 1321279323133970359LL;

	t24 = ((x97&(x98^x99))|x100);

	if (t24 != -32768LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x103 = -1LL;
	static uint64_t x104 = 315859547478LLU;
	volatile uint64_t t25 = 544503634LLU;

	t25 = ((x101&(x102^x103))|x104);

	if (t25 != 9223372036854775671LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -47368349;
	static uint64_t x106 = UINT64_MAX;
	uint32_t x107 = 6911695U;
	int32_t x108 = INT32_MIN;
	static volatile uint64_t t26 = 1081947132642198LLU;

	t26 = ((x105&(x106^x107))|x108);

	if (t26 != 18446744073659482400LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = INT8_MIN;
	int32_t x110 = INT32_MIN;
	int16_t x111 = INT16_MAX;
	static int8_t x112 = INT8_MIN;
	volatile int32_t t27 = 5;

	t27 = ((x109&(x110^x111))|x112);

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 17U;
	static int16_t x114 = -1;
	int8_t x115 = INT8_MIN;
	volatile int64_t x116 = INT64_MIN;
	static volatile int64_t t28 = -266718722971LL;

	t28 = ((x113&(x114^x115))|x116);

	if (t28 != -9223372036854775791LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t t29 = 6878LLU;

	t29 = ((x117&(x118^x119))|x120);

	if (t29 != 2147452196LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = 2994;
	int32_t x123 = -1;
	int16_t x124 = INT16_MIN;
	int64_t t30 = -179026433LL;

	t30 = ((x121&(x122^x123))|x124);

	if (t30 != -29774LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -1;
	volatile uint8_t x127 = 8U;
	int16_t x128 = INT16_MIN;

	t31 = ((x125&(x126^x127))|x128);

	if (t31 != -32760) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	int32_t x130 = -1;
	int16_t x131 = -1;
	int8_t x132 = -47;

	t32 = ((x129&(x130^x131))|x132);

	if (t32 != -47) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x133 = INT8_MIN;
	int64_t x134 = INT64_MAX;
	int8_t x135 = INT8_MAX;
	int64_t t33 = -7562845LL;

	t33 = ((x133&(x134^x135))|x136);

	if (t33 != -128LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x137 = INT8_MAX;
	uint32_t x138 = 39379U;
	int64_t x140 = -87LL;
	static int64_t t34 = -251768833267473460LL;

	t34 = ((x137&(x138^x139))|x140);

	if (t34 != -83LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MAX;
	int16_t x142 = INT16_MAX;
	static int32_t x143 = INT32_MIN;
	uint64_t x144 = 3004LLU;
	uint64_t t35 = 149416399345701LLU;

	t35 = ((x141&(x142^x143))|x144);

	if (t35 != 9223372034707324927LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -1;
	volatile int8_t x147 = INT8_MIN;
	int64_t x148 = 20076802LL;
	int64_t t36 = -18672966359051LL;

	t36 = ((x145&(x146^x147))|x148);

	if (t36 != -117LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x149 = UINT8_MAX;
	static int8_t x150 = -58;
	uint16_t x151 = UINT16_MAX;
	volatile int32_t t37 = 16137;

	t37 = ((x149&(x150^x151))|x152);

	if (t37 != -2147483591) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x154 = INT64_MIN;
	int16_t x155 = INT16_MIN;
	uint32_t x156 = UINT32_MAX;
	volatile int64_t t38 = INT64_MAX;

	t38 = ((x153&(x154^x155))|x156);

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 31U;
	uint64_t x159 = 127001644911942065LLU;
	int64_t x160 = -1LL;
	static uint64_t t39 = UINT64_MAX;

	t39 = ((x157&(x158^x159))|x160);

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 15529U;
	static int8_t x162 = -1;
	volatile uint32_t x163 = 46564U;
	uint64_t x164 = 3439287296252625LLU;
	volatile uint64_t t40 = 3649LLU;

	t40 = ((x161&(x162^x163))|x164);

	if (t40 != 3439287296252633LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x165 = 41141LLU;
	int8_t x166 = 40;
	volatile uint8_t x167 = UINT8_MAX;
	volatile int32_t x168 = -1;
	volatile uint64_t t41 = UINT64_MAX;

	t41 = ((x165&(x166^x167))|x168);

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x169 = -156;
	static int64_t x171 = INT64_MAX;
	volatile int8_t x172 = INT8_MIN;
	int64_t t42 = 1597661515622LL;

	t42 = ((x169&(x170^x171))|x172);

	if (t42 != -128LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x173 = 4U;
	uint32_t x174 = 5U;
	int32_t x176 = 1010;
	int64_t t43 = -5546954508318LL;

	t43 = ((x173&(x174^x175))|x176);

	if (t43 != 1010LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = 12401369;
	int8_t x178 = 13;
	uint16_t x179 = 11U;
	int32_t x180 = -86097;

	t44 = ((x177&(x178^x179))|x180);

	if (t44 != -86097) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 0U;
	int16_t x182 = INT16_MAX;
	int8_t x183 = -5;
	volatile int16_t x184 = INT16_MAX;
	volatile int32_t t45 = 267017785;

	t45 = ((x181&(x182^x183))|x184);

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x186 = -272709118;
	volatile int64_t x188 = INT64_MIN;
	int64_t t46 = INT64_MIN;

	t46 = ((x185&(x186^x187))|x188);

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x189 = -10032;
	uint64_t x191 = UINT64_MAX;
	uint64_t t47 = 62455825809905580LLU;

	t47 = ((x189&(x190^x191))|x192);

	if (t47 != 18446744071562068048LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = -64373370947LL;
	uint8_t x194 = UINT8_MAX;
	int64_t x195 = -1LL;
	static volatile int32_t x196 = INT32_MIN;
	volatile int64_t t48 = 369362LL;

	t48 = ((x193&(x194^x195))|x196);

	if (t48 != -2096345344LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x197 = 31U;
	uint64_t x198 = 4903955866610068LLU;
	volatile uint64_t t49 = UINT64_MAX;

	t49 = ((x197&(x198^x199))|x200);

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x201 = UINT32_MAX;
	int64_t x202 = 14404632940LL;
	int8_t x204 = INT8_MIN;
	static volatile int64_t t50 = 267302788LL;

	t50 = ((x201&(x202^x203))|x204);

	if (t50 != -13LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x205 = INT64_MIN;
	volatile int8_t x206 = INT8_MIN;
	int64_t x207 = -134707LL;
	int16_t x208 = INT16_MAX;

	t51 = ((x205&(x206^x207))|x208);

	if (t51 != 32767LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x209 = 7U;
	static volatile uint16_t x210 = 18U;
	int16_t x212 = 100;
	volatile int32_t t52 = -12;

	t52 = ((x209&(x210^x211))|x212);

	if (t52 != 103) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x214 = 101426;
	static int32_t x215 = -1;
	int8_t x216 = -3;
	volatile int32_t t53 = 1;

	t53 = ((x213&(x214^x215))|x216);

	if (t53 != -3) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x218 = INT64_MIN;
	int32_t x219 = INT32_MAX;
	static int64_t x220 = 3707LL;
	int64_t t54 = 35358920744620915LL;

	t54 = ((x217&(x218^x219))|x220);

	if (t54 != 3967LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	static uint32_t x222 = UINT32_MAX;
	uint32_t x223 = 64607636U;

	t55 = ((x221&(x222^x223))|x224);

	if (t55 != 4230359553U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = UINT64_MAX;
	static int8_t x228 = INT8_MIN;
	uint64_t t56 = 293122251026LLU;

	t56 = ((x225&(x226^x227))|x228);

	if (t56 != 18446744073709551574LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x229 = 3U;
	int16_t x230 = -74;
	volatile uint16_t x232 = UINT16_MAX;
	uint64_t t57 = 35812979833207861LLU;

	t57 = ((x229&(x230^x231))|x232);

	if (t57 != 65535LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MAX;
	int64_t x234 = INT64_MAX;
	static int16_t x235 = -1;
	volatile int16_t x236 = 25;
	int64_t t58 = 1LL;

	t58 = ((x233&(x234^x235))|x236);

	if (t58 != 25LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = UINT32_MAX;
	volatile int64_t x238 = -2171LL;
	volatile uint64_t x239 = UINT64_MAX;

	t59 = ((x237&(x238^x239))|x240);

	if (t59 != 65535LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = 7U;
	volatile uint16_t x242 = 260U;
	uint64_t t60 = 477890838298LLU;

	t60 = ((x241&(x242^x243))|x244);

	if (t60 != 9223372036854775811LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = -32;
	uint8_t x246 = 88U;
	int64_t x247 = INT64_MIN;
	static int16_t x248 = 65;

	t61 = ((x245&(x246^x247))|x248);

	if (t61 != -9223372036854775743LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MAX;
	uint16_t x250 = UINT16_MAX;
	int16_t x251 = 2610;
	int64_t x252 = INT64_MIN;
	int64_t t62 = -254974LL;

	t62 = ((x249&(x250^x251))|x252);

	if (t62 != -9223372036854745651LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = 1271U;
	int16_t x254 = INT16_MIN;
	int8_t x256 = -1;
	int32_t t63 = 2075630;

	t63 = ((x253&(x254^x255))|x256);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x257 = INT64_MAX;
	int16_t x258 = -1;
	volatile uint16_t x259 = UINT16_MAX;
	volatile int64_t t64 = 557964713879076870LL;

	t64 = ((x257&(x258^x259))|x260);

	if (t64 != -65536LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MIN;
	int32_t x262 = INT32_MIN;
	volatile uint32_t x263 = 441300U;
	uint8_t x264 = UINT8_MAX;

	t65 = ((x261&(x262^x263))|x264);

	if (t65 != 2147924991U) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x266 = INT16_MIN;
	int64_t x267 = INT64_MIN;
	volatile int16_t x268 = INT16_MIN;
	int64_t t66 = -1568372521299LL;

	t66 = ((x265&(x266^x267))|x268);

	if (t66 != -32768LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x269 = INT16_MAX;
	static int64_t x270 = INT64_MAX;
	static uint8_t x271 = 85U;
	uint8_t x272 = UINT8_MAX;
	static volatile int64_t t67 = -912767187388403652LL;

	t67 = ((x269&(x270^x271))|x272);

	if (t67 != 32767LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = 2886219;
	uint64_t x274 = 119646LLU;
	int8_t x275 = 1;
	static int64_t x276 = -172869587548LL;

	t68 = ((x273&(x274^x275))|x276);

	if (t68 != 18446743900839964655LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = UINT16_MAX;
	int32_t x278 = -32;
	int16_t x279 = -1;
	int64_t x280 = -1LL;
	volatile int64_t t69 = -11197499993102592LL;

	t69 = ((x277&(x278^x279))|x280);

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x281 = 3986;
	volatile int16_t x282 = INT16_MIN;
	uint32_t x284 = 811U;
	volatile uint32_t t70 = 65549442U;

	t70 = ((x281&(x282^x283))|x284);

	if (t70 != 939U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x285 = 197874362U;
	int16_t x286 = -38;
	static volatile int64_t t71 = 54600364842350632LL;

	t71 = ((x285&(x286^x287))|x288);

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = 312848786U;
	volatile uint16_t x290 = UINT16_MAX;
	int64_t x292 = INT64_MIN;
	int64_t t72 = -618719772014011001LL;

	t72 = ((x289&(x290^x291))|x292);

	if (t72 != -9223372036854730350LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = -1;
	static volatile int32_t x294 = INT32_MAX;
	int64_t x295 = INT64_MAX;
	int8_t x296 = 26;
	int64_t t73 = 59105LL;

	t73 = ((x293&(x294^x295))|x296);

	if (t73 != 9223372034707292186LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int64_t x297 = 4787872LL;
	volatile int8_t x298 = -1;
	volatile int64_t x299 = -572701510LL;
	static uint32_t x300 = UINT32_MAX;

	t74 = ((x297&(x298^x299))|x300);

	if (t74 != 4294967295LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = -1;
	int8_t x302 = INT8_MAX;
	volatile uint64_t x304 = 44LLU;
	volatile uint64_t t75 = 283258064926822461LLU;

	t75 = ((x301&(x302^x303))|x304);

	if (t75 != 18446744073709551532LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x305 = -76840298;
	volatile int64_t x306 = -1LL;
	int8_t x307 = 1;
	int64_t x308 = -1LL;
	int64_t t76 = -3250654270653678709LL;

	t76 = ((x305&(x306^x307))|x308);

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -1;
	volatile int16_t x311 = INT16_MAX;
	uint32_t x312 = 25714U;
	volatile uint32_t t77 = 128238U;

	t77 = ((x309&(x310^x311))|x312);

	if (t77 != 4294960242U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t t78 = -181400263603004844LL;

	t78 = ((x313&(x314^x315))|x316);

	if (t78 != -72LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 7U;
	int16_t x318 = INT16_MIN;
	int64_t x319 = INT64_MIN;
	int16_t x320 = INT16_MIN;
	static volatile int64_t t79 = -32645132391LL;

	t79 = ((x317&(x318^x319))|x320);

	if (t79 != -32768LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = 0;
	int64_t x322 = INT64_MIN;
	uint16_t x324 = 21U;

	t80 = ((x321&(x322^x323))|x324);

	if (t80 != 21LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = -1;
	uint16_t x327 = 26U;
	int8_t x328 = INT8_MIN;
	int64_t t81 = -152424210LL;

	t81 = ((x325&(x326^x327))|x328);

	if (t81 != -27LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = UINT32_MAX;
	volatile int64_t x330 = -17059LL;
	uint8_t x331 = 64U;
	volatile uint64_t t82 = 688563432753173LLU;

	t82 = ((x329&(x330^x331))|x332);

	if (t82 != 961776647978073567LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x334 = 1905641U;
	int16_t x335 = INT16_MIN;
	volatile int16_t x336 = 33;
	volatile uint32_t t83 = 2394U;

	t83 = ((x333&(x334^x335))|x336);

	if (t83 != 2147483681U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MIN;
	int8_t x338 = 18;
	uint32_t x340 = 179668U;
	int64_t t84 = 4490739254687657128LL;

	t84 = ((x337&(x338^x339))|x340);

	if (t84 != 179668LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = 48U;
	int64_t x342 = -1LL;
	int8_t x343 = INT8_MAX;
	volatile int64_t x344 = INT64_MIN;
	int64_t t85 = INT64_MIN;

	t85 = ((x341&(x342^x343))|x344);

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = -2208945LL;
	uint64_t x346 = 2971329608304194LLU;
	int16_t x347 = INT16_MIN;
	volatile uint64_t t86 = UINT64_MAX;

	t86 = ((x345&(x346^x347))|x348);

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	volatile int16_t x351 = 0;
	int64_t x352 = -5783LL;

	t87 = ((x349&(x350^x351))|x352);

	if (t87 != -23LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = -9;
	static int16_t x355 = INT16_MIN;
	uint16_t x356 = 650U;
	int32_t t88 = -108;

	t88 = ((x353&(x354^x355))|x356);

	if (t88 != 650) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 6023942519732738809LLU;
	static volatile int8_t x358 = INT8_MAX;
	static uint8_t x359 = UINT8_MAX;
	static int8_t x360 = INT8_MIN;

	t89 = ((x357&(x358^x359))|x360);

	if (t89 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x361 = INT64_MIN;
	int64_t x364 = 658851610321LL;
	static volatile int64_t t90 = 3018186598LL;

	t90 = ((x361&(x362^x363))|x364);

	if (t90 != 658851610321LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = 5999410097001841LLU;
	int32_t x366 = INT32_MIN;
	static volatile int32_t x367 = INT32_MIN;
	int32_t x368 = -1;

	t91 = ((x365&(x366^x367))|x368);

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -7;
	uint16_t x370 = 116U;
	int64_t t92 = -106192682LL;

	t92 = ((x369&(x370^x371))|x372);

	if (t92 != -13LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MAX;
	static int16_t x375 = -1;
	int64_t x376 = -1LL;

	t93 = ((x373&(x374^x375))|x376);

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = 0;
	int64_t x378 = 982669LL;
	int8_t x379 = INT8_MIN;
	int64_t t94 = -1008654LL;

	t94 = ((x377&(x378^x379))|x380);

	if (t94 != 96LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MAX;
	uint64_t x382 = 308649597593391839LLU;
	int8_t x384 = INT8_MIN;
	uint64_t t95 = 238116518573LLU;

	t95 = ((x381&(x382^x383))|x384);

	if (t95 != 18446744073709551583LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MAX;
	static int8_t x387 = INT8_MAX;
	int16_t x388 = 179;
	int64_t t96 = 1806736853962327072LL;

	t96 = ((x385&(x386^x387))|x388);

	if (t96 != 9223372036854743295LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = -1;
	volatile uint8_t x390 = 13U;
	int8_t x392 = 0;
	volatile int32_t t97 = -477;

	t97 = ((x389&(x390^x391))|x392);

	if (t97 != 114) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x393 = -1LL;
	uint16_t x395 = 3129U;
	int32_t x396 = INT32_MIN;
	volatile int64_t t98 = 1LL;

	t98 = ((x393&(x394^x395))|x396);

	if (t98 != -2147480519LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x397 = INT64_MIN;
	static uint8_t x398 = UINT8_MAX;
	volatile uint32_t x399 = 5691499U;
	uint64_t x400 = 2252LLU;
	uint64_t t99 = 1109563511175924811LLU;

	t99 = ((x397&(x398^x399))|x400);

	if (t99 != 2252LLU) { NG(); } else { ; }
	
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

