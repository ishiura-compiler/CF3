#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x3 = 51U;
volatile int32_t t0 = 58;
static uint16_t x16 = UINT16_MAX;
int8_t x23 = -3;
volatile int32_t t5 = -2;
int64_t x33 = INT64_MIN;
int16_t x39 = INT16_MIN;
uint32_t x42 = 96818637U;
int16_t x47 = INT16_MIN;
volatile uint64_t x54 = UINT64_MAX;
int64_t x57 = INT64_MAX;
uint32_t x58 = 1107U;
static int64_t x60 = INT64_MIN;
int16_t x63 = INT16_MIN;
volatile int32_t t16 = 230;
volatile uint8_t x69 = 0U;
int32_t t17 = 86;
uint16_t x79 = UINT16_MAX;
int64_t x81 = -293195LL;
int8_t x85 = -1;
int64_t x87 = INT64_MIN;
uint64_t x90 = 2703LLU;
uint16_t x93 = 12U;
uint8_t x94 = 0U;
int64_t t23 = INT64_MIN;
volatile uint64_t x97 = UINT64_MAX;
uint32_t x98 = 18226U;
int8_t x100 = INT8_MIN;
volatile int32_t x101 = INT32_MIN;
static uint8_t x102 = 0U;
static int32_t t25 = 53701;
uint16_t x109 = 6116U;
static uint32_t x110 = 910388U;
int32_t x115 = INT32_MIN;
static int64_t x119 = 32221857176LL;
uint16_t x120 = 5782U;
int16_t x123 = INT16_MAX;
static int32_t x126 = -4207;
static volatile uint32_t x136 = UINT32_MAX;
volatile uint32_t t33 = 20407119U;
static int64_t x138 = INT64_MIN;
uint32_t x144 = UINT32_MAX;
int64_t x152 = INT64_MAX;
uint16_t x153 = UINT16_MAX;
int32_t x160 = 100;
int8_t x165 = INT8_MIN;
int64_t x167 = INT64_MIN;
int32_t x168 = 5938706;
int32_t x169 = INT32_MIN;
volatile int64_t t43 = 205079890232105LL;
uint16_t x180 = UINT16_MAX;
volatile int64_t x196 = INT64_MIN;
static volatile int8_t x199 = INT8_MAX;
int8_t x201 = -1;
int64_t x204 = -764114319LL;
volatile int64_t t50 = -443322567751671LL;
int64_t x214 = INT64_MAX;
static int64_t x217 = INT64_MAX;
volatile int16_t x221 = -1;
static int8_t x229 = INT8_MIN;
int64_t x232 = INT64_MIN;
int64_t x240 = INT64_MIN;
int8_t x247 = INT8_MAX;
int32_t x252 = -614;
static int32_t x253 = INT32_MIN;
static int64_t x255 = INT64_MIN;
int16_t x257 = -1;
int64_t x260 = -1LL;
int64_t t64 = -94171LL;
int8_t x261 = INT8_MIN;
int32_t x263 = -165831;
int32_t t65 = INT32_MIN;
int32_t x265 = -1;
volatile int64_t x268 = -1LL;
int64_t t66 = 129424488708LL;
volatile int32_t t67 = -548097;
static int32_t x279 = 152632339;
volatile int16_t x281 = -1;
static int64_t x287 = INT64_MAX;
volatile int32_t x293 = -8070;
int64_t x298 = -39910534LL;
uint8_t x300 = 51U;
int32_t x302 = -1;
uint8_t x310 = UINT8_MAX;
int32_t t77 = -3;
volatile int32_t x316 = INT32_MIN;
volatile int32_t t78 = 226559356;
int32_t x323 = INT32_MIN;
static volatile int32_t x327 = INT32_MIN;
uint32_t x331 = 473756440U;
int8_t x332 = -1;
int32_t x337 = 11;
static int32_t x340 = INT32_MIN;
static volatile uint16_t x347 = 5924U;
int8_t x349 = INT8_MAX;
static uint16_t x352 = 16737U;
static volatile int32_t t88 = 160880152;
uint32_t t89 = 2166U;
static int8_t x364 = INT8_MIN;
static volatile int32_t t90 = -17;
int32_t x365 = INT32_MAX;
static volatile int16_t x368 = INT16_MAX;
volatile int64_t x372 = INT64_MIN;
int64_t t92 = 5644864100465255LL;
uint64_t x376 = 4225462117LLU;
uint16_t x377 = 9U;
int32_t x379 = INT32_MAX;
static uint8_t x380 = 11U;
int8_t x388 = 0;
int64_t x394 = -1LL;


void f0(void) {
	int16_t x1 = INT16_MAX;
	int16_t x2 = INT16_MIN;
	uint8_t x4 = UINT8_MAX;

	t0 = (((x1<x2)<=x3)^x4);

	if (t0 != 254) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	uint64_t x6 = 113336LLU;
	int8_t x7 = 30;
	volatile uint8_t x8 = UINT8_MAX;
	int32_t t1 = -75;

	t1 = (((x5<x6)<=x7)^x8);

	if (t1 != 254) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = 167U;
	int8_t x10 = INT8_MIN;
	uint8_t x11 = 0U;
	int32_t x12 = INT32_MIN;
	int32_t t2 = INT32_MIN;

	t2 = (((x9<x10)<=x11)^x12);

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x13 = UINT32_MAX;
	static int64_t x14 = 867801290LL;
	int64_t x15 = -1LL;
	int32_t t3 = 11341;

	t3 = (((x13<x14)<=x15)^x16);

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 16;
	int32_t x18 = 455;
	int32_t x19 = -1253;
	int8_t x20 = INT8_MIN;
	int32_t t4 = 1741072;

	t4 = (((x17<x18)<=x19)^x20);

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	int16_t x22 = INT16_MAX;
	int8_t x24 = -1;

	t5 = (((x21<x22)<=x23)^x24);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x25 = -1;
	uint16_t x26 = 7339U;
	static int64_t x27 = INT64_MIN;
	int8_t x28 = INT8_MAX;
	volatile int32_t t6 = 579369;

	t6 = (((x25<x26)<=x27)^x28);

	if (t6 != 127) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x29 = 2323605285983220867LLU;
	static volatile uint32_t x30 = UINT32_MAX;
	static int32_t x31 = -254;
	int64_t x32 = 17295010758133LL;
	volatile int64_t t7 = 19186677798LL;

	t7 = (((x29<x30)<=x31)^x32);

	if (t7 != 17295010758133LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x34 = INT8_MIN;
	static uint8_t x35 = 1U;
	volatile uint16_t x36 = 5349U;
	int32_t t8 = 8510;

	t8 = (((x33<x34)<=x35)^x36);

	if (t8 != 5348) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x37 = 1430LLU;
	volatile int8_t x38 = INT8_MIN;
	static uint16_t x40 = 3019U;
	int32_t t9 = 13637278;

	t9 = (((x37<x38)<=x39)^x40);

	if (t9 != 3019) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -1;
	volatile uint32_t x43 = UINT32_MAX;
	int64_t x44 = INT64_MIN;
	int64_t t10 = 36220136157933372LL;

	t10 = (((x41<x42)<=x43)^x44);

	if (t10 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = INT16_MIN;
	int64_t x46 = INT64_MIN;
	int32_t x48 = INT32_MIN;
	int32_t t11 = INT32_MIN;

	t11 = (((x45<x46)<=x47)^x48);

	if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = INT16_MIN;
	static uint8_t x50 = UINT8_MAX;
	static uint16_t x51 = 1U;
	int32_t x52 = -1;
	int32_t t12 = -23956;

	t12 = (((x49<x50)<=x51)^x52);

	if (t12 != -2) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 54LLU;
	int8_t x55 = -1;
	int16_t x56 = INT16_MIN;
	int32_t t13 = -40245482;

	t13 = (((x53<x54)<=x55)^x56);

	if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x59 = 1002291U;
	volatile int64_t t14 = -2874380LL;

	t14 = (((x57<x58)<=x59)^x60);

	if (t14 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 1887U;
	uint64_t x62 = UINT64_MAX;
	uint16_t x64 = UINT16_MAX;
	volatile int32_t t15 = -483962;

	t15 = (((x61<x62)<=x63)^x64);

	if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -7207705LL;
	uint16_t x66 = 8121U;
	int8_t x67 = INT8_MAX;
	static int32_t x68 = 18517;

	t16 = (((x65<x66)<=x67)^x68);

	if (t16 != 18516) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x70 = -35;
	int32_t x71 = INT32_MAX;
	volatile uint8_t x72 = 120U;

	t17 = (((x69<x70)<=x71)^x72);

	if (t17 != 121) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MAX;
	volatile uint16_t x74 = UINT16_MAX;
	uint32_t x75 = UINT32_MAX;
	int32_t x76 = 1;
	int32_t t18 = 6822138;

	t18 = (((x73<x74)<=x75)^x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x77 = 495641651LLU;
	uint16_t x78 = 3U;
	uint8_t x80 = UINT8_MAX;
	volatile int32_t t19 = -1;

	t19 = (((x77<x78)<=x79)^x80);

	if (t19 != 254) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x82 = UINT32_MAX;
	int64_t x83 = -2608286150929882691LL;
	int16_t x84 = INT16_MIN;
	int32_t t20 = 225;

	t20 = (((x81<x82)<=x83)^x84);

	if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x86 = INT16_MIN;
	static int8_t x88 = INT8_MIN;
	volatile int32_t t21 = 14845;

	t21 = (((x85<x86)<=x87)^x88);

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 80LLU;
	volatile int8_t x91 = -1;
	int32_t x92 = INT32_MIN;
	volatile int32_t t22 = INT32_MIN;

	t22 = (((x89<x90)<=x91)^x92);

	if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x95 = -926508456LL;
	volatile int64_t x96 = INT64_MIN;

	t23 = (((x93<x94)<=x95)^x96);

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x99 = 7432U;
	volatile int32_t t24 = 221865979;

	t24 = (((x97<x98)<=x99)^x100);

	if (t24 != -127) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x103 = INT16_MIN;
	static int8_t x104 = INT8_MAX;

	t25 = (((x101<x102)<=x103)^x104);

	if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	int64_t x106 = INT64_MIN;
	volatile int32_t x107 = -239;
	uint64_t x108 = 127074LLU;
	volatile uint64_t t26 = 5LLU;

	t26 = (((x105<x106)<=x107)^x108);

	if (t26 != 127074LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x111 = INT8_MIN;
	static uint8_t x112 = 35U;
	int32_t t27 = -29;

	t27 = (((x109<x110)<=x111)^x112);

	if (t27 != 35) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	int8_t x114 = INT8_MIN;
	int16_t x116 = INT16_MAX;
	volatile int32_t t28 = 496;

	t28 = (((x113<x114)<=x115)^x116);

	if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = 159LL;
	uint8_t x118 = 4U;
	int32_t t29 = 203401;

	t29 = (((x117<x118)<=x119)^x120);

	if (t29 != 5783) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x121 = INT32_MAX;
	uint16_t x122 = UINT16_MAX;
	int32_t x124 = INT32_MAX;
	static volatile int32_t t30 = 242;

	t30 = (((x121<x122)<=x123)^x124);

	if (t30 != 2147483646) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x125 = INT32_MIN;
	int16_t x127 = INT16_MAX;
	int64_t x128 = INT64_MIN;
	static int64_t t31 = 107586073951855LL;

	t31 = (((x125<x126)<=x127)^x128);

	if (t31 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -1;
	static int64_t x130 = INT64_MAX;
	volatile uint64_t x131 = UINT64_MAX;
	static int16_t x132 = -1;
	static int32_t t32 = -1;

	t32 = (((x129<x130)<=x131)^x132);

	if (t32 != -2) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	int32_t x134 = -1;
	static uint16_t x135 = 3453U;

	t33 = (((x133<x134)<=x135)^x136);

	if (t33 != 4294967294U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -176257907795303LL;
	volatile int32_t x139 = -1;
	static uint32_t x140 = UINT32_MAX;
	uint32_t t34 = UINT32_MAX;

	t34 = (((x137<x138)<=x139)^x140);

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = -1LL;
	uint64_t x142 = 105711133879902336LLU;
	uint32_t x143 = UINT32_MAX;
	uint32_t t35 = 42634U;

	t35 = (((x141<x142)<=x143)^x144);

	if (t35 != 4294967294U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MAX;
	uint64_t x146 = 27750791140492123LLU;
	volatile uint32_t x147 = 390848U;
	int16_t x148 = 280;
	int32_t t36 = 854;

	t36 = (((x145<x146)<=x147)^x148);

	if (t36 != 281) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = UINT32_MAX;
	int32_t x150 = -1;
	int32_t x151 = 20;
	static volatile int64_t t37 = 0LL;

	t37 = (((x149<x150)<=x151)^x152);

	if (t37 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x154 = 387U;
	int64_t x155 = INT64_MIN;
	volatile int16_t x156 = INT16_MAX;
	int32_t t38 = -53701542;

	t38 = (((x153<x154)<=x155)^x156);

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x157 = INT64_MIN;
	int8_t x158 = 3;
	volatile int64_t x159 = INT64_MIN;
	static int32_t t39 = 212;

	t39 = (((x157<x158)<=x159)^x160);

	if (t39 != 100) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MAX;
	static int16_t x162 = -1;
	uint8_t x163 = 4U;
	volatile uint32_t x164 = 0U;
	uint32_t t40 = 1U;

	t40 = (((x161<x162)<=x163)^x164);

	if (t40 != 1U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x166 = -3707409486LL;
	int32_t t41 = -13909;

	t41 = (((x165<x166)<=x167)^x168);

	if (t41 != 5938706) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x170 = -1;
	static int32_t x171 = 960959;
	int32_t x172 = -1;
	int32_t t42 = -5260781;

	t42 = (((x169<x170)<=x171)^x172);

	if (t42 != -2) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x173 = INT32_MIN;
	static int16_t x174 = INT16_MIN;
	int8_t x175 = INT8_MIN;
	static int64_t x176 = -1118LL;

	t43 = (((x173<x174)<=x175)^x176);

	if (t43 != -1118LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = 324705;
	uint16_t x178 = UINT16_MAX;
	int32_t x179 = -920433236;
	int32_t t44 = 3;

	t44 = (((x177<x178)<=x179)^x180);

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = 5515;
	uint32_t x182 = UINT32_MAX;
	uint16_t x183 = 24036U;
	uint32_t x184 = 1985719U;
	static uint32_t t45 = 173578752U;

	t45 = (((x181<x182)<=x183)^x184);

	if (t45 != 1985718U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 8534356363LLU;
	volatile int16_t x186 = 2176;
	volatile int16_t x187 = 113;
	int64_t x188 = INT64_MAX;
	static volatile int64_t t46 = -2580652899054LL;

	t46 = (((x185<x186)<=x187)^x188);

	if (t46 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = 91278U;
	static volatile int16_t x190 = -1;
	int64_t x191 = INT64_MAX;
	volatile uint32_t x192 = UINT32_MAX;
	volatile uint32_t t47 = 2123185010U;

	t47 = (((x189<x190)<=x191)^x192);

	if (t47 != 4294967294U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 1U;
	int16_t x194 = INT16_MIN;
	int16_t x195 = -1;
	static volatile int64_t t48 = INT64_MIN;

	t48 = (((x193<x194)<=x195)^x196);

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = UINT32_MAX;
	int64_t x198 = INT64_MIN;
	uint32_t x200 = UINT32_MAX;
	static volatile uint32_t t49 = 176761U;

	t49 = (((x197<x198)<=x199)^x200);

	if (t49 != 4294967294U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x202 = 0;
	static uint16_t x203 = 2U;

	t50 = (((x201<x202)<=x203)^x204);

	if (t50 != -764114320LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x205 = INT16_MIN;
	static volatile int32_t x206 = INT32_MAX;
	static int16_t x207 = INT16_MIN;
	volatile uint8_t x208 = 3U;
	volatile int32_t t51 = -234;

	t51 = (((x205<x206)<=x207)^x208);

	if (t51 != 3) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = -1;
	int8_t x210 = -1;
	volatile int32_t x211 = INT32_MIN;
	uint32_t x212 = 86827U;
	static uint32_t t52 = 30U;

	t52 = (((x209<x210)<=x211)^x212);

	if (t52 != 86827U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	volatile int32_t x215 = -1;
	uint64_t x216 = 330747870114367LLU;
	uint64_t t53 = 108299164083330LLU;

	t53 = (((x213<x214)<=x215)^x216);

	if (t53 != 330747870114367LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x218 = INT64_MIN;
	uint8_t x219 = 1U;
	volatile uint8_t x220 = 3U;
	static int32_t t54 = 33523072;

	t54 = (((x217<x218)<=x219)^x220);

	if (t54 != 2) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x222 = 3LLU;
	volatile int64_t x223 = 2127065840LL;
	uint8_t x224 = 46U;
	volatile int32_t t55 = -610052711;

	t55 = (((x221<x222)<=x223)^x224);

	if (t55 != 47) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x225 = INT64_MIN;
	uint8_t x226 = 0U;
	uint64_t x227 = 106LLU;
	static int32_t x228 = INT32_MIN;
	int32_t t56 = 0;

	t56 = (((x225<x226)<=x227)^x228);

	if (t56 != -2147483647) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint64_t x230 = UINT64_MAX;
	static volatile int32_t x231 = -6706104;
	int64_t t57 = INT64_MIN;

	t57 = (((x229<x230)<=x231)^x232);

	if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x233 = INT16_MIN;
	int64_t x234 = -1LL;
	volatile int16_t x235 = INT16_MIN;
	uint32_t x236 = 76058U;
	volatile uint32_t t58 = 151028U;

	t58 = (((x233<x234)<=x235)^x236);

	if (t58 != 76058U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x237 = 194U;
	int16_t x238 = -1;
	int64_t x239 = INT64_MAX;
	volatile int64_t t59 = 1LL;

	t59 = (((x237<x238)<=x239)^x240);

	if (t59 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = 0U;
	volatile int32_t x242 = -1;
	int16_t x243 = INT16_MIN;
	int64_t x244 = -582267480563LL;
	static int64_t t60 = -3210248562763LL;

	t60 = (((x241<x242)<=x243)^x244);

	if (t60 != -582267480563LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MAX;
	static int16_t x246 = -1;
	uint8_t x248 = UINT8_MAX;
	int32_t t61 = -16;

	t61 = (((x245<x246)<=x247)^x248);

	if (t61 != 254) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MAX;
	static int32_t x250 = -1;
	int32_t x251 = 42374845;
	static int32_t t62 = -21947;

	t62 = (((x249<x250)<=x251)^x252);

	if (t62 != -613) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x254 = INT64_MIN;
	volatile int16_t x256 = -1;
	volatile int32_t t63 = -310939;

	t63 = (((x253<x254)<=x255)^x256);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x258 = INT16_MAX;
	uint16_t x259 = 2U;

	t64 = (((x257<x258)<=x259)^x260);

	if (t64 != -2LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x262 = -460266348772418601LL;
	int32_t x264 = INT32_MIN;

	t65 = (((x261<x262)<=x263)^x264);

	if (t65 != INT32_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x266 = INT8_MIN;
	static uint32_t x267 = 0U;

	t66 = (((x265<x266)<=x267)^x268);

	if (t66 != -2LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x269 = UINT32_MAX;
	volatile uint8_t x270 = UINT8_MAX;
	static int16_t x271 = INT16_MIN;
	uint8_t x272 = UINT8_MAX;

	t67 = (((x269<x270)<=x271)^x272);

	if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x273 = -18;
	uint16_t x274 = UINT16_MAX;
	volatile int64_t x275 = INT64_MAX;
	static int16_t x276 = INT16_MIN;
	int32_t t68 = 113;

	t68 = (((x273<x274)<=x275)^x276);

	if (t68 != -32767) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -1LL;
	static uint64_t x278 = UINT64_MAX;
	static uint64_t x280 = 93578919626097LLU;
	volatile uint64_t t69 = 254650910LLU;

	t69 = (((x277<x278)<=x279)^x280);

	if (t69 != 93578919626096LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x282 = 1U;
	int16_t x283 = INT16_MAX;
	int8_t x284 = -9;
	volatile int32_t t70 = -947;

	t70 = (((x281<x282)<=x283)^x284);

	if (t70 != -10) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = 25LL;
	int16_t x286 = INT16_MAX;
	volatile int64_t x288 = 50287LL;
	volatile int64_t t71 = -2083193762843LL;

	t71 = (((x285<x286)<=x287)^x288);

	if (t71 != 50286LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = 632703;
	uint8_t x290 = UINT8_MAX;
	int8_t x291 = 20;
	static volatile int64_t x292 = 3LL;
	int64_t t72 = -2108LL;

	t72 = (((x289<x290)<=x291)^x292);

	if (t72 != 2LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x294 = INT64_MAX;
	int8_t x295 = 6;
	int16_t x296 = INT16_MIN;
	volatile int32_t t73 = -425143347;

	t73 = (((x293<x294)<=x295)^x296);

	if (t73 != -32767) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = 129743568455LLU;
	int32_t x299 = -228561895;
	int32_t t74 = -1793;

	t74 = (((x297<x298)<=x299)^x300);

	if (t74 != 51) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x301 = INT8_MAX;
	static volatile int32_t x303 = INT32_MIN;
	int64_t x304 = -116LL;
	volatile int64_t t75 = 79961004LL;

	t75 = (((x301<x302)<=x303)^x304);

	if (t75 != -116LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	uint8_t x306 = UINT8_MAX;
	int32_t x307 = INT32_MAX;
	uint32_t x308 = 4133229U;
	volatile uint32_t t76 = 4290U;

	t76 = (((x305<x306)<=x307)^x308);

	if (t76 != 4133228U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -1;
	int16_t x311 = 447;
	int8_t x312 = INT8_MIN;

	t77 = (((x309<x310)<=x311)^x312);

	if (t77 != -127) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint64_t x313 = UINT64_MAX;
	volatile uint16_t x314 = 7654U;
	uint16_t x315 = UINT16_MAX;

	t78 = (((x313<x314)<=x315)^x316);

	if (t78 != -2147483647) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x317 = UINT64_MAX;
	int16_t x318 = -669;
	int16_t x319 = INT16_MIN;
	volatile uint8_t x320 = 118U;
	volatile int32_t t79 = 111023;

	t79 = (((x317<x318)<=x319)^x320);

	if (t79 != 118) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = 7U;
	uint16_t x322 = UINT16_MAX;
	int16_t x324 = -62;
	int32_t t80 = -250;

	t80 = (((x321<x322)<=x323)^x324);

	if (t80 != -62) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x325 = 1222747886972856LLU;
	int8_t x326 = -1;
	int64_t x328 = -1LL;
	int64_t t81 = 1302867128422LL;

	t81 = (((x325<x326)<=x327)^x328);

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MIN;
	uint8_t x330 = 102U;
	volatile int32_t t82 = -1;

	t82 = (((x329<x330)<=x331)^x332);

	if (t82 != -2) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 7034U;
	volatile int16_t x334 = INT16_MIN;
	static uint64_t x335 = 1377741521830094082LLU;
	int64_t x336 = INT64_MIN;
	volatile int64_t t83 = 296849292661725313LL;

	t83 = (((x333<x334)<=x335)^x336);

	if (t83 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x338 = 12U;
	uint64_t x339 = 957688474802LLU;
	static int32_t t84 = 5;

	t84 = (((x337<x338)<=x339)^x340);

	if (t84 != -2147483647) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = UINT8_MAX;
	int8_t x342 = INT8_MAX;
	uint16_t x343 = UINT16_MAX;
	int8_t x344 = INT8_MIN;
	int32_t t85 = 86;

	t85 = (((x341<x342)<=x343)^x344);

	if (t85 != -127) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = 3431U;
	uint64_t x346 = 821083648LLU;
	int8_t x348 = -1;
	volatile int32_t t86 = -862407;

	t86 = (((x345<x346)<=x347)^x348);

	if (t86 != -2) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x350 = 350;
	static uint16_t x351 = 0U;
	volatile int32_t t87 = 851657147;

	t87 = (((x349<x350)<=x351)^x352);

	if (t87 != 16737) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x353 = INT32_MAX;
	uint64_t x354 = 1556LLU;
	int8_t x355 = INT8_MIN;
	int32_t x356 = -1;

	t88 = (((x353<x354)<=x355)^x356);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x357 = -1;
	volatile uint16_t x358 = 7547U;
	int64_t x359 = INT64_MIN;
	uint32_t x360 = 1U;

	t89 = (((x357<x358)<=x359)^x360);

	if (t89 != 1U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MAX;
	int32_t x362 = 3835;
	int16_t x363 = INT16_MAX;

	t90 = (((x361<x362)<=x363)^x364);

	if (t90 != -127) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x366 = 33U;
	uint8_t x367 = UINT8_MAX;
	int32_t t91 = -837270403;

	t91 = (((x365<x366)<=x367)^x368);

	if (t91 != 32766) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x369 = INT8_MIN;
	volatile int8_t x370 = INT8_MAX;
	int8_t x371 = INT8_MAX;

	t92 = (((x369<x370)<=x371)^x372);

	if (t92 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x373 = INT16_MIN;
	int64_t x374 = INT64_MIN;
	volatile int8_t x375 = -6;
	volatile uint64_t t93 = 1LLU;

	t93 = (((x373<x374)<=x375)^x376);

	if (t93 != 4225462117LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x378 = 7291U;
	static volatile int32_t t94 = 3144234;

	t94 = (((x377<x378)<=x379)^x380);

	if (t94 != 10) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MIN;
	volatile int64_t x382 = INT64_MAX;
	int64_t x383 = -1LL;
	int8_t x384 = INT8_MIN;
	int32_t t95 = -17078962;

	t95 = (((x381<x382)<=x383)^x384);

	if (t95 != -128) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	int8_t x386 = -13;
	int64_t x387 = 64196208LL;
	int32_t t96 = 75;

	t96 = (((x385<x386)<=x387)^x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = 45U;
	volatile uint8_t x390 = 43U;
	volatile int32_t x391 = INT32_MIN;
	static uint16_t x392 = 455U;
	volatile int32_t t97 = -1;

	t97 = (((x389<x390)<=x391)^x392);

	if (t97 != 455) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x393 = -74756;
	static int8_t x395 = INT8_MIN;
	uint8_t x396 = UINT8_MAX;
	static int32_t t98 = 13010072;

	t98 = (((x393<x394)<=x395)^x396);

	if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MIN;
	int32_t x398 = -4;
	uint8_t x399 = 34U;
	int32_t x400 = INT32_MIN;
	int32_t t99 = -2916367;

	t99 = (((x397<x398)<=x399)^x400);

	if (t99 != -2147483647) { NG(); } else { ; }
	
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

